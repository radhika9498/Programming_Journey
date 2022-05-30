#include<iostream>
#include<cmath>
using namespace std;

void reverse(int arr[],int n){
int low=0,high=n-1,temp=0;
while(low<high){
    int temp=arr[low];
    arr[low]=arr[high];
    arr[high]=temp;
    low++;
    high--;
}
}

int main(){
    int arr[]={10,20,50,40,30};
    int n=5;
    cout<<"Given Array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse(arr,n);
    cout<<"Reverse Array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}