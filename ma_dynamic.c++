#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n; // size entered at runtime

    // Dynamically allocate memory for 'n' integers
    int *marks = new int[n];

    // Taking input
    cout << "Enter marks of " << n << " students:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
    }

    // Displaying output
    cout << "\nMarks entered are:\n";
    for (int i = 0; i < n; i++)
    {
        cout << marks[i] << " ";
    }

    // Free the dynamically allocated memory
    delete[] marks;

    return 0;
}
