#include <iostream>
using namespace std;
/*
2
1 3 1
1 1234 30000
*/

int check(int n1, int n2, int n3){
  int num = 0;
  if(n3==1 or n2==0){
    // cout<<"YOOO";
    return -1;
  }
  if(n2>n3){
    while(n2>n3-1){
      // cout<<"h";
      n2--;
      num++;
    }
  }
  if(n1>n2 or n1>0){
    while(n1>n2-1){
      n1--;
      num++;
    }
  }
  return num;
}

int main() {
  int n;
  cin>>n;
  int num[n];
  for(int i = 0; i<n; i++){
    int n1, n2, n3;
    cin>>n1>>n2>>n3;
    num[i] = check(n1, n2, n3);
  }
  for(int i = 0; i<n; i++){
    cout<<num[i]<<"\n";
  }
}
