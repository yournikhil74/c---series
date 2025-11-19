#include <iostream>
using namespace std;

int changedecimal(int binary){
    int pow=1;ans=0;
    for(int i=0;i<=binary;i++){

        int digit=binary%10;
        binary/=10;
        
        ans+=(binary*pow);
        pow*=2;
    }
    return ans;
}

int main() {
    int binary=10;
    cout<<changedecimal(binary);
    

    return 0;
}