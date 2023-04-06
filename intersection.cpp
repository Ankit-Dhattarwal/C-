#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the first array"<<endl;
    cin>>n;
    
    int m;
    cout<<"Enter the size of the second array"<<endl;
    cin>>m;
    
    int fist_arr[n];
    int sec_arr[m];
    
    cout<<"Enter the first arrays elements"<<endl;
    for(int i = 0; i<n;i++){
        cin>>fist_arr[i];
    }
    
    cout<<"Enter the second arrays elements"<<endl;
    for(int i = 0; i<m;i++){
        cin>>sec_arr[i];
    }
    
    for(int i = 0;i<n;i++){
        for(int j = 0; j<m;j++){
            if(fist_arr[i] == sec_arr[j]){
                cout<<"the same elements in both arrays is: "<<fist_arr[i]<<endl;;
                sec_arr[j] = INT_MAX;
                break;
            }
        }
    }

}
