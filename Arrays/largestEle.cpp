#include<iostream>
#include<cmath>
using namespace std;

int largestElement(int arr[],int n){
    int high=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>high){
            high=arr[i];
        }
    }                                                           //Time Complexity=O(n)
    return high;
}

int main(){
    int arr[]={80,70,40,50,20,100};
    int n=6;
    cout<<"Largest element is: ";
    cout<<largestElement(arr,n);
}