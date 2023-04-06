#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the decimal number"<<endl;
    cin>>n;
    
    int place = 1;
    int ans = 0;
    int rem = 0;
    while(n>0){
        rem = n%2;
        n = n/ 2;
        ans = ans + rem * place;
        place = place * 10;
       
    }
    cout<<ans<<endl;
}
