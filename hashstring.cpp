#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;
string replacewords(string sentence,vector<string>dictionary){
    stringstream ss(sentence);
    string word,result="";
    while(ss >> word){
        if(!result.empty()) result+=" ";
        result += (find(dictionary.begin(), dictionary.end(), word) != dictionary.end()) ? word : "###";


    }
    
    return result;
}
int main(){
    string sentence ="hello world there";
    vector<string>dictionary={"hello","dictionary"};
    cout<<replacewords(sentence,dictionary);
    return 0;
}