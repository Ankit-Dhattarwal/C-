#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    
    int i = 1 , sum = 0;
    while(i <= n){
        if(i % 2 == 0){
            sum = sum +i;
        }
        i = i+1;
    }
    cout<<sum<<endl;
    
}
