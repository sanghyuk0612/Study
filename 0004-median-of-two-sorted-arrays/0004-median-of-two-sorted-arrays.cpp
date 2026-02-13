class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1, n2;
        n1 = 0, n2 = 0;
        int end = 0;
        end = nums1.size()+nums2.size();
        int cnt = 0;
        vector<int> mergeV;
        double result;
        if ((nums1.size()+nums2.size())%2 == 0) {
            end = end/2 -1;
            while (cnt < end+2) {
                cnt++;
                if (n1>=nums1.size()) {
                    mergeV.push_back(nums2[n2]);
                    n2++;
                    continue;
                }
                if (n2>=nums2.size()) {
                    mergeV.push_back(nums1[n1]);
                    n1++;
                    continue;
                }
                if (nums1[n1]<nums2[n2]) {
                    mergeV.push_back(nums1[n1]);
                    n1++;
                }
                else {
                    mergeV.push_back(nums2[n2]);
                    n2++;
                }
            }
            result = (double)(mergeV[mergeV.size()-1]+mergeV[mergeV.size()-2]);
            return result/2;
        }
        else {
            end = end / 2;
            while (cnt < end+1) {
                cnt++;
                if (n1>=nums1.size()) {
                    mergeV.push_back(nums2[n2]);
                    n2++;
                    continue;
                }
                if (n2>=nums2.size()) {
                    mergeV.push_back(nums1[n1]);
                    n1++;
                    continue;
                }
                if (nums1[n1]<nums2[n2]) {
                    mergeV.push_back(nums1[n1]);
                    n1++;
                }
                else {
                    mergeV.push_back(nums2[n2]);
                    n2++;
                }
            }
            result = (double)(mergeV[mergeV.size()-1]);
            return result;
        }
    }
};