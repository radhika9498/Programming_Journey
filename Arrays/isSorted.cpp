#include<iostream>
#include<cmath>
using namespace std;

bool isSorted(int arr[],int n){     /////Logiccccccccccc
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
   
}

int main(){
    int arr1[]={100,90,80,70,60};
    int arr2[]={10,20,30,40,50};
    int arr3[]={10,20,30,9};
    int n1=5,n2=5,n3=4;
    cout<<"Array arr1 is sorted ?"<<isSorted(arr1,n1)<<endl;
    cout<<"Array arr2 is sorted ?"<<isSorted(arr2,n2)<<endl;
    cout<<"Array arr3 is sorted ?"<<isSorted(arr3,n3)<<endl;
}