#include<iostream>
#include<cmath>
using namespace std;
int removeDups(int arr[],int n){    //Time Complexity=O(n)
    int res=1;
    for(int i=1;i<n;i++){
        if(arr[res-1]!=arr[i]){
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}

int main(){
    int arr[]={10,10,10,50,50,20,20,30};
    int n=8;
    int result=0;
    cout<<"Given Array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Size of an array is "<<n<<endl;
    result=removeDups(arr,n);
    cout<<"Array after removing duplicates:"<<endl;
    for(int i=0;i<result;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Size of an array after removing duplicates is "<<result<<endl;
}