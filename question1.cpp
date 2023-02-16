#include<iostream>
using namespace std;
int main(){
    int l,m;
    cout<<"enter l and m ";
    cin>>l>>m;
    int n;
    cout<<"enter the lenght of array ";
    cin>>n;
    int array[n];
    for(int &ele:array){
        cin>>ele;
    }
    int sum=0;
for(int i=l;i<=m;i++){
    sum+=m;
}cout<<sum;
return 0;
}