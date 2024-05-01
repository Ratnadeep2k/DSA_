vector<int> majorityElement(vector<int> v) {
	// Write your code here
	vector<int> ls;
	map<int,int> mpp;
	int mini = (int)(v.size()/3) +1;
	for(int i =0;i<v.size();i++){
		mpp[v[i]]++;
		if(mpp[v[i]]==mini) {
			ls.push_back(v[i]);
		}
		if(ls.size()==2) break;

	}
	sort(ls.begin(),ls.end());
	return ls;
}