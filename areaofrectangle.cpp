#include<iostream>
using namespace std;   // ✅ Correct namespace

class Area {
public:
    int l;
    int b; 

    Area(int l,int b){
    this->l=l;
    this->b=b;
    }
    void getInfo(){
        cout<<"area is: "<<l*b;
    }
};

int main() {
    // Area a1;
    int l,b;
    cout<<"enter the length: "<<endl;
    cin>>l;
    cout<<"enter the breadth: "<<endl;
    cin>>b;  // ✅ pass values here

    // a1.getInfo(l,b);

    Area a1(l,b);
    a1.getInfo();
    return 0;
}
