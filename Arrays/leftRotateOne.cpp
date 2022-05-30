#include<iostream>
#include<cmath>
using namespace std;
void lRotateOne(int arr[],int n){       //Time COmplexity = O(n)
    int temp=arr[0];                    //Aux Space=O(1)
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}

int main(){
    int arr[]={10,8,50,1,20,30};
    int n=6;
    cout<<"Given Array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Size of an array is "<<n<<endl;
    lRotateOne(arr,n);
    cout<<"Array after left rotate by one:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
}
}