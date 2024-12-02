//Data structures:Arrays
//only same type of data can be stored
//arrays are contigous in memory
//they are also linear data structures
//int marks[5]
//accessing the array we use array index
//arrays inside the curly braces

// #include<iostream>
// using namespace std;

// int main(){
//    int marks[5]={99,100,54,36,88};
  
  
//     cout<<marks[0]<<endl;
//     cout<<marks[1]<<endl;

//    return 0;
   
// }

//loop in arrays

// #include<iostream>
// using namespace std;
// int main(){
//     int marks[5]={99,100,54,36,88};
//     int size=5;
//     //int sz=sizeof(marks)/
//     cout<< sizeof(marks)/sizeof(int)<<endl;
//     for(int i=0;i<size;i++){
//         cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
//     }
//     return 0;
// }

//find the smallest and largest element in array
#include<iostream>
using namespace std;
int main(){
    int nums[]={5,15,22,1,-15,24};
    int size=6;
    int smallest=INT_MAX;
    for(int i=0;i<size;i++){
        if(nums[i]<smallest){
            smallest=nums[i];

        }
    }
    cout<<"smallest element is "<<smallest<<endl;
    return 0;
}