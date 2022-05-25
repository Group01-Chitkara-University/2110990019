#include <iostream>
using namespace std;

template <class T>
class Calculator
{
private:
    T num1, num2;

public:
    Calculator(T n1, T n2)
    {
        num1 = n1;
        num2 = n2;
    }

    T add() { cout << num1 + num2<<endl; }

    T sub() { cout << num1 - num2<<endl; }

    T mul() { cout << num1 * num2<<endl; }

    T div() { cout << num1 / num2<<endl; }
};

int main()
{
    int a, b;
    float c, d;
    int opt;
    cout << "Enter number 1 for int 2 for float"<<endl;
    cin >> opt;
    if (opt == 1)
    {
        cout << "Enter number 1"<<endl;
        cin >> a;
        cout << "Enter number 2"<<endl;
        cin >> b;
        Calculator<int> Calc1(a, b);
        Calc1.add();
        Calc1.sub();
        Calc1.mul();
        Calc1.div();

    }
    else
    {
        cout << "Enter float 1"<<endl;
        cin >> c;
        cout << "Enter float 2"<<endl;
        cin >> d;
        Calculator<float> Calc2(c, d);
        Calc2.add();
        Calc2.sub();
        Calc2.mul();
        Calc2.div();
    }


    return 0;
}