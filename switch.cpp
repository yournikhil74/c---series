#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"enter the choice";
    cin>>day;  
    switch (day)
    {
    case 0:cout<<"monday";
    break;
    case 1:cout<<"tuesday";
    break;
    case 2:cout<<"wednesday";
    break;
    case 3:cout<<"thursday";
    break;
    case 4:cout<<"friday";
    break;
    case 5:cout<<"saturday";
    break;
    case 6:cout<<"sunday";
    break;
    
    default:cout<<"invlaid day";
    break;
        
    }
return 0;
}