#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    
    int input[100];  //create the size of the array
    
    for(int i= 0; i<n; i++){
        cin>>input[i];
    }
    
    for(int i= 0; i<n; i++){
        cout<<input[i]<<endl;
    }
    
    int max = INT_MIN;
    
    for(int i = 0; i<n; i++){
        if(input[i]>max){
            max = input[i];
        }
    }
    cout<<"Max value in this array is the:"<<max<<endl;
}


// At the codestudio
/*
 int findDuplicate(vector<int> &arr)
 {
     for(int i = 0; i<arr.size(); i++){
         for(int j = i+1; j< arr.size(); j++){
         if(arr[i] == arr[j]){
             return arr[i];
         }
     }
     }

 }

 */
