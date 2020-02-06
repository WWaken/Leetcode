public class Rotate {
    public static void main(String[] args) {
        int[] nums = {1,2,5,7,4,6};
        int k = 3;
        rotate(nums, k);
        for (int i = 0; i < nums.length ; i++) {
            System.out.print(nums[i]);
        }
    }
    public static void rotate(int[] nums, int k){
        int n = nums.length;
        reverse(nums,0, n - 1);
        reverse(nums,0, k - 1);
        reverse(nums, k, n - 1);
    }
    public static void reverse(int[] nums,int start, int end){
        while(start < end){
            int tmp = nums[start];
            nums[start] = nums[end];
            nums[end] = tmp;
            start++;
            end--;
        }
    }
}
