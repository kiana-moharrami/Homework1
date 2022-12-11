#include <iostream>
using namespace std;
const int m=10
;main()
{
	int a[m] , c ,i=2;
	a[0]=1;
	a[1]=1;
	cout<<"["<<0<<"]="<<a[0]<<endl;
	cout<<"["<<1<<"]="<<a[1]<<endl;
    	
    	while (i<10)
    	{
    		a[2]=a[0]+a[1];
    		cout<<a[2]<<endl;
    		a[0]=a[1];
    		a[1]=a[2];
    		i++;
	}
  

}