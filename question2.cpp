#include<iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"number of element ";
    cin>>n;
    vector <int> array(n);
    for(int &ele:array){
        cin>>ele;
    }
    int max=array[0];
    for(int i=0;i<n;i++){
        if(max<array[i]){
            max=array[i];
        }
    }
    cout<<"longest number in the sequence is "<<max;
    
return 0;
}