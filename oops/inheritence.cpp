#include<iostream>
#include<string>
using namespace std;

class Person {
    public :
      string name;
      int age;

    //   Person(string name,int age){
    //     this->name=name;
    //     this->age=age;

    //   }
        //  Person(){

        //  }
};
class Student : public Person{//accsessing properties of Person
    public:
      int rollno;
      void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"rollno :"<<rollno<<endl;
      }
      //constructor
      Student(string name,int age,int rollno):Person(name,age){
        this->rollno=rollno;
      }

};
int main() {
    // Student s1;
    // s1.name="Rahul";
    // s1.age=21;
    // s1.rollno=1234;
    // s1.getInfo();
    Student s1("rahul kumar",21,1234);

    return 0;
}
