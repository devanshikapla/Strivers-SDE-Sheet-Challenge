vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.
    
    vector < int > ans;
    if(root == NULL) return ans;
    queue < BinaryTreeNode<int>* > q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        vector < int > level;
        for(int i = 0 ; i < size ; i++){
           BinaryTreeNode<int>* top = q.front();
           q.pop();
           if(top -> left != NULL){
               q.push(top -> left);
           }
           if(top -> right != NULL){
               q.push(top -> right);
           }
           level.push_back(top -> val);

        }
        for(auto it : level){
            ans.push_back(it);
        }
    }
    return ans;
}
