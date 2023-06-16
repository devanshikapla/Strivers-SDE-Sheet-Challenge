#include <bits/stdc++.h> 
void solve(int index , int sum , int n , vector < int > & num , vector < int > & arr){
    if(index == n){
        arr.push_back(sum);
        return;
    }
    //Take call;
    solve(index + 1 , sum + num[index] , n , num , arr);
    //Not take call;
    solve(index + 1 , sum , n , num , arr);

}
vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    int n = num.size();
    vector < int > ans;
    
    solve( 0 , 0 , n , num , ans);
    sort(ans.begin() , ans.end());
    return ans;
}
