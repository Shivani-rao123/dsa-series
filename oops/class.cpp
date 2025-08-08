#include<iostream>
#include<string>
using namespace std;
class Teacher{
public:
    //properties attributes
    string name;
    string dept;
    string subject;
    double salary;
    //methods/member functions
    void change_dept(string newDept){
        dept=newDept;
    }

};
int main(){
    Teacher t1;
    t1.name="John";
    t1.dept="CS";
    t1.subject ="OOP";
    t1.salary =25000;


 
cout<<t1.name<<endl;
    return 0;
}