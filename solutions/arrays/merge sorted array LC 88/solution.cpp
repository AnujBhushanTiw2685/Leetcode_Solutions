#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution{

public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int j = 0, i = m; j < n; j++){
            nums1[i] = nums2[j];
            i++;
        }
        sort(nums1.begin(), nums1.end());
    }

};

int main() {

    // Input arrays example:
    vector<int> nums1 = {1,2,3,0,0,0}; // nums1 has extra space for nums2 elements
    int m = 3; // Number of elements in nums1
    vector<int> nums2 = {2,5,6}; // Second sorted array
    int n = 3; // Number of elements in nums2

    // Create Solution object
    Solution sol;

     // Call merge function
    sol.merge(nums1 , m , nums2, n);

    // Output the merged array
    cout << "Merged Array: ";
    for(int num: nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}