#include <iostream>
#include <cmath>
using namespace std;

int search(int arr[], int n, int x)
{
	for(int i=0;i<n;i++){
              if(arr[i]==x)
                     return i;
       }
       return -1;
} 

int main() {
	
       int arr[5]={5,10,15,25,30};
       int x=25;
       cout << "Search element found at index ";
       cout << search(arr,5,x);
}