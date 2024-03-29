vector<int> reverseArray(int n, vector<int> &nums)
{
    int i=0,j=n-1;
    while(i<j)
    {
        swap(nums[i],nums[j]);
        i++;
        j--;
    }
    return nums;
    
}
