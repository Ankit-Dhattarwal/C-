#include<iostream>
using namespace std;

void merge_sort(int arr_first[], int arr_second[], int n, int m, int arr[], int size){
    int i = 0;
    int j = 0;
    int k = 0;
    
    while (i<n && j<m) {
        if(arr_first[i]<arr_second[j]){
            arr[k++] = arr_first[i++];
        }else{
            arr[k++] = arr_second[j++];
        }
    }
    while (i < n){
        arr[k++] = arr_first[i++];}
        
    while (j < m){
                            arr[k++] = arr_second[j++];
                        }
    
    }
    
    int main(){
        int n;
        cout<<"Enter the size of the first array"<<endl;
        cin>>n;
         
        int arr_first[n];
        
        cout<<"Enter the element of the first arrays"<<endl;
        for(int i = 0; i<n;i++){
            cin>>arr_first[i];
        }
        
        
        int m;
        cout<<"Enter the size of the second array"<<endl;
        cin>>m;
        
        int arr_second[m];
        
        cout<<"Enter the element of the second arrays"<<endl;
        for(int j = 0; j<m;j++){
            cin>>arr_second[j];
        }
         
        int size = n + m;
        int arr[size];
     
        
        merge_sort(arr_first ,arr_second , n, m, arr, size);
        
        for(int i = 0; i<size;i++){
            cout<<arr[i]<<" ";
        }
        
    }
    

