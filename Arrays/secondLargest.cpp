#include<iostream>
#include<cmath>
using namespace std;

int secondLargest(int arr[],int n){
    int res=-1,largest=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest]){
            res=largest; //res=0
            largest=i;   
        }
        else if (arr[i]!=arr[largest])
        {
            if(res==-1 || arr[i]>arr[res]){
                res=i;
            }
        }
    }
    return arr[res];
    // int large = largestEle(arr,n);
    // int secondLargest=arr[0];
    // for(int i=1;i<n;i++){
    //     if(arr[i]>secondLargest && arr[i]<large){
    //         secondLargest=arr[i];
    //     }
    // }
    // return secondLargest;
}

// int largestEle(int arr[],int n){
//     int largest=0;
//     for(int i=1;i<n;i++){
//         if(arr[i]>arr[largest]){
//             largest=i;
//         }
//     }
//     return arr[largest];
// }

int main(){
    int arr[]={50,60,90,110,400};
    int n=5;
    // int large=largestEle(arr,n);
    cout<<"Second Largest Element is: "<< secondLargest(arr,n)<<endl;
}