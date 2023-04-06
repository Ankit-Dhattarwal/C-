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
    char input[100];
    cout<<"Enter the full name"<<endl;
    cin.getline(input, 100);
    
    int len = length(input);
    
    for(int i = 0; i<len; i++){
        if(input[i] == ' '){
            for(int j = i; j<len; j++){
                input[j] = input[j+1];
            }
            len--;
        }
    }
    cout<<input;
    
}
