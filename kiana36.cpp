#include <iostream>
using namespace std;
main()
{
	int m,n;
	cin>>m>>n;
	
	while(m>(n-1))
	{
		m=m-n;
	}
	cout<<m;
}