#include<iostream>
using namespace std;

void push(int arr[], int n){
    int i = 0, j = 0;
    while(i<n){
        if(arr[i] == 0){
            break;
        }
        j = i+1;
        while(j<n){
            if(arr[j] == 0){
                j++;
            }
            else{
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
            }
        }
        
    }
}
int main(){
    int n;
    cout<<"Enter the size of arrays"<<endl;
    cin>>n;
    
    int arr[n];
     
    cout<<"Enter the elements of arrays"<<endl;
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    
    push(arr, n);
    
    for(int i = 0; i<n; i++){
        cout<<arr[i];
    }

}
