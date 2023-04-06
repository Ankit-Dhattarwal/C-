#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    
    int evensum = 0;
    int oddsum = 0;
    
    int result;
    
    while (n>0) {
        result = n % 10;
        n = n/10;
        if(result % 2 == 0){
            evensum = evensum+result;
        }
        else{
            oddsum = oddsum+result;
        }
    }
    
    cout<<evensum<<" "<<oddsum<<endl;
}
