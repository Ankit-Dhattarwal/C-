#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while (i<=n) {
        int space = 1;
        while (space<=n-i) {
            cout<<" ";
            space++;
        }
        int j= i;
        int k = 1;
        while (k<=i) {
            cout<<j;
            j++;
            k++;
        }
        j=j-2;
        k = 1;
        while (k<=i-1) {
            cout<<j;
            j--;
            k++;
        }


        cout<<endl;
        i++;
    }
}
