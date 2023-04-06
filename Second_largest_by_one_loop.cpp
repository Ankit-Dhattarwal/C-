//#include<iostream>
//using namespace std;
//int main(){
//    int n = 7;
//    int arr[] = {2, 2, 2, 2, 2, 2, 2};
//    int k = INT_MIN;
//    int l = INT_MIN;
//
//    for(int i = 0 ;i<n; i++){
//        if(arr[i]>k){
//            l = k;
//            k = arr[i];
//        }
//        else{
//            if(arr[i]>l && arr[i]!= k){
//                l = arr[i];
//            }
//        }
//    }
//
//    cout<<k<<endl;
//    cout<<l<<endl;
//}

#include<iostream>
using namespace std;
int main(){
    int n = 4;
    int arr[] = {90, 8, 90, 5};
    int k = INT_MIN;
    int l = INT_MIN;
    
    for(int i = 0 ;i<n; i++){
        if(arr[i]>k){
            l = k;
            k = arr[i];
        }
        else{
            if(arr[i]>l && arr[i]!= k){
                l = arr[i];
            }
        }
    }
    
    cout<<k<<endl;
    cout<<l<<endl;
}


