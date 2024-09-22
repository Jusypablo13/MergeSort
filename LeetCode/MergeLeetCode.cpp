#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums3(n + m);
        int left = 0;
        int right = 0;
        int index = 0;

        while (left < m && right < n) {
            if (nums1[left] <= nums2[right]) {
                nums3[index] = nums1[left];
                left++;
            } else {
                nums3[index] = nums2[right];
                right++;
            }
            index++;
        }

        while (left < m) {
            nums3[index] = nums1[left];
            index++;
            left++;
        }

        while (right < n) {
            nums3[index] = nums2[right];
            index++;
            right++;
        }

        for (int i = 0; i < n + m; i++) {
            nums1[i] = nums3[i];
        }
    }
};

int main() {
    vector<int> nums1 = {0};
    vector<int> nums2 = {1}; 
    int m = 0;
    int n = 1;

    Solution sol;
    sol.merge(nums1, m, nums2, n); 
    for (int i = 0; i < m + n; i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;

    return 0;
}