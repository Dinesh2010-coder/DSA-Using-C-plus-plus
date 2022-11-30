class Node {
    int data;
    Node left;
    Node right;
    Node(int data) {
        this.data = data;
        left = null;
        right = null;
    }
class Solution {
    // Function to return the diameter of a Binary Tree.
    /*
    Pair<Integer, Integer> diameterFast(Node root){
        if(root == null){
            Pair<Integer, Integer> p = new Pair<Integer, Integer>(0,0);
            return p;
        }
        
        Pair<Integer, Integer> left = diameterFast(root.left);
        Pair<Integer, Integer> right = diameterFast(root.right);
        
        int op1 = left.first;
        int op2 = right.first;
        int op3 = left.second+right.second+1;
        
        Pair<Integer, Integer> ans;
        ans.first = Math.max(op1, Math.max(op2,op3));
        ans.second = Math.max(left.second,right.second);
        return ans;
    }
    
    int diameter(Node root){
        return diameterFast(root).first;
    }
    
    */
    
    static int height(Node root){
        if(root==null){
            return 0;
        }
        
        int left = height(root.left);
        int right = height(root.right);
        int ans = Math.max(left,right) + 1;
        return ans;
    }
    int diameter(Node root) {
        // Your code here
        if(root == null){
            return 0;
        }
        
        int op1 = diameter(root.left);
        int op2 = diameter(root.right);
        int op3 = height(root.left) + height(root.right) + 1;
        int ans = Math.max(op1, Math.max(op2, op3));
        return ans;
    }
    
}
}