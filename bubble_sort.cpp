#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int i =0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
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

