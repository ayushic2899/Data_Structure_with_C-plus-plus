link-https://leetcode.com/problems/uncommon-words-from-two-sentences/

Example 1:

Input: s1 = "this apple is sweet", s2 = "this apple is sour"
Output: ["sweet","sour"]

`````````````````


class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string>v;
        unordered_map<string,int>mp;
        string s3="";
        for(int i=0;i<s1.size();i++){
            if(s1[i]==' '){
                mp[s3]++;
                s3="";
            } 
            else{
                s3+=s1[i];
            }
        }
         mp[s3]++;
        s3="";
         for(int i=0;i<s2.size();i++){
            if(s2[i]==' '){
                mp[s3]++;
                s3="";
            } 
            else{
                s3+=s2[i];
            }
        }
        mp[s3]++;
        for(auto i:mp){
            if(i.second == 1){
                v.push_back(i.first);
            }
        }
        return v;
    }
};
