// // for(initialization;condition;increament)
// // work
// #include<iostream>
// using namespace std;
// int main(){
//     int sum=0;
//     for(int i=1;i<=5;i++){
//         sum=sum+i;
        
//     }
//     cout<<"The sum of the first 5 natural numbers is: "<<endl;
//     cout<<sum<<endl;
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    int i=1;
    int sum=0;
    cout<<"Enter the number: ";
    cin>>n;
   while(n>=i){
         sum=sum+i;
         i++;
   }
   cout<<"The sum of the first "<<n<<" natural numbers is: "<<sum<<endl;
   return 0;
}
//break statement we will come out of the loop


