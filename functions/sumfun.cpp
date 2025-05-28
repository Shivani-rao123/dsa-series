//calculate the sum of two numbers from 1 to N
// int sumN(int n){
//      int sum=0;
//      for(int i=1;i<=n;i++){
//         sum+=i;
//      }
//      return sum;
// }
// int main(){
//     cout<<sumN(5)<<endl;
//     return 0;
// }//to solve the problem of the redundancy

//calculate the N factorial
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;


return fact;
    }
}
int main(){
    cout<< factorial(5)<<endl;
    return 0;
    
}
