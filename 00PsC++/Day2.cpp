#include <iostream>
using namespace std;

class Complex{
    int a;
    int b;

public:
    void SetData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void SetDataForSum(Complex c1, Complex c2)
    {
        a = c1.a + c2.a;
        b = c1.b + c2.b;
    }
    void GetSum()
    {
        cout << "Your Complex Number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    Complex c1, c2, c3;
    c1.SetData(1, 2);
    c1.GetSum();
    c2.SetData(3, 5);
    c2.GetSum();
    c3.SetDataForSum(c1, c2);
    c3.GetSum();
    return 0;
}
