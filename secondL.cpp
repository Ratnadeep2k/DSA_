int secondLargest(vector<int> &a,int n){
    int largest = a[0];
    int slargest =-1;
    for (size_t i = 0; i < n i++)
    {
        /* code */
        if (a[i]>largest)
        {
            /* code */
            slargest = largest;
            largest = a[i];
        }
        else if (a[i] <largest && a[i]>slargest)
        {
            /* code */
            slargest = a[i];
        } 
    }
    return slargest;
    
}
 int secondSmallest(int  n ,vector<int> &a){
    int smallest = a[0];
    int secondSmallest = INT_MAX;
   for (size_t i = 0; i < n; i++)
   {
    if (a[i]<smallest)
    {
        /* code */
        secondSmallest = smallest;
        smallest = a[i];

    }
    else if( a[i]!= smallest && a[i]<secondSmallest){
        secondSmallest = a[i];
    }
    
   }
   return secondSmallest;

 }





vector<int> getSecondOrderElements(int n,vector<int>a){
    int slargest = secondLargest(a,n);
    int sSmallest = secondSmallest(a,n);
    return {slargest,sSmallest};
}