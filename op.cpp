#include <iostream>

using namespace std;

 main()
{
    
       int A[10];
       int i,sum;
       float avg;	
   
    
    for(i=0; i<10 ;i++){
    
       cout<<"Enter Array A: ";
        cin>>A[i];
}
    int max = A[0];
    
    for(i=1;i<10;i++)
        if(A[i]>max)
            max = A[i];
    
    cout<<"max:"<<max<<endl;
    
     int min = A[0];
    
    for(i=1;i<10;i++)
        if(A[i]<min)
            min = A[i];
    
    cout<<"min:"<<min<<endl;
    
    
    sum= min +max;
    avg=(float)sum/2;
    cout<<"sum:"<<sum<<endl<<"avg:"<<avg;
       
}