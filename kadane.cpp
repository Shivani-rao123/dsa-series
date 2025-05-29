// #include<iostream>
// #include <vector>
// using namespace std;

// int main(){
//     int n=5;
//     int arr[5]={1,2,3,4,5};
//     for (int st=0;st<n;st++){
//         for(int end=st;end<n;end++){
//             for(int i=st;i<=end;i++){
//                 cout<<arr[i];

//             }
//             cout<<" ";
//         }
//         cout<<endl;

//     }
                      
//     return 0;

// }

//Brutforce aproach to find maximum subarray sum using Kadane's algorithm


#include<iostream>
#include <vector>
using namespace std;

int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    int maxSum=INT_MIN;
    for (int st=0;st<n;st++){
        currSum=0;
        for(int end=st;end<n;end++){
            
            currSum+=arr[end];
            maxSSum=max(currSum,maxSum);
            }
        }
        cout<<"maximum subarray value is ="<<maxSum<<endl; 

    }
                      
    return 0;

}