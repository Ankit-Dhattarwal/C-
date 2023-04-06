#include<iostream>
using namespace std;
#include<string.h>

void remove(char str[], char c){
  long  int l1 = strlen(str);
    int j = 0;
//    int c = n;
    for(int i =0;i<l1;i++){
        if(str[i] != c ){
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}

int main(){
    char str[256];
    cin>>str;
    
    //
    cout<<"Given that number you want to remove"<<endl;
    char c;
    cin>>c;
    remove(str, c);
    cout<<str;
    
}
