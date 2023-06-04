#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   vector < vector < int >> ans;
   for(int i = 0 ; i < arr.size() ; i++){
      for(int j = i  + 1 ; j < arr.size() ; j++){
         if(arr[i] + arr[j] == s){
            if(arr[i] < arr[j]){
               ans.push_back({arr[i] , arr[j]});
            }
            else{
               ans.push_back({arr[j] , arr[i]});
            }

         }
      }
   }
   sort(ans.begin() , ans.end());
   return ans;
}
