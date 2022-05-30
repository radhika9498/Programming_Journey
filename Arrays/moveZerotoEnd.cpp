#include<iostream>
#include<cmath>
using namespace std;
void moveToEnd(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
}
int main(){
    int arr[]={10,0,0,50,0,20,0,30};
    int n=8;
    int result=0;
    cout<<"Given Array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Size of an array is "<<n<<endl;
    moveToEnd(arr,n);
    cout<<"Array after moving zeros to end:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}