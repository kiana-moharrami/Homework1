#include <iostream>
using namespace std;
 
 main() {
    
    int a, b, t;
    cout<<"enter the biggest number";
    cin>>a;
    cout<<"enter the smallest number ";
    cin>>b;
    
    while(1){
        
        if(b == 0) 
		break;
        
        t= a%b;
        a = b;
        b = t;
    }
    
    cout<<"the greatest common divisor"<<a;
    
}