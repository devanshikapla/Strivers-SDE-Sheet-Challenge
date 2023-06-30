#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void inorder(TreeNode<int> *root , int k , vector < int > & ans){
    if(root == NULL) return;
    inorder(root -> left , k , ans);
    ans.push_back(root -> data);
    inorder(root -> right , k , ans);

}
int kthSmallest(TreeNode<int> *root, int k)
{
	//	Write the code here.
    vector < int > ans;
    inorder(root , k , ans);
    return ans[k - 1];
}
