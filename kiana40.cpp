#include <iostream>
using namespace std;
main()
{
	int x,i,sum;
	cout<<"please enter anumber:";
	cin>>x;
	for(i=1; i<=x/2 ; i++)
	{
	
		if(x%i==0)
		cout<<"Divisor is:"<<i<<"\t";
		sum+=i;
	}
		cout<<"sum is:"<<sum;

}