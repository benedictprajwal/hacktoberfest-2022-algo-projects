// contributed by: Tapish Katiyar (https://github.com/Tapish1511)
// question link: https://leetcode.com/problems/deepest-leaves-sum/

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    int sum = 0;
    
    public int deepestLeavesSum(TreeNode root) {
        Queue<TreeNode> qu = new LinkedList<>();
        qu.add(root);
        qu.add(null);
        while(!qu.isEmpty()){
            TreeNode node = qu.poll();
            if(node == null){
                if(qu.isEmpty()) return sum;
                sum = 0;
                qu.add(null);
                continue;
            }
            if(node.left != null) qu.add(node.left);
            if(node.right != null) qu.add(node.right);
            sum += node.val;
        }
        return sum;
        
    }
    
   
}
