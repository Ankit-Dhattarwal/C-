#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n){
    for(int i = 1;i<n-1;i++){
        int current = arr[i];
        int j;
        for(j = i-1; j>=0;j--){
            if(current<arr[j]){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }

        }
        arr[j+1] = current;
    }
}

int main(){
    int arr[] = {2, 13, 4, 1, 3, 6, 28};
    
    insertion_sort(arr, 7);
    
    for(int i = 0; i<7 ;i++){
        cout<<arr[i]<<endl;
    }
}
