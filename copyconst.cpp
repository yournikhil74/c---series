#include<iostream>
#include<string>
using namespace std;

class Teacher{

private:
    double salary;    
public:
    string name;
    string subject;
    string dept;


    Teacher (string name,string subject,string dept,double salary){
    this->name = name;
    this->subject = subject;
    this->dept = dept;
    this->salary = salary;

    }

    Teacher (Teacher &orgObj){   //pass by reference
        cout<<"i am custom copy constructor...."<<endl;
        this->name=orgObj.name;
        this->subject=orgObj.subject;
        this->dept=orgObj.dept;
        this->salary=orgObj.salary;
    }
    

    void getInfo(){
        cout<<"name is: "<<name<<endl;
        cout<<"subject is: "<<subject<<endl;
        cout<<"department is: "<<dept<<endl;
        cout<<"salary is: "<<salary<<endl;

    }
    
    
};

int main(){
    Teacher t1("nikhil","c++","computer science",8000);
    Teacher t2(t1);  

    t1.getInfo();
    
    t2.getInfo();
    return 0;
}
