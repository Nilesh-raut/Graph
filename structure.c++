#include<iostream>
using namespace std;
struct students
{
    char name[10];
    int roll_no;
};



int main(){

students vidyarthi;
// vidyarthi.name = {'a','d'};
vidyarthi.roll_no = 12;
 
cout<<vidyarthi.roll_no<<endl;

return 0;
}