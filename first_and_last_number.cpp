#include<iostream>
using namespace std;
void digit(int *a){
    int last = *a%10;
    int first;
    while(*a>9){
        first=*a/10;
    }
    cout<<"First Number : "<<first<<endl;
    cout<<"Last number : "<<last<<endl; 
}
int main(){
    int n;
    cout<<"enter a number(Two digit) : ";
    cin>>n;
    digit(&n);
    return 0;
}