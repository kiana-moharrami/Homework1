#include <iostream>
using namespace std;
main()
{
	int n[9]={10 , 20 , 30 , 40 , 50 , 60 , 70 , 80 , 90}
	;int i, m;
	
	

	;for( i=0 ; i<9 ; i++)
	{
	
		cout<<"["<<i<<"]="<<n[i]<< endl;
	}	


	cout<<"please enter a number:";
	cin>>m;
	
	int o[10]={10 , 20 , 30 , 40 , 50 , 60 , 70 , 80 , 90 , m}
	
		;for( i=0 ; i<10 ; i++)
		{
	
		cout<<"["<<i<<"]="<<o[i]<< endl;
		
		}

	for(i=1 ; i<10 ; i++)
	{
		for( int j=0 ; j<(10-i) ; j++)
			if(o[j] > o[j+1])
			{
				 int temp = o[j];
				o[j]=o[j+1];
				o[j+1]=temp;
			}
	}

	
	cout<<"Array after bubble sort:";
	for(i=0 ; i<10 ; i++)
	cout<<"["<<i<<"]="<<o[i]<< endl;

}