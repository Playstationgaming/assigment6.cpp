#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
   
    int pro=1;
    vector<int> array(n);
    vector<int> newarray(n);
    int c=0;
    for(int &ele:array){
        cin>>ele;
    }
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(j==i){
            continue;
        }
        else{
pro*=array[j];



        }
    }
    newarray[c++]=pro;
    pro=1;
    }
    for(int ele:newarray){
cout<<ele<<" ";
    }
return 0;
}