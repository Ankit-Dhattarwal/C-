#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while (i<=n){
        int j = i;
        int k = 1;
        while (k<=i){
            char y = 'A'+j-1;
            cout<<y;
            j++;
            k++;
        }
        cout<<endl;
        i++;
    }
}
