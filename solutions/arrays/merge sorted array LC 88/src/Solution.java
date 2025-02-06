import java.util.Arrays;

class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        //copy elements from nums2 to nums1's empty spaces
        for(int j = 0, i = m; j < n; j++, i++){
            nums1[i] = nums2[j];
        }
        Arrays.sort(nums1);
    }

    public static void main(String[] args) {
        //Input arrays
        int[] nums1 = {1,2,3,0,0,0};
        int m = 3; //Number of elements in nums1

        int[] nums2 = {2,5,6}; // second sorted array
        int n = 3; // Number of elements in nums2

        // create Solutions object
        Solution sol = new Solution();

        // Call merge function 
        sol.merge(nums1, m, nums2, n);

        //Output the merged array
        System.out.println("Merged Array: " + Arrays.toString(nums1));
    }
}