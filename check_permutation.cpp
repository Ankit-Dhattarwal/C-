#include<iostream>
using namespace std;
#include<cstring>
#include<string.h>
int main(){
    bool result = true;
    char input1[256];
    cin>>input1;
    char input2[256];
    cin>>input2;
    int Arr[256] = {0};
   long int l1 = strlen(input1);
   long  int l2 = strlen(input2);
    if(l1 != l2){
        cout<<"false"<<endl;
    }
    
        for(int i = 0; i<l1;i++){
            Arr[input1[i]]++;
            Arr[input2[i]]--;
        }
    
    for(int  j = 0; j<256; j++){
        if(Arr[j] != 0){
            result = false;
        }
    }
    cout<<result;
    
}
