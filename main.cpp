#include <iostream>
using namespace std;
int main(){
  int n, n2;
  cout<<"Enter number ";
  cin>>n;
  n2 = n*2;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
      cout<<" *";
    }
    int space= n2-2*i;
    for(int j=1; j<=space; j++){
      cout<<"  ";
    }
    for(int j=1; j<=i; j++){
      cout<<" *";
    }
    cout<<endl;
  }
  for(int i=n; i>=1; i--){
    for(int j=1; j<=i; j++){
      cout<<" *";
    }
    int space= n2-2*i;
    for(int j=1; j<=space; j++){
      cout<<"  ";
    }
    for(int j=1; j<=i; j++){
      cout<<" *";
    }
    cout<<endl;
  }
  return 0;
}
