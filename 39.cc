class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int len = candidates.size();
        vector<int> ans;
        findSum(candidates, 0, len, target, ans);
        return res;
    }

    void findSum(vector<int> candidates, int begin, int end, int target, vector<int> ans) {
        if (target == 0) {
            res.push_back(ans);
            return;
        }
        for (int i = begin; i < end; ++i) {
            if (target >= candidates[i]) {
                ans.push_back(candidates[i]);
                findSum(candidates, i, end, target - candidates[i], ans);
                ans.pop_back();
            }
        }
    }
};