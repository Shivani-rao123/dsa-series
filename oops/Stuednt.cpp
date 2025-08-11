#include<iostream>
#include<string>
using namespace std;

class Student {
    public :
      string name;
      double *cgpaPtr;

      Student(string name,double cgpa){
        this->name =name;
        cgpaPtr=new double;
        *cgpaPtr =cgpa;

      }
      Student(Student &obj){
        this ->name =obj.name;
        cgpaPtr =new double;
        *cgpaPtr = *obj.cgpaPtr;
      }
      //destructor
      ~Student() {
         cout<<"Hi , I delete everything\n";
         delete cgpaPtr;//it is necessary to dree the memory or else there is memory leak
         

      }
      void getinfo(){
        cout<< "name : "<<name<<endl;
        cout<<"cgpa: "<<*cgpaPtr<<endl;
      }
};
int main() {
    Student s1("rahul",8.9);
    Student s2(s1);
     
s1.getinfo();
*(s2.cgpaPtr)=9.2;
s1.getinfo();
s2.getinfo();
    return 0;
}