#include<iostream>
#include<vector>
using namespace std;

bool isVowel(char c){
      c= tolower(c);
      return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}
int main(){
    string str="hello";
    int i=0,j=str.size()-1;

    while(i<j){
        while(i<j&& !isVowel(str[i]) ) i++;
        while(i<j && !isVowel(str[j])) j--;

        swap(str[i],str[j]);
        i++;
        j--;

    }
    cout<<"reversed string : "<<str<<endl;
    return 0;

}