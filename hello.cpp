#include <iostream>
using namespace std;

int main()
{
    double a,b;
    char op;
    cin >> a >> op >> b;
    if(op == '+') cout << a + b;
    else if(op == '-') cout << a - b;
    else if(op == '*') cout << a * b;
    else if(op == '/')
    {
        if(b == 0) cout << "除数不能为0";
        else cout << a / b;
    }
    cout << endl;
    return 0;
}
