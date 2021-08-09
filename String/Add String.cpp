class Solution {
public:
    string addStrings(string nums1, string nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        string f="";
        while(n1<n2){
            nums1="0"+nums1;
            n1+=1;
        }
        while(n2<n1){
            nums2="0"+nums2;
            n2+=1;
        }
        int carry=0;
        for(int i=n1-1;i>=0;i--){
            int c1 =nums1[i]-'0';
            int c2 =nums2[i]-'0';
            int sum=carry+c1+c2;
            if(i==0){
                string ss=to_string(sum);
                f=ss+f;
                break;
            }
            f=to_string(sum%10)+f;
            carry=sum/10;
        }
        return f; 
    }
};
