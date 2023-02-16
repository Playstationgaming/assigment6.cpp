#include<iostream>
using namespace std;
int main(){
   int n;
    int arr[]={0,2,4};
    for(int i=1;i<n;i++)
{
arr[i]+=arr[i-1];
}
int count=0;
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(i==0 && arr[j]%2!=0)
{
count++;
}
else if((arr[j]-arr[i-1] && i!=0)%2!=0)
{
count++;
}
}
}
return count;
return 0;
}