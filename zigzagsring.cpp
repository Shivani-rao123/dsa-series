#include<iostream>
#include<vector>
#include<string>
using namespace std;
string zigzag(string s,int numRows){
    if(numRows==1) return s;
    vector<string>rows(numRows,"");
    bool down=false;
    int row=0;
    for(int i=0;i<s.size();i++){
       rows[row]+=s[i];
       if(row==numRows-1) down=false;
       else if(row ==0 ) down = true;
       if(down){
        row++;
       }
       else{
        row--;
       }
       string result ="";
       for(string c:rows){
          result+=rows

       }
       

    }
    return result;
}

int main() {
    string s = "PAYPALISHIRING";
    int numRows = 3;
    cout << zigzag(s, numRows); 
    return 0;
}