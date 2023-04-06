#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the binary number"<<endl;
    cin>>n;
    
    int place = 1;
    int ans = 0;
    
    int i = 1;
    while (n>0) {
        ans = ans + (n%10) * place;
        place = place * 2;
        n = n/10;
    }
    cout<<ans<<endl;
}
