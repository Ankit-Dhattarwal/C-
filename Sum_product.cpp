#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    
    int choice;
    int sum = 0;
    cout<<"Enter the choice only in form of the 0 and 1 "<<endl;
    cin>>choice;

    if(choice == 1){
        for(int i = 0 ; i<=n;i++){
            sum = sum + i;
        }
        cout<<sum<<endl;
    }
}
