#include <iostream>
using namespace std;
int sum(int a, int b){
  return a-b;
}
int main(){
  int a=4;
  int b=7;
  int n =8; 
  sum(a,b);
  cout<<sum(a,b);
  for (int i=0; i <n; i++){
  cout<<endl<<i<<endl;
  }
}