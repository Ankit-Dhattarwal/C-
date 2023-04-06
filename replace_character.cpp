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
    char name[100];
    cout<<"Enter your name"<<endl;
    cin>>name;
    
    int len = length(name);
    
    char n;
    cout<<"replace this "<<endl;
    cin>>n;
    
    char h;
    cout<<"replace with"<<endl;
    cin>>h;
    
        for(int i = 0; name[i] !='\0'; i++){
        if(name[i] == n){
            name[i] = h;
        }
        else{
            continue;
        }
    }
    cout<<name;
}


