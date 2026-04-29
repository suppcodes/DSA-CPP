// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter row and column";
//     cin>>n;
//     cout<<"enter elements of the array"<<endl;
//     int arr[n][n];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"the array is"<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             arr[i][j]=arr[j][i];
//         }
//     }
//     cout<<"the transposed array is \n";
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

//  METHOD 2
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter row and column";
    cin>>n;
    cout<<"enter elements of the array"<<endl;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"the array is"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    cout<<"the transposed array is \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}