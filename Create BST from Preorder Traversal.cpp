
TreeNode < int > * build(vector < int > & A , int &i , int &bound){
    if(i == A.size() || A[i] > bound) return NULL;
    TreeNode <int> * root = new TreeNode < int >  (A[i++]);
    root -> left = build(A , i , root -> data);
    root -> right = build(A, i , bound);
    return root;
}
TreeNode<int>* preOrderTree(vector<int> &preOrder){
    // Write your code here.
    int i = 0;
    int bound = INT_MAX;
    return build(preOrder , i , bound);
}
