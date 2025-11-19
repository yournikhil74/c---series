#include<iostream>
#include<string>
using namespace std;

class person{
   public: 
    string name;
    string subject; 

    person(string name,string subject){
        this->name=name;
        this->subject=subject;
    }
    
};
class student: public person{
    public:
    string rollnumber;
    
    student(string name,string subject,string rollnumber):person(name,subject){
    
        this->rollnumber=rollnumber; 
    }

        void getInfo(){
            cout<<"Holla....."<<endl;
            cout<<"name is: "<<name<<endl;
            cout<<"subject is: "<<subject<<endl;
            cout<<"rollnumber is: "<<rollnumber<<endl;
        }
    
};
int main(){
    student s1("nikhil","c++","87");
    s1.getInfo();
    return 0;
}
