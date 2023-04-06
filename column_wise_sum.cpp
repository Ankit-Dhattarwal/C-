#include<iostream>
using namespace std;
int main(){
    int a[100][100];
    int m, n;
    cin>>m>>n;
    
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n;j++){
            cin>>a[i][j];
        }
    }
    

    for(int j = 0; j<n; j++){
        for(int i = 0; i<m;i++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int sum = 0;
    
    for(int j = 0; j<n; j++){
        for(int i = 0; i<m;i++){
            sum = sum + a[i][j];
        }
        cout<<endl;
        cout<<"THE RESULT : "<<sum<<endl;
        sum = 0;
    }
}
