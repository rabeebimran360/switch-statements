   
 #include <iostream>
using namespace std;

int main()
{
    char grade;
    cin >> grade;

    switch(grade)
    {
        case 'A':
            cout << "Excellent";
            break;
        case 'B':
            cout << "Very Good";
            break;
        case 'C':
            cout << "Good";
            break;
        case 'D':
            cout << "Pass";
            break;
        case 'F':
            cout << "Fail";
            break;
        default:
            cout << "Invalid grade";
    }

    return 0;
}