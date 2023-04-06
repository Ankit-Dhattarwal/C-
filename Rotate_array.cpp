//#include<iostream>
//using namespace std;
//
//void rotate_arr(int arr[], int n, int d){
//    int j = 0;
//
//    while(j<d){
//        int temp = arr[0];
//        for(int i = 0 ;i<n; i++){
//            arr[i] = arr[i+1];
//
//        }
//          j++;
//        arr[n-1] = temp;
//    }
//}
//
//int main(){
//    int n;
//    cout<<"Enter the size of the array"<<endl;
//    cin>>n;
//
//    int d;
//    cout<<"Enter the number that you want to the rotate the arrays"<<endl;
//    cin>>d;
//
//    int arr[n];
//
//
//    cout<<"Enter the elements of arrays"<<endl;
//    for(int i= 0 ;i<n;i++){
//        cin>>arr[i];
//
//        rotate_arr(arr, n, d);
//
//        for(int i = 0; i<n;i++){
//            cout<<arr[i];
//        }
//
//    }
//}
//

#include<iostream>
using namespace std;
int main(){
    int n = 7;
    int d = 3;
    int arr[] = {2,6,3,1,5,9,8};

    int j = 0;
    while(j<d){
        int temp = arr[0];
        for(int i = 0; i<n;i++){
            arr[i] = arr[i+1];
        }
        j++;
        arr[n-1] = temp;
    }

    for(int i = 0; i<n;i++){
        cout<<arr[i];
    }
}


