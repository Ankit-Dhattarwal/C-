#include<iostream>
using namespace std;
int main(){
    int n= 5;
   // int arr[] = {3, 6, 8, 9, 10};
    int arr[] = {5, 6, 1, 2, 3, 4};
    for(int i=0; i<n-1; i++){
        int j = i+1;
        if(arr[i]>arr[j]){
            cout<<i+1<<endl;
            break;
        }
    }
}
