//#include<iostream>
//using namespace std;
//int main(){
//    int n = 4;
//    int d = 2;
//    int arr[] = {1, 2, 3, 4};
//
//    int j = 0;
//    while(j<d){
//        int temp = arr[0];
//        for(int i = 0; i<n; i++){
//            arr[i] = arr[i+1];
//        }
//        j++;
//        arr[n-1] = temp;
//    }
//
//    for(int i = 0; i<n; i++){
//        cout<<arr[i];
//    }
//
//}


// Second Method

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
    int n = 4;
    int d = 2;
    int arr[] = {1, 2, 3, 4};
    
    RotateArr(arr, 0, n-1);
    RotateArr(arr, 0, n-d-1);
    RotateArr(arr, d, n-1);
    
    for(int i = 0; i<n;i++){
        cout<<arr[i];
    }
    
}

