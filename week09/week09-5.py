class Solution:
    def smallestFromLeaf(self, root: Optional[TreeNode]) -> str:
        table = "abcdefghijklmnopqrstuvwxyz"
        def helper(root, nowStr):
            nextStr = table[root.val] + nowStr
            if root.left==None and root.right==None: return nextStr
            if root.left==None:return helper(root.right, nextStr)
            if root.right==None: return helper(root.left, nextStr)
            left = helper(root.left,nextStr)
            right = helper(root.right,nextStr)
            return min(left,right)
        return helper(root, '')
    
 