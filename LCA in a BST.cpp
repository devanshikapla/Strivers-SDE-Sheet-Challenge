
TreeNode<int>* LCAinaBST(TreeNode<int>* root, TreeNode<int>* P, TreeNode<int>* Q)
{
	// Write your code here
    if(root == NULL) return NULL;
    int value = root -> data;
    if(value < P -> data && value < Q -> data){
        return LCAinaBST(root -> right , P , Q);
    }
    else if(value > P -> data && value > Q -> data ){
        return LCAinaBST(root -> left , P , Q);
    }
    return root;
}
