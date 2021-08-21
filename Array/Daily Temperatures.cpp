link-https://leetcode.com/problems/daily-temperatures/

Example 1:

Input: temperatures = [73,74,75,71,69,72,76,73]
Output: [1,1,4,2,1,1,0,0]

```````


class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        int n=T.size();
        stack<int> s;
	vector<int> ans(n, 0);
	for (int i = 0; i < n; ++i) {
		while (!s.empty() and T[s.top()] < T[i]) {
			int j = s.top(); s.pop();
			ans[j] = i - j;
		}
		s.push(i);
	}
	return ans;
    }
};
