// pointer arithmetic
#include<iostream>
using namespace std;
int main(){
 
int a = 10;
int *pointer = &a;

cout<<pointer<<endl;
cout<<"The value in a access using pointer "<<*pointer<<endl;
pointer++;
cout<<pointer<<endl;
cout<<"The value in a access using pointer "<<*pointer<<endl;

return 0;
}