Input: n = 4
Output: "1211"
Explanation:
countAndSay(1) = "1"
countAndSay(2) = say "1" = one 1 = "11"
countAndSay(3) = say "11" = two 1's = "21"
countAndSay(4) = say "21" = one 2 + one 1 = "12" + "11" = "1211"

/////////////////

class Solution:
    def countAndSay(self, n: int) -> str:
        if n==1:
            return "1"
        s="11"
        if n==2:
            return s
        
        for i in range(3,n+1):
            s+="@"
            c=1
            a=""
            for j in range(1,len(s)):
                if s[j]==s[j-1]:
                    c+=1
                else:
                    a+=str(c)
                    a+=s[j-1]
                    c=1
                 
            s=a
        
        return (s)
            
        
