#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    double cgpa;

    Student(string name,double cgpa){
        this->name=name;
        this->cgpa=cgpa;
    }
    
    void getInfo(){
        cout<<"name is: "<<name<<endl;
        cout<<"cgpa is: "<<cgpa<<endl;
    }
    
};
int main(){
    Student s1("nikhil",8.2);
    
    Student s2(s1);
    s2.getInfo();
    return 0;
}