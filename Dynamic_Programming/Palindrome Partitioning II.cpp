link-https://leetcode.com/problems/palindrome-partitioning-ii/

Input: s = "aab"
Output: 1
Explanation: The palindrome partitioning ["aa","b"] could be produced using 1 cut.
  
`````


class Solution {
public:
    int dp[2001][2001];
    bool isPalindrom[2001][2001];
    bool isPalin(string &s, int i, int j)
        {
           while(i<j){
            if(s[i] != s[j]){

                return isPalindrom[i][j]= false;
            }
            i++;
            j--;
        }
        	return isPalindrom[i][j] = true;
        }
   

    int solve(string &str, int i, int j) {
    if (i > j || isPalindrom[i][j] == 1 || i == j )
		return 0;
	if (dp[i][j] != -1) return dp[i][j];
	if (isPalin(str, i, j))
		return dp[i][j] = 0;
	int ans = str.length()-1;
	for (int k = i; k <= j - 1; k++)
	{
	// 	int tempans = solve(str, i, k) +
	// 	              solve(str, k + 1, j) + 1;
        if(isPalin(str, i, k)){
            int tempans = 1+solve(str, k+1, j);
            if (tempans < ans)
			ans = tempans;
        }
		
	}
	return dp[i][j] = ans;
}
    int minCut(string str) {
        int n = str.length();
	    memset(dp, -1, sizeof dp);
        memset(isPalindrom, 0, sizeof isPalindrom);

	    return solve(str, 0, n - 1);
    }
};
