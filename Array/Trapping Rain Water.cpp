link-https://leetcode.com/problems/trapping-rain-water/

Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.

``````




class Solution {
public:
    int trap(vector<int>& height) { 
        int n=height.size();
        int left[n];
        int right[n];
        int max1=0;
        int max2=0;
        for(int i=0;i<n;i++){
            max1=max(height[i],max1);
            left[i]=max1;
        }
        for(int j=n-1;j>=0;j--){
            max2=max(height[j],max2);
            right[j]=max2;
        }
       
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+min(left[i],right[i])-height[i];
        }
        return sum;
    }
};

 
