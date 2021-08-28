link-https://leetcode.com/problems/evaluate-the-bracket-pairs-of-a-string/

Example 1:

Input: s = "(name)is(age)yearsold", knowledge = [["name","bob"],["age","two"]]
Output: "bobistwoyearsold"
Explanation:
The key "name" has a value of "bob", so replace "(name)" with "bob".
The key "age" has a value of "two", so replace "(age)" with "two".
  
  ```````````````
  


class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) 
    {
        unordered_map<string, string> mp;
        for(int i=0; i<knowledge.size(); i++)
            mp[knowledge[i][0]] = knowledge[i][1];
        string res="";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '(')
            {
                i++;
                string key="";
                while(s[i] != ')')
                {
                    key += s[i];                    
                    i++;
                }
                if(mp.find(key) != mp.end())
                    res += mp[key];
                else
                    res += '?';
                continue;
            }
            res += s[i];
        }
        return res;
    }
};
 
