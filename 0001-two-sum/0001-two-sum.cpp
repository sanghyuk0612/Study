class Solution {
public:
        vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> tmp;
        for (int i = 0 ; i<nums.size();i++) {
            tmp.push_back({nums[i],i});
        }

        sort(tmp.begin(), tmp.end());
        int left, right;
        left = 0;
        right = tmp.size()-1;
        while (tmp[left].first+tmp[right].first != target) {
            if (tmp[left].first+tmp[right].first <target) {
                left++;
            }
            else {
                right--;
            }
        }
        vector<int> result = {tmp[left].second, tmp[right].second};
        return result;
    }
};
//2 3 4
