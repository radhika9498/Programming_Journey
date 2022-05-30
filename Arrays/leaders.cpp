#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
// Naive Solution     O(n2)
// void leaders(int arr[],int n){
//     for(int i=0;i<n;i++){
//         bool flag=false;
//         for(int j=i+1;j<n;j++){
//         if(arr[j]>=arr[i]){
//             flag=true;
//             break;
//         }
//         }
//         if(flag==false){
//             cout<<arr[i]<<" ";
//         }
//     }
// }

//Efficient Solution  O(n)
void leaders(int arr[],int n){
    int current_leader=arr[n-1];
    cout<<current_leader<<" ";
    for(int i=n-2;i>=0;i--){
        if(arr[i]>current_leader){
            current_leader=arr[i];
            cout<<current_leader<<" ";
        }
    }
}

int main(){
    int arr[]={5,10,8,3,7,1};
    int n=6;
    cout<<"Given Array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Leader Elements in an array are:"<<endl;
    leaders(arr,n);
}