#include<iostream>
using namespace std;
#include<string.h>

void remove(char str[]){
  long  int l1 = strlen(str);
    int j = 1 ;
    char lastcahr = str[0];
//    int c = n;
    for(int i =1;i<l1;i++){
        if(str[i] != lastcahr){
            str[j] = str[i];
            j++;
            lastcahr++;
        }
    }
    str[j] = '\0';
}

int main(){
    char str[256];
    cin>>str;
    
    //
//    cout<<"Given that number you want to remove"<<endl;
//    char c;
//    cin>>c;
    remove(str);
    cout<<str;
    
}
