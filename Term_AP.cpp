#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the x term"<<endl;
    cin>>x;
    
    int result = 1;
    
    for(int i = 1; i<=x;i++){
       result = (3*i)+(2);
        
        if(result%4 == 0){
            x++;
            continue;
            
        }
        else{
            cout<<result<<endl;
        }
    }
}
