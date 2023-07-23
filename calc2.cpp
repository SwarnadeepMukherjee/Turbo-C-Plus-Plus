#include <iostream>
#include <conio.h>
using namespace std;
class calculator
{
public:
    int c;
    int add(int a, int b)
    {
        c = a + b;
        return c;
    }
    int sub(int a, int b)
    {
        c = a - b;
        return c;
    }
    int div(int a, int b)
    {
        c = a / b;
        return c;
    }
    int mul(int a, int b)
    {
        c = a * b;
        return c;
    }
};
int main()
{    
        int x, y, z;
        char op;
        calculator calc;
        cout << "Enter the first number" << endl;
        cin >> x;
        cout << "Enter the second number" << endl;
        cin >> y;
        cout << "What calculatioon do you want to perform?" << endl;
        cin >> op;
    
    if (op=='+') {
        z = calc.add(x,y);
        cout<<"The answer is: "<<z<<endl;
    }
    else if (op=='-') {
        z = calc.sub(x,y);
        cout<<"The answer is: "<<z<<endl;
    }
    else if (op=='*') {
        z = calc.mul(x,y);
        cout<<"The answer is: "<<z<<endl;
    }
    else if (op=='/') {
        z = calc.div(x,y);
        cout<<"The answer is: "<<z<<endl;
    }
    else ((op=='E') || (op=='e')); {
        cout<<"Thank You For Using Our Program"<<endl;
    }
    getch();
    return 0;
}
