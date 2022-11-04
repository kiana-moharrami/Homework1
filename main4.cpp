#include <iostream>
using namespace std;
 main() {
	int x,y,z,o;
	cout<<"x:";
	cin>>x;
	cout<<"y:";
	cin>>y;
	cout<<"z:";
	cin>>z;
	o=(x-y)*(x+z)/(x+y+z)*(x+y+z)+1;
	cout<<"o:"<<o;
	
}