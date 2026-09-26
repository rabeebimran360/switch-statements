   
  #include <iostream>
using namespace std;

int main()
{
    int choice;
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Pakistani Rupee";
            break;
        case 2:
            cout << "US Dollar";
            break;
        case 3:
            cout << "British Pound";
            break;
        case 4:
            cout << "Euro";
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}