#include <iostream>
using namespace std;
main()
{
	int m,n,p=1,i;
	cout<<"please enter base number:";
	cin>>m;
	cout<<"please enter pow nuber:";
	cin>>n;
	
	for(i=1 ;i<=n ; i++)
	
		p*=m;
		cout<<p;
	
}