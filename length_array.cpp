#include<iostream>
using namespace std;

int length(char input[]){
    int len = 0;
    for(int i =0;input[i] != '\0'; i++){
        len++;
    }
    return len;
}

int main(){
    bool check =true;
    //    char name[] = {'n','a','m','a','n'};
    char name[100];
    cout<<"Enter your name for check it is palidrome or not"<<endl;;
    cin>>name;
    int len=length(name);
    
    for(int i = 0; name[i] != '\0'; i++){
        len--;
        if(name[i] == name[len]){
            continue;
        }
        else{
            check = false;
        }
    }
    
    if(check == true){
        cout<<"true"<<endl;
        
    }
    else{
        cout<<"false"<<endl;
    }
    
}






















    
//    for(int i = 0,j=len; i ;i++,j--){
//
//                if(name[i] == name[j]){
//                    continue;
//
//                }
//                else{
//                    a=false;
//                    break;
//
//            }
//
//    }
    
