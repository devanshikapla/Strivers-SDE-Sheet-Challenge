Solution that accepted on code studio and gfg as the qs was bit different.
  
int getMaxWidth(TreeNode<int> *root)
{
    // Write your code here.
    if(!root)
    return 0;
    int ans=0;
    
       vector<int>v;
       queue<TreeNode<int> *>q;
       q.push(root);
       
       while(!q.empty()){
         int n = q.size();
         for(int i=0;i<n;i++){
             TreeNode<int> * temp = q.front();
             q.pop();
             if(n>ans)
             ans = n;
             
             if(temp->left)
             q.push(temp->left);
             if(temp->right)
             q.push(temp->right);
         }
       }
       return ans;
}

Solution for leetcode

int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int width=0;
        queue<pair<TreeNode*, long long>> q;
        q.push({root, 0});
        
        while(!q.empty()){
            int size=q.size();
            int inmin=q.front().second;
            int first, last;
            for(int i=0;i<size;i++){
                int curr=q.front().second-inmin;
                TreeNode* node=q.front().first;
                q.pop();
                if(!i) first=curr;
                if(i==size-1) last =curr;
                if(node->left) q.push({node->left, (long long) curr*2+1});
                if(node->right) q.push({node->right, (long long) curr*2+2});
            }
            width=max(width, last-first+1);
        }
        return width;
    }
