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
    int len = length(input);
    int i = 0 , j = len - 1;
    while (i<j){
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
}

void word_reverse(char input[]){
    int l = length(input);
    int k;
     int  j = 0;
    
//    for(int i = 0;i<l;i++){
//        for(k = 0;input[i] == ' ';){
//            k = i - 1;
//            break;
//        }
//        while(j<k)
//                {
//                    char temp=input[j];
//                    input[j]=input[k];
//                    input[k]=temp;
//                    j++;
//                    k--;
//                }
//    }
}

    for(; i< l; i++){
        if(input[i] == ' '){
            k = i - 1 ;
            break;
        }
    while(j<k){
        char temp = input[j];
        input[j] = input[k];
        input[k] = temp;
        j++;
        k--;
    }
}
}

int main(){
    char input[100];
    cin.getline(input, 100);
    
    reverse(input);
    cout<<"First: "<<input<<endl;
    
    word_reverse(input);
    cout<<"Resut: "<<input<<endl;
    
}
