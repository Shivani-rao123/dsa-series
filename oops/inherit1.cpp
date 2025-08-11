#include<iostream>
#include<string>
using namespace std;
class Person{
    public:
     string name;
     int age;
}

class Student:public Person {
    public :
      string name;
      int age;

   
};
class Teacher:  public Person{
    public:
      string subject;
      double salary;

};
class TA : public Student,public Teacher{//accsessing properties of Person
    public:
      string subject;
      double salary;

};
int main() {
    TA t1;
    t1.name ="Tony stark";
    t1.subject ="engineering";
    cout<<t1.name<<endl;
    cout<<t1.subject<<endl;


    return 0;
}
