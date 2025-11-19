#include<iostream>
#include<string>
using namespace std;

class person{
   public: 
    string name;
    string subject; 
    string batch;
    person(string name,string subject,string batch){      
        this->name=name;
        this->subject=subject;
        this->batch=batch;
    }
    
};
class student: public person{
    public:
    string rollnumber;
    
    student(string name,string subject,string rollnumber,string batch):person(name,subject,batch){    //constructor//
    
        this->rollnumber=rollnumber; 
    }

        void getInfo(){
            cout<<"Holla....."<<endl;
            cout<<"name is: "<<name<<endl;
            cout<<"subject is: "<<subject<<endl;
            cout<<"rollnumber is: "<<rollnumber<<endl;
            cout<<"batch year: "<<batch<<endl;
        }
    
};
int main(){
    student s1("nikhil","c++","87","2024-2028");
    s1.getInfo();
    return 0;
}
