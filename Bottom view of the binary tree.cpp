
vector<int> bottomView(BinaryTreeNode<int> * root){

    // Write your code here.
    vector < int > ans;
    if(root == NULL) return ans;
    map < int , int > mpp;
    queue < pair < BinaryTreeNode < int > * , int >> q;
    q.push({root , 0});
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        BinaryTreeNode < int > * top = it.first;
        int line = it.second;
        mpp[line] = top -> data;
        if(top -> left != NULL){
            q.push({top -> left , line - 1});
        }
        if(top -> right != NULL){
            q.push({top -> right , line + 1});
        }
    }
    for(auto it : mpp){
        ans.push_back(it.second);
        
    }
    return ans;
}
