#include<iostream>
using namespace std;
int main(){
 
int a = 12;
int *pointer;
pointer = &a;

cout<<*pointer<<endl;
*pointer = 58;
cout<<*pointer<<endl;
// yha hm pointer value ko update kr rahe hai.
 

return 0;
}