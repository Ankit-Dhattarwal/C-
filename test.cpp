#include<iostream>
using namespace std;

int length(char input[]){
    int len = 0;
    for(int i =0;input[i] != '\0'; i++){
        len++;
    }
    return len;
}

void reverse(char input[]){
    int l = length(input);
    int j = 0;
    int k;
        for(int i = 0;i<l;i++){
            for(k = 0;input[i] == ' ';){
                k = i - 1;
                break;
            }
            while(j<k)
                    {
                        char temp=input[j];
                        input[j]=input[k];
                        input[k]=temp;
                        j++;
                        k--;
                    }
        }
}

int main(){
    char input[100];
    cin.getline(input, 100);
    
    reverse(input);
    cout<<input;
}
