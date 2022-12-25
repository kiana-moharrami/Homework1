#include <iostream>
using namespace std;
 
int main() {
    
    int a, b, temp;
    cout<<"adad avval ra vared konid : ";
    cin>>a;
    cout<<"adad dovvom ra vared konid : ";
    cin>>b;
    
    while(true){
        
        if(b == 0) break;
        
        temp = a%b;
        a = b;
        b = temp;
    }
    
    cout<<"B.M.M do adad vared shode barabar ast ba :"<<a;
    
    
}