Input: s = "abcabc"
Output: 10
Explanation: The substrings containing at least one occurrence of the characters a, b and c are "abc", "abca", "abcab", "abcabc", "bca", "bcab", "bcabc", "cab", "cabc" and "abc" (again).
  
  '''



class Solution {
public:
    int numberOfSubstrings(string s) {
        queue<int>a,b,c; 
        int ans=0;
        int i=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='a'){
                a.push(i);
            }
            else if(s[i]=='b'){
                b.push(i);
            }
            else{
                c.push(i);
            }
        }
        while(!a.empty() && !b.empty() && !c.empty()){
            int v=0;
             
            char ch=s[i];
            if(ch == 'a'){
               v=max(b.front(),c.front()); 
                a.pop();
            }
            else if(ch=='b'){
               v=max(a.front(),c.front());
                b.pop();
            }
            else{
                v=max(a.front(),b.front());
                c.pop();
            }
            ans=ans+(n-v);
            i++;
        }
        return ans;
    }
};

 
 
