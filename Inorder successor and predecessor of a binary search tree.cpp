int successor(BinaryTreeNode < int > * root
    ,int key){
    int successor = -1;
    while(root != NULL){
        if(key >= root -> data){
            root = root -> right;
        }
        else{
            successor = root -> data;
            root = root -> left;
        }
    }
    return successor;
}
int predecesor(BinaryTreeNode < int > * root,
    int key){
    int predecessor = -1;
    while(root != NULL){
        if(key <= root -> data){
            root = root -> left;
        }
        else{
            predecessor = root -> data;
            root = root -> right;
        }
    }
    return predecessor;
}
pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    // Write your code here.

    int pre = predecesor(root , key);
    int suc = successor(root , key);
    
    
    return {pre , suc};
}
