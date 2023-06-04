#include <bits/stdc++.h> 
/**********************************************************

    Following is the Binary Tree Node structure:

    template <typename T>
    class BinaryTreeNode {
        public: 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() {
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };
***********************************************************/

class BSTIterator{
    stack < BinaryTreeNode<int>* > st;
    bool reverse = true;
    public :
    BSTIterator(BinaryTreeNode<int>* root , bool isReverse){
        reverse = isReverse;
        pushAll(root);
    }
    bool hasNext (){
        if(st.size() > 0) return true;
        return false;
    }
    int next(){
        BinaryTreeNode<int>* top = st.top();
        st.pop();
        if(!reverse) pushAll(top -> right);
        else pushAll(top -> left);
        return top -> data;
    }
    private:
    void pushAll(BinaryTreeNode<int> * node) {
        for(;node != NULL; ) {
             st.push(node);
             if(reverse == true) {
                 node = node->right; 
             } else {
                 node = node->left; 
             }
        }
    }
};
bool pairSumBst(BinaryTreeNode<int> *root, int k)
{
    // Write your code here
    if(root == NULL) return false;
    BSTIterator first(root , false);
    BSTIterator second(root , true);
    int i = first.next();
    int j = second.next();
    while(i < j){
        if(i + j  == k) return true;
        else if(i + j < k) i = first.next();
        else j = second.next();
    }
    return false;
}
