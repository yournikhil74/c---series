#include<iostream>
#include<string>
using namespace std;

class Teacher
{
private:
    /* data */
    double salary;
public:

    string name;
    string subject;
    string dept;
    
    Teacher(string n,string s,string d,double sal){
        name=n;
        subject=s;
        dept=d;
        salary=sal;
    }
    int setSalary(double s){
        salary=s;
    }
    int getSalary(){
        return salary;
    }
    void getInfo(){
        cout<<"name is; "<<name<<endl;
        cout<<"salary is: "<<salary<<endl;
    }
};
int main(){
    // Teacher t1;
    // t1.name="vakil";
    // t1.subject="c++";
    // t1.dept="computer science";
    // t1.setSalary(800000);

    // cout<<"name: "<<t1.name<<endl;
    // cout<<"salary: "<<t1.getSalary()<<endl
    
    Teacher t1("nikhil","c++","computer science",80000);
    t1.getInfo();
    
    return 0;
}

    