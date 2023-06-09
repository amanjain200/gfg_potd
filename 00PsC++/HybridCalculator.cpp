#include <iostream>
#include <math.h>
using namespace std;

class SimpleCalculator
{
    int x;
    int y;

public:
    void getNumbers(int a, int b)
    {
        x = a;
        y = b;
    }
    void sum()
    {
        cout << "The Sum is " << (x + y) << endl;
    }
    void diff()
    {
        cout << "The diff is " << (x - y) << endl;
    }
    void multiply()
    {
        cout << "The multiplication is " << (x * y) << endl;
    }
    void div()
    {
        cout << "The division is " << (x / y) << endl;
    }
};

class ScientificCalculator
{
    int x;
    int y;

public:
    void getNumbers(int a, int b)
    {
        x = a;
        y = b;
    }
    void power()
    {
        cout << "The power is " << (x + y) << endl;
    }
    void Squareroot()
    {
        cout << "The square root are " << (sqrt(x)) << " & " << (sqrt(y)) << endl;
    }
    void Cos()
    {
        cout << "The cosine value is " << (cos(x)) << " " << (cos(y)) << endl;
    }
    void Sin()
    {
        cout << "The sine value is " << (sin(x)) << " " << (sin(y)) << endl;
    }
};
class HybridCalculator : public SimpleCalculator, public ScientificCalculator{

};

int main()
{
   
}
