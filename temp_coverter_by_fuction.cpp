#include <iostream>
using namespace std;

void temp(int S, int E, int W){
    while (S<=E) {
         int coverter = (5*(S-32)) / 9;
        S = S+W;
        cout<<coverter<<endl;
    }
    
}


int main(){
    int S, E, W;
    cin>>S>>E>>W;
     temp(S, E, W);
    
}

