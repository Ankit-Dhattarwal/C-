#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int arr[100];
    
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<endl;
    }
    
    int x;
    bool found=false;
    cout<<"Enter the value you want to find"<<endl;
    cin>>x;
    for(int i = 0; i<n;i++){
        if(arr[i] == x){
            cout<<i<<endl;
            found=true;
            break;
        }
       
        }
    if(found!=true){
        cout<<"-1"<<endl;
    }
    
    }

