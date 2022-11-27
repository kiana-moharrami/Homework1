#include <iostream>
using namespace std;
main() 
{
	int x,y;
	cin>>x;
	
	if(x<6)
	{
	   cout<<y;
	}
    else if(x>=6 && x<8)
	{
		cout<<y-(y*5/100);
	}
	 else if (x>=8&&x<10)
	{
		cout<<y-(y*10/100);
	}
	else if (x>=10&&x<14)
	{
		cout<<y-(y*15/100);
	}
     else if (x>=14&&x<18)
	{
		cout<<y-(y*20/100);
	}
	else if (x>=18&&x<25)
	{
		cout<<y-(y*25/100);
	}
	else (x>=25);
	{
		cout<<y-(y*35/100);
		
	}
}
