#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while (i<=n) {
        int star = 1;
        int j = n-i+1;
        while (star<=n-i+1) {
            cout<<j;
            star++;
        }
        cout<<endl;
        i++;
    }
}


