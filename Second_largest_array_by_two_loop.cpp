#include<iostream>
using namespace std;
int main(){
    int n = 7;
    int arr[] = {2, 6, 1, 9, 8, 5, 7};
//    int k = -999999999;
    int k = INT_MIN;
    for(int i = 0; i<n;i++){
        if(arr[i]>k){
            k= arr[i];
           
        }
    }
    cout<<k<<endl;
    
//    for(int i = 0 ; i< n; i++){
//        cout<<arr[i];
//    }

    
    int l = INT_MIN;
    for(int i = 0; i<n;i++){
        if(arr[i]>l && arr[i]!=k){
            l = arr[i];
        }
    }

    cout<<l<<endl;
    
    
}
