#include<iostream>
#include<vector>
using namespace std;
vector<int>newvector(vector<int>arr){
    vector<int>newform;
    int n;
    n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=j;k<n;k++){
                if((arr[i]+arr[k]+arr[j])==0){
                    newform.push_back(arr[i]);
                    newform.push_back(arr[j]);
                    newform.push_back(arr[k]);

                }
            }
        }
    }
    return newform;

}
int main(){
    vector<int>arr={6,-1,9,0,-1,2,1};
    vector<int> result = newvector(arr);

    cout << "Triplets with sum 0: ";
    for (int x : result)
        cout << x << " ";
    cout << endl;

    return 0;
}