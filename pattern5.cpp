#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int i = 1;
    while (i<=n) {
        int j=i;
        int k = 1;
        int p = 1;
        while(p<= n-i){
            cout<<" ";
            p = p +1;
        }
        while(k<=i){
            cout<<j;
            j++;
            k++;
        }
        cout<<endl;
        i++;
    }
}
