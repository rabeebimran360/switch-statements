   
 #include <iostream>
using namespace std;

int main()
{
    int choice;
    float r, l, w;

    cin >> choice;

    switch(choice)
    {
        case 1:
            cin >> r;
            cout << "Area of circle = " << 3.14 * r * r;
            break;

        case 2:
            cin >> l >> w;
            cout << "Area of rectangle = " << l * w;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}