#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int compress(vector<char>&chars){
         int idx=0;
         int n=chars.size();
         for(int i=0;i<n;i++){
            int count =0;
            char ch=chars[i];
            while(i<n && chars[i]==ch){
                count++,i++;
            }
            if(count==1){
                chars[idx++]=ch;
            }
            else{
                chars[idx++]=ch;
                string str= to_string(count);
                for(char dig:str){
                    chars[idx++]=dig;
                }
            }
            i--;
         }
         chars.resize(idx);
         return idx;
      
    }

};
int main(){
    vector<char>chars;
    chars={'a','a','b','b','c','d'};
    Solution s1;
    int len =s1.compress(chars);
    for(int i=0;i<len;i++){
        cout<<chars[i];
    }
    cout<<endl;
    return 0;


}