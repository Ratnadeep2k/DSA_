vector<int> majorityElement(vector<int> v) {
	// Write your code here
	vector<int> ans;
	map<int,int> mpp;
	int mini = (int)(v.size()/3) +1;
	for(int i =0;i<v.size();i++){
		mpp[v[i]]++;
		if(mpp[v[i]]==mini) {
			ans.push_back(v[i]);
		}
		if(ans.size()==2) break;

	}
	sort(ans.begin(),ans.end());
	return ans;
}