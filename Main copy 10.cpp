   
  #include <iostream>
using namespace std;

int main()
{
    int choice;

    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Check Balance";
            break;
        case 2:
            cout << "Withdraw Money";
            break;
        case 3:
            cout << "Deposit Money";
            break;
        case 4:
            cout << "Exit";
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}