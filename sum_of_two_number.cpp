
#include <iostream>
using namespace std;
int sum(int *a,int *b){
    int j = *a + *b;
    return j;
}
int main() {
  int x,y;
  cin>>x;
  cin>>y;
  cout<<sum(&x,&y);
}