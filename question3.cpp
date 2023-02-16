#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;



    cin>>n;
    vector<int>array(n);
    for(int &ele:array){
        cin>>ele;
    }
    int i,j;
    j=1;
    int ans=0;
    i=0;
    while(j<n&&n>i){
        if(array[i]==1&&array[j]==0||array[i]==0&&array[j]==1){
            i+=2;
            j+=2;
            ans+=2;
        }
        else{
            i++;
            j++;
        }

    }
    cout<<"answer is "<<ans;
    return 0;
}