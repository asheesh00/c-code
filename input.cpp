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
  // print

   for(int i=0; i<=m-1; i++){
    for(int j=0; j<=n-1; j++) {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }


}