#include<iostream>
#include<cmath>
using namespace std;
int insert(int arr[],int x,int cap,int n, int pos){         // arr=4,5,8 x=1 cap=5 n=3 pos=1
    if(n==cap) // capacity and no of elements are same // not equal
        return n;
    int index = pos-1; //to get the index // index=0
    for(int i=n-1;i>=index;i--){    //i=2
        arr[i+1]=arr[i];
    } 
    arr[index]=x;
    return n+1;
}

int main(){
    int arr[]={4,5,8};
    int x=1, cap=5, n=3, pos=1;
    cout<<"Elements before insertion"<<endl;
    for(int i=0;i<n;i++){
        cout<< arr[i]<<"\n";
    }
    n=insert(arr,x,cap,n,pos);
    cout<<"Elements After insertion"<< endl;
    for(int i=0;i<n;i++){
        cout<< arr[i]<<"\n";
    }
    
}