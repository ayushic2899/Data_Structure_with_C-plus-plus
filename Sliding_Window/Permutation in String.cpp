Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: s2 contains one permutation of s1 ("ba")

'''


class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l1=s1.size();
        int l2=s2.size();
        vector<int>a(26),b(26);
        for(char ch: s1){
            a[ch-'a']++;
        }
        for(int i=0;i<l2;i++){
            b[s2[i]-'a']++;
            if(i>=l1){
                b[s2[i-l1]-'a']--;
            }
            if(a==b){
                return true;
            }
        }
        return false;
    }
};

 
