#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the numbers"<<endl;
    cin>>n;
    int rev = 0;
    
    int i = 1;
    while(n>0){
        rev= rev*10+ n%10;
        n = n/10;
    }
    cout<<rev<<endl;
}
