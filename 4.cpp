#include <iostream>
using namespace std;
const int n=10;
main()
{
	cout<<"Enter n element of array:";
	int o[n];
	
	
	
		;for(int i=0 ; i<n ; i++)
		{
		cin>>o[i];
		cout<<"["<<i<<"]="<<o[i]<< endl;
		
		}

	for(int i=1 ; i<n ; i++)
	{
		for( int j=0 ; j<(n-i) ; j++)
			if(o[j] > o[j+1])
			{
				 int temp = o[j];
				o[j]=o[j+1];
				o[j+1]=temp;
			}
	}

	
	cout<<"Array after bubble sort:"<<endl;
	for(int i=0 ; i<n ; i++)
	{
	
	cout<<"["<<i<<"]="<<o[i]<< endl;
	}
	cout<<"the second element:"<<o[1];

}