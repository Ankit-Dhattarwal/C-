#include <iostream>
//#include <math.h>
using namespace std;
int main(){
    int x, n;
    cout<<"Enter the number and its power respectively"<<endl;
    cin>>x>>n;
    
//    int result = pow(x, n);
//    cout<<result<<endl;
    
    int i = 1;
    int y = 1;
    
    if(x== 0 && n == 0){
        cout<<1<<endl;
    }
    else{
        while(i<=n){
            y = y*x;
            i++;
        }
        cout<<y<<endl;
    }
    
}
