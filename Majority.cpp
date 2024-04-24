#include<bits/stdc++.h>
int majorityElement(vector<int> v) {
	// Write your code here
	map<int,int> mpp;
	for(int i =0;i<v.size();i++){
		mpp[v[i]]++;
	}
	for(auto st : mpp){
		if(st.second> (v.size()/2)){
			return st.first;
		}
	}
	return -1;
}