#include<iostream>
using namespace std;
int main(){
    int n = 7;
    int d = 2;
    int arr[] = {2,6,3,1,5,9,8};
    int arr2[d];
    int i=0;
//    for(int j = 0; j<d && i<d; j++,i++){
//        arr2[i] = arr[j];
//        cout<<arr2[i];
//    }
    
    for(int j = d; j<n;j++){
        arr[i] = arr[i+d];
    }
    
    for(int i = 0; i<n;i++){
        cout<<arr[i];
    }

    
//        int k = 0;
//        while(k<d){
//            int temp = arr2[d];
//            for(int d = d; d<n;d++){
//                arr[i] = arr[i+d];
//            }
//            k++;
//            arr2[d] = temp;
//        }
//
//        for(int i = 0; i<n;i++){
//            cout<<arr[i];
//        }


    
    
    
    
//    int k = 0;
//    while(k<d){
//        int temp = arr2[d];
//        for(int i = d; i<n;i++){
//            arr[i] = arr[i+d];
//        }
//        k++;
//        arr2[d] = temp;
//    }
//
//    for(int i = 0; i<n;i++){
//        cout<<arr[i];
//    }
}

