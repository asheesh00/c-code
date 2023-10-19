 #include<iostream>
using namespace std;
int main (){
  int m;
  cout<<"enter the no rows :";
  cin>>m;
  int n;
  cout<<"Enter the no columns :";
  cin>>n;
  int arr[m][n];
  for(int i=0; i<=m-1; i++){
    for(int j=0; j<=n-1; j++) {
        cin>>arr[i][j];
    }
  }

  cout<<"\n";
  // print
  for(int i=0; i<=m-1; i++){
    for(int j=0; j<=n-1; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    
  }
  cout<<endl;

  // printing tranpose
  for(int j=0; j<n; j++) {
    for(int i=0; i<m; i++){
        cout<<arr[i][j]<<" ";
    }

    cout<<endl;
    // store the transpose
    int t[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            t[i][j] = arr[j][i];
        }
    }
    // printing transpose matrix

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
  }


}


// black box generate code
// #include<iostream>
// using namespace std;

// void printMatrix(int arr[100][100], int m, int n) {
//     for(int i=0; i<m; i++){
//         for(int j=0; j<n; j++){
//             cout<<arr[i][j] <<" ";
//         }
//         cout<<endl;
//     }
// }

// void transposeMatrix(int arr[100][100], int m, int n) {
//     int t[100][100];
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             t[i][j] = arr[j][i];
//         }
//     }

//     printMatrix(t, n, m);
// }

// int main() {
//     int arr[100][100] = {{1, 2, 3},
//                           {4, 5, 6},
//                           {7, 8, 9}};

//     int m = 3;
//     int n = 3;

//     cout<<"Original Matrix: "<<endl;
//     printMatrix(arr, m, n);

//     cout<<endl<<"Transpose Matrix: "<<endl;
//     transposeMatrix(arr, m, n);

//     return 0;
// }