#include <iostream>
using namespace std;

struct smartPhone
{
    string name;
    int storageSpace;
    string color;
    float price;
};

int main()
{
    smartPhone mobile;
    mobile.name = "iPhone12Pro";
    mobile.storageSpace = 12;
    mobile.color = "Blue";
    mobile.price = 888.35;

    cout<<"The complete information about mobile"<<endl;
    cout<<mobile.name<<endl;
    cout<<mobile.storageSpace<<endl;
    cout<<mobile.color<<endl;
    cout<<mobile.price<<endl;

    return 0;
}