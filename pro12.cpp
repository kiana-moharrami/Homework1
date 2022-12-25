#include <iostream>
using namespace std;
 

double POw(double x, int y) {
	if (y == 0) return 1;
	double result = 1;
	for (int i = 1; i <= y; i++)
	{
		result *= x;
	}
	return result;
}

double factorial(int num){
    double fact = 1;
    for(int i = 1; i <= num; i++){
        fact *= i; 
    }
    return fact;
}
 
 
double taylorSine(double num, double precision = 19){
    double value = 0;
    for(int n = 0; n < precision; n++){
        value += POw(-1.0, n) * POw(num, 2*n+1) / factorial(2*n + 1);
    }
    return value;
}
 
 
float POw(float x, int y) {
	if (y == 0) return 1;
	double result = 1;
	for (int i = 1; i <= y; i++)
	{
		result *= x;
	}
	return result;
}

 
 
double taylorCoSine(double num, double precision = 19){
    double value = 0;
    for(int n = 0; n < precision; n++){
        value += POw(-1.0, n) * POw(num, 2*n) / factorial(2*n );
    }
    return value;
}
 
 
int main(){
    for(int i = 1; i <= 10; i++){
        
        cout  <<"taylorSine:"<< taylorSine((double)i) << endl;   
        
         for(int i = 1; i <= 10; i++){
        
        cout << "taylorCoSine:"<< taylorCoSine((double)i) << endl;    
        
        
         for(int i = 1; i <= 10; i++){
        
        cout <<"tan:"<< taylorSine((double)i)/taylorCoSine((double)i)  <<  endl;    
        
     
    }
    return 0;
    
    
    
    
    
    

}
}
}
