class Node
{
	int data;
	Node left,right;
	
 	Node(int d)
	{
		data = d;
		left = right = null;		
	}
} 

class Tree
{
    
    
    int height(Node root){
        if(root == null){
            return 0;
        }
        
        int left = height(root.left);
        int right = height(root.right);
        
        int ans = Math.max(left, right) + 1;
        return ans;
    }
    
    //Function to check whether a binary tree is balanced or not.
    boolean isBalanced(Node root)
    {
	// Your code here
	if(root == null){
	    return true;
	}
	
	boolean left = isBalanced(root.left);
	boolean right = isBalanced(root.right);
	
	boolean diff = Math.abs(height(root.left) - height(root.right)) <= 1;
	if(left==true && right == true && diff == true){
	    return true;
	}
	else{
	    return false;
	}
    }
    
    
}