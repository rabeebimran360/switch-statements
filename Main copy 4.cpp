   
  #include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    switch(n)
    {
        case 1:
            cout << "Red - Stop";
            break;
        case 2:
            cout << "Yellow - Wait";
            break;
        case 3:
            cout << "Green - Go";
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}
}