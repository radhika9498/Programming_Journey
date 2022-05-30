#include<iostream>
#include<cmath>
using namespace std;
void lRotate(int arr[],int n,int d){
    int temp[d];                                            //i/p: 10 8 50 1 20 30  d=3  n=6
    // for(int i=1;i<n;i++){                               //op:  1 20 30 10 8 50
    //     arr[i-1]=arr[i];                               temp    0 1   2
    // }
    // arr[n-1]=temp;

    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }

    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }

    for(int i=0;i<d;i++){
        arr[n-d+i]=temp[i];
    }
}

int main(){
    int arr[]={10,8,50,1,20,30};
    int n=6, d=3;
    cout<<"Given Array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Size of an array is "<<n<<endl;
    lRotate(arr,n,d);
    cout<<"Array after left rotate by d places:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
}
}