#include<iostream>
#include<cmath>
using namespace std;
int deleteEle(int arr[],int x,int n){
    int idx=0;
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==x){                                                                      //Time Complexity=O(n)
            idx=arr[i];
            break;
        }
    }
    if(i==n){   //new--- when element to be deleted not found
        return n;
    }
    for(i=i+1;i<n;i++){
        arr[i-1]=arr[i];
    }
    return n-1;
}

int main(){
    int arr[]={5,6,7,8,10};
    int n=5, x=9;
    cout<<"Before Deletion"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    n = deleteEle(arr,x,n);
    cout<<"After Deletion"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
