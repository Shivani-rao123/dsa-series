#include<iostream>
#include<string>
using namespace std;

class Student {
    public :
      string name;
      double cgpa;

      Student(string name,double cgpa){
        this->name =name;
        this->cgpa =cgpa;

      }
      Student(Student &obj){
        this ->name =obj.name;
        this -> cgpa=obj.cgpa;
      }
      void getinfo(){
        cout<< "name : "<<name<<endl;
        cout<<"cgpa: "<<cgpa<<endl;
      }
};
int main() {
    Student s1("rahul",8.9);
    Student s2(s1);
     

    return 0;
}