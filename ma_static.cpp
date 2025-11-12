#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    float b = 5.3;       // renamed and correct data type
    
    int arr[3] = {20, 30, 40};   // added semicolon
    
    cout << a << endl;
    cout << b << endl;
    
    for (int i = 0; i < 3; i++)   // declared i
    {
        cout << arr[i] << " ";
    }

    return 0;
}
