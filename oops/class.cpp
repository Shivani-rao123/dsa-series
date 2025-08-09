#include<iostream>
#include<string>
using namespace std;

class Teacher {
private:
    double salary;
public:
    // properties
    string name;
    string dept;
    string subject;
    // non-parameterized constructor
    Teacher() {
        cout << "Hi, I am default constructor" << endl;
    }

    // parameterized constructor
    Teacher(string n, string d, string s, double sal) {
        this-> name=n;
        this -> dept =d;
        this -> salary =sal;
        this -> subject = s;
    
    }
    Teacher( Teacher &obj){
        cout<< "I am custom copy constructor"<<endl;
        this -> name =obj.name;
        this -> dept =obj.dept;
        this -> subject = obj.subject;
        this -> salary =obj.salary;
    
    
    
    }

    // properties
   
    // methods
    void change_dept(string newDept) {
        dept = newDept;
    }

    void setSalary(double s) {
        salary = s;
    }

    double getSalary() {
        return salary;
    }

    void getinfo() {
        cout << "Name : " << name << endl;
        cout << "Subject : " << subject << endl;
    }
};
//copy constructor


class Account {
private:
    double balance;
    string password; // data hiding
public:
    string accountId;
    string username;
};

int main() {
    int x=5;
    // Using parameterized constructor
    Teacher t1("Shivani", "ComputerScience", "C++", 2021);
    Teacher t2(t1);//default copy constructor
    t1.setSalary(25000);
    t1.getinfo();
    cout << t1.getSalary() << endl;

    cout << t1.name << endl;
    t2.getinfo();

    return 0;
}
