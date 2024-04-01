void isKthSet(int n,int k){
    int x =(1<<(k-1));
    if ((n&k)!=0) return true;
    else return false ;
}