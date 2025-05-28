// #include<iostream>
// using namespace std;
// int main(){//first there is some space and then there is a number
// //first number does not have space
//     //in the second line there is one space
//     //in the third line there are two spaces
//     // there are i number of spaces
    
// for(int i=0;i<4;i++){
//     for(int j=0;j<i;j++){
//         cout<<" ";

//     }// we have printed spaces first
//     for(int j=0;j<4-i;j++){
//         cout<<i+1;
//     }// number  will be printed 4-i times and i+1 number is printed

//     cout<<endl;
// }
// }

// #include<iostream>
// using namespace std;
// int main(){//first there is some space and then there is a number
// //first number does not have space
//     //in the second line there is one space
//     //in the third line there are two spaces
//     // there are i number of spaces
    
// for(int i=0;i<4;i++){
//     for(int j=0;j<i;j++){
//         cout<<" ";

//     }// we have printed spaces first
//     for(int j=0;j<4-i;j++){
//         cout<<i+1<<" ";
//     }// number  will be printed 4-i times and i+1 number is printed

//     cout<<endl;
// }
// }

//straight pyramid
   // 1
//  1 2 1
// 1 2 3 2 1
//1 2 3 4 3 2 1
//it will be n-i-1 spaces

#include<iostream>
using namespace std;
int main(){//first there is some space and then there is a number
//first number does not have space
    //in the second line there is one space
    //in the third line there are two spaces
    // there are i number of spaces
    
for(int i=0;i<4;i++){
    
    // spaces:n-i-1
    for(int j=0;j<4-i-1;j++){
        cout<<" ";

    }// we have printed spaces first

    //number set 1:i+1
    for (int j=1;j<=i+1;j++){
        cout<<j;
    }
    //number set 2
    for(int j=i;j>0;j--){
        cout<<j;

    }
    cout<<endl;
}
}