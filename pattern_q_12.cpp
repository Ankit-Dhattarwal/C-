#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while (i<=n) {
        int j = i;
        while (j>0) {
            char y = 'E'-j+1;
            cout<<y;
            j--;
        }
        cout<<endl;
        i++;
    }
}
