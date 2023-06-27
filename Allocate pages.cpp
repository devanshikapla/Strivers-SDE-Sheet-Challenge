#include <bits/stdc++.h> 
bool isPossible(int n , int m , vector < int > & arr , long long int mid){
	long long int count = 1;
	long long int total = 0;
	for(int i = 0 ; i < m ; i++){
		if(total + arr[i] <= mid){
			total += arr[i];
		}
		else{
			count++;
			if(count > n || arr[i] > mid) return false;
			else{
				total = arr[i];
			}
		}
	}
	return true;
}
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	// Write your code here.
	long long int start = 0;
	long long int sum = 0;
	for(auto it : time){
		sum = sum + it;
	}
	long long int  end = sum;
	long long int ans = -1;

	while(start <= end){
		long long int mid = (start + (-start + end)/2);
		if(isPossible(n , m , time , mid)){
			ans = mid;
			end = mid - 1;
		}
		else{
			start = mid + 1;
		}
	}
	return ans;
}
