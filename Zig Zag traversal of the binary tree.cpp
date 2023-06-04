
vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    vector < int > ans;
    if(root == NULL) return ans;
    queue < BinaryTreeNode < int > * > q;
    q.push(root);
    int cnt = 1;
    while(!q.empty()){
        int n = q.size();
        vector < int > level;
        for(int i = 0; i < n ; i++){
            BinaryTreeNode < int > * top = q.front();
            q.pop();
            if(top -> left != NULL){
                q.push(top -> left);
            }
            if(top -> right != NULL) q.push(top -> right);
            
            level.push_back(top -> data);
        }
        if(cnt % 2 == 0){
            reverse(level.begin() , level.end());

            for(auto it : level){
                ans.push_back(it);
            }
        }
        else{
            for(auto it : level){
                ans.push_back(it);
            }
        }
        cnt++;

    }
    return ans;
    // Write your code here!
}
