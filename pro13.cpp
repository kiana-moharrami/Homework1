
#include<iostream>

using namespace std;
double power(double x,int y){
       double res=0;
       if(y==0){
             return 1;
       }else if(y>0){
             res=x*power(x,--y);
             return res;
       }else if(y<0){
             y*=-1;
             res=power(x,y);
             return (1/res);
       }
}
int main(){
	int y;
	double x;
	cout<<"enter a number:";
	cin>>x;
	cout<<"enter a umber:";
	cin>>y;
    cout<<power( x, y);

}