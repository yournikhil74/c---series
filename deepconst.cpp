#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    string name;
    double* cgpaPtr;
    
    Student(string name,double cgpa){
        this->name=name;
        cgpaPtr=new double;
        *cgpaPtr=cgpa;
    }
    Student(Student &Obj){ 
        cout<<"deep const is running.....\n";
        this->name=Obj.name;
        cgpaPtr=new double;
        *cgpaPtr=*Obj.cgpaPtr;
    }
    void getInfo(){
        cout<<"name is: "<<name<<endl;
        cout<<"cgpa is: "<<*cgpaPtr<<endl;
    }
};
int main(){
    Student s1("nikhil",9.2);
    Student s2(s1);
    // s2.getInfo();
    
    s1.getInfo();
    *(s2.cgpaPtr)=8.5;
    s1.getInfo();

    s2.name="aman";
    s2.getInfo();
    return 0;

}
