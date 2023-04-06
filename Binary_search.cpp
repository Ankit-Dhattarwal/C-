#include <iostream>
using namespace std;

int bin_search(int arr[], int n, int element){
     int  start = 0;
    int end = n-1;
    int mid;
    
    
    while(start <= end){
    mid = (start + end)/2;
    
        if(arr[mid] == element){
            return mid;
        }
        else if (arr[mid]>element){
            end = mid - 1;
        }
        else if(arr[mid]<element){
            start = mid + 1;
            
        }
       
    }
    return -1;
    
}
int main(){
    int n;
    cin>>n;
    
    int arr[n];
    
    cout<<"Enter the elements of the array"<<endl;
    for(int i = 0 ; i<n;i++){
        cin>>arr[i];
    }
    
    int x;
    cout<<"Enter the element you want to find"<<endl;
    cin>>x;
    
   
    
    cout<<bin_search(arr, n, x);
}
