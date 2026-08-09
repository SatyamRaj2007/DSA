class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;

    void dfs(vector<int>& candidates, int target, int idx) {
        if (target == 0) {
            ans.push_back(path);
            return;
        }

        for (int i = idx; i < candidates.size(); i++) {
            if (candidates[i] > target)
                continue;

            path.push_back(candidates[i]);
            dfs(candidates, target - candidates[i], i); // reuse same number
            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        dfs(candidates, target, 0);
        return ans;
    }
};