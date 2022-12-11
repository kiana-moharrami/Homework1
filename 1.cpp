#include <iostream>
using namespace std;
main()
{
	int a[5] , b[5],j;
	cout<<"enter 5 element:"<<endl;
	for(int i=0 ; i<5 ; i++)
	{
		cout<<"a["<<i<<"]:";
		cin>>a[i];
	
	}	
	
		cout<<"enter 5 element:"<<endl;
		for(int i=0 ; i<5 ; i++)
	{
		cout<<"b["<<i<<"]:";
		cin>>b[i];
	}
	for(int j=0 ; j<5 ; j++)
	{
	
	int temp=a[j];
	a[j]=b[j];
	b[j] = temp;

	}
	
	for (int j=0 ; j<5 ; j++)
	{
			cout<<"a["<<j<<"]:"<<a[j]<<endl;
	
	}
	
		
	for (int j=0 ; j<5 ; j++)
	{
			cout<<"b["<<j<<"]:"<<b[j]<<endl;
	
	}
}