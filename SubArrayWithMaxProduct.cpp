#include<bits/stdc++.h>

int subarrayWithMaxProduct(vector<int> &arr){
	// Write your code here.
	int  pre =1;
	int suff =1;
	int ans = INT_MIN;
	int n = arr.size();
	for(int i =0;i<n;i++){
		if(pre == 0) pre =1;
		else if(suff==0) suff =1;
		pre = arr[i]*pre;
		suff = suff * arr[n-i-1];
		 ans = max(ans,(pre,suff));

	}
	return ans ;
}
