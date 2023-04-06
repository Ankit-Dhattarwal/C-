#include<iostream>
using namespace std;
int main(){
    char n;
//    cin>>n;
    n = cin.get();
    int digit = 0, character = 0, space = 0;
    while (n !='$') {
        if(n>='a' && n<='z'){
            character++;
        }
        else if (n>= '0' && n<='9'){
            digit++;
        }
        else if (n == '\n' || n == '\t' || n == ' '){
            space++;
        }
        n = cin.get();
    }
    cout<<"Number of characters: "<<character<<endl;
    cout<<"Number of the space: "<<space<<endl;
    cout<<"Number of the digit: "<<digit<<endl;
}
