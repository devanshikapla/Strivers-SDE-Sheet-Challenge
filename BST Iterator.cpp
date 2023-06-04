
class BSTiterator
{
    stack < TreeNode < int > * > st;
    public:
    void pushAll(TreeNode<int>* root){
        for(;root!= NULL;st.push(root), root= root->left);
    } 

    BSTiterator(TreeNode<int> *root)
    {
        // write your code here
        pushAll(root);
    }

    int next()
    {
        // write your code here
        TreeNode < int > * top = st.top();
        st.pop();
        pushAll(top -> right);
        return top -> data;
    }

    bool hasNext()
    {
        // write your code here
        if(st.size() > 0) return true;
        return false;
    }
};


/*
    Your BSTIterator object will be instantiated and called as such:
    BSTIterator iterator(root);
    while(iterator.hasNext())
    {
       print(iterator.next());
    }
*/
