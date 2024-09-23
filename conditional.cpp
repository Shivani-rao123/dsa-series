//if-else syntax
 
// #include<iostream>
// using namespace std;

// int main(){
//     int n=45;
//     if(n>=0){
//         cout << "n is positive\n";
//     }
//     else{
//         cout << "n is negative\n";
//     }
//     return 0;
// }

//age of the user to vote
#include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cout << "Enter the age: ";
//     cin>>age;
//     if(age>=18){
//         cout<<"You can vote";

//     }
//     else{
//         cout<< "You cant vote";
//     }
//     return 0;
// }

// to check the number is even or odd   
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number";
//     cin>>n;
//     if (n%2==0){
//         cout<< "the number is even";

//     }
//     else{
//         cout<<"The number is odd";
//     }
//     return 0;
// }


//else  if
#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<< "Enter the marks: ";
    cin>>marks;
    if(marks>=90){
        cout<<"A grade";

    }
    else if(marks>80 && marks<90){
        cout<<"The grade is B";
    }
    else{
        cout <<"The grade is C";
    }
    return 0;
}