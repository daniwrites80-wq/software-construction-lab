#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare variables
    string grade;
    double fee;

    // Take input from user
    cout << "Enter Grade: ";
    cin >> grade;

    cout << "Enter Fee: ";
    cin >> fee;

    // Display the stored values
    cout << endl;
    cout << "Student Data" << endl;
    cout << "------------" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Fee: " << fee << endl;

    return 0;
}