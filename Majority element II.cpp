#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &v)
{
    int n = v.size();
    int cnt1 = 0;
    int cnt2 = 0;
    int element1 = INT_MIN;
    int element2 = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        if(cnt1 == 0 && element2 !=v[i]){
            cnt1 = 1;
            element1 = v[i];
        }
        else if(cnt2 == 0 && element1 != v[i]){
            cnt2 = 1;
            element2 = v[i];
        }
        else if(v[i] == element1) cnt1++;
        else if(v[i] == element2) cnt2++;
        else{
            cnt1--;
            cnt2--;
        }
    }
    vector < int > ans;
     cnt1 = 0;
     cnt2 = 0;
    for(int i = 0 ; i < n ; i++){
        if(v[i] == element1) cnt1++;
        if(v[i] == element2) cnt2++;

    }
    int mini = int(n / 3) + 1;
    if(cnt1 >= mini) ans.push_back(element1);
    if(cnt2 >= mini) ans.push_back(element2);
    return ans;
}
