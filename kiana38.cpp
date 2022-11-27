#include <iostream>
using namespace std;
main()
{
	int m,n,i;
	cin>>m>>n;
	
	while(m>(n-1))
	{
		m=m-n;
		i++;
	}
	cout<<m<<endl<<i;
}