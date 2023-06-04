
void dfs(TreeNode < int > * root , int level , vector <int > & ans){
    if(root == NULL) return;
    if(ans.size() == level) ans.push_back(root -> data);
    //recursive calls;
    dfs(root -> left , level + 1 , ans);
    dfs(root -> right , level + 1 , ans);

}
vector<int> getLeftView(TreeNode<int> *root)
{
    vector < int > ans;
    dfs(root , 0 , ans);
    return ans;
}
