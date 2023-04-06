#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int j =0;j<n-1;j++){
        for(int i =0;i<n-1-j;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {3, 1 , 6, 9, 0, 4};
    
    bubble_sort(arr, 6);
    
    for(int i = 0; i<6;i++){
        cout<<arr[i]<<endl;
    }
}

