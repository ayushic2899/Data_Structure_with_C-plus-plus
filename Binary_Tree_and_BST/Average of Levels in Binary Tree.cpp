link-https://leetcode.com/problems/average-of-levels-in-binary-tree/

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from collections import deque
class Solution:
    def averageOfLevels(self, root: TreeNode) -> List[float]:
        q1=deque()
        q2=deque()
        q1.appendleft(root)  #3
        l=[]
        res=[]
        while(q1):
            temp=q1.pop() #9          q1=20
            
            l.append(temp.val) #9

            if temp.left:  
                q2.appendleft(temp.left) #=9
            if temp.right:
                q2.appendleft(temp.right) #9, 20

            if not q1:  
                
                res.append(sum(l)/len(l))  #[3]
                l=[]   
                q1=q2
                q2=deque()
            
        return res
