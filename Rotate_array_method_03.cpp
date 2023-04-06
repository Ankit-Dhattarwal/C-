#include<iostream>
using namespace std;

void RotateArr(int arr[], int start, int end){
    
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        end--;
        start++;
        
    }
}

int main(){
    int n = 7;
    int d = 2;
    
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    
    RotateArr(arr, 0 ,n-1);
    
    RotateArr(arr, 0 ,n-d-1);
    
    RotateArr(arr, n-d, n-1);
    

    
    for(int i = 0; i<n; i++){
        cout<<arr[i];
    }
}
