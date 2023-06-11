#include <bits/stdc++.h>
//Optimal approach
int findMajorityElement(int arr[], int n) {
	//moores voting algorithm
	int cnt = 0;
	int element;
	for(int i = 0 ; i < n ; i++){
		if(cnt == 0){
			cnt = 1; 
			element = arr[i];

		}
		else if(arr[i] == element) cnt++;
		else cnt--;
	}
	int cnt1 = 0; 
	for(int i = 0 ; i < n ; i++){
		if(arr[i] == element) cnt1++;

	}
	if(cnt1 > (n / 2)){
		return element;
	}
	return -1;
}
