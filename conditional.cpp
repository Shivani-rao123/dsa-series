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
using namespace std;
int main(){
    int age;
    cout << "Enter the age: ";
    cin>>age;
    if(age>=18){
        cout<<"You can vote";

    }
    else{
        cout<< "You cant vote";
    }
    return 0;
}