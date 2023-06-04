
bool searchInBST(BinaryTreeNode<int> *root, int x) {
    // Write your code here.
    if(root == NULL) return false;
    if(root -> data == x){
        return true;
    }
    if(root -> data > x){
        return searchInBST(root -> left , x);
    }
    return searchInBST(root -> right , x);
}
