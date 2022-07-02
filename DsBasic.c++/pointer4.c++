// This is called as call by refrence 
// yha hm address pass krete hai.
#include<iostream>
using namespace std;
void passvalue(int *ptr){
int a = *ptr;
a++;
*ptr=a;
// cout<<*ptr;

}

int main(){
 
int a = 2;
int b = 3;
 
passvalue(&a); 
cout<<a;

return 0;
}