   
  #include <iostream>
using namespace std;

int main()
{
    int a, b;
    char op;

    cin >> a >> op >> b;

    switch(op)
    {
        case '+':
            cout << "Answer = " << a + b;
            break;

        case '-':
            cout << "Answer = " << a - b;
            break;

        case '*':
            cout << "Answer = " << a * b;
            break;

        case '/':
            cout << "Answer = " << a / b;
            break;

        case '%':
            cout << "Answer = " << a % b;
            break;

        default:
            cout << "Invalid operator";
    }

    return 0;
}