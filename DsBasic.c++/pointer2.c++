// pointer in array
#include <iostream>
using namespace std;
int main()
{

    int arr[] = {10, 20, 30};

    cout << arr << endl;
    cout << &arr << endl;
    cout << *arr << endl;
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;

    int *ptr = arr;
    // ab yha arr ka matlab hai base address of arr matlab 10 ka address

    // how to print array using pointer
    for (int i = 0; i < 3; i++)
    {
        cout << *ptr << " ";
        ptr++;
        // arr++ illegal hai
        // agar aap soch rahe ho ki arr me 10 ko print krwa lunga fir arr++ kr dunga to mujhe 20 mil jayega. But aise nahi hota hai.
    }

    cout<<endl;
    for (int i = 0; i < 3; i++)
    {

        // Then what is llegal
        cout << *(arr + i) << " ";
    }

    return 0;
}