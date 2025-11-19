#include<iostream>
using namespace std;
int main(){
    int num,count=0; 
    cout<<"enter the number:- ";
    cin>>num;
    while(num>0)   //when value is greater than zero
    {
        
        num=num/10;   //98/10=9.8
        count++;      //count=0+1=1  
        
    }
    cout<<count;
    return 0;
}