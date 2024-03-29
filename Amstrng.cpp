bool checkArmstrong(int n){
	//Write your code here
	int dup = n;
	int sum=0;
	while(n>0)
	{
		int lastDigit = n%10;
		sum += lastDigit*lastDigit*lastDigit;
		n=n/10;
		
	}
	if(dup==sum) return true;
	else return false;
}
