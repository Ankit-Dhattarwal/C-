#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    
    int sum;
    cout<<"Enter the sum you want to"<<endl;
    cin>>sum;
    
    int arr[n];
    int count = 0;
    
    cout<<"Enter the elements of the arrays"<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i = 0; i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i] + arr[j] == sum){
                if(arr[i]>arr[j]){
                    cout<<arr[i]<<" "<<arr[j]<<endl;
                }
                else{
                    cout<<arr[j]<<" "<<arr[i]<<endl;
                }
                count++;
            }
        }
    }
    cout<<count<<endl;;
}
