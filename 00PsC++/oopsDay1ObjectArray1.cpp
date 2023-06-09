#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void SetId()
    {
        cout << "Enter the id of the employee:" << endl;
        cin >> id;
    }
    void GetId()
    {
        cout << "The id of the employee is " << id << endl;
    }
};

int main(int argc, char const *argv[])
{
    Employee AJPL[5];
    for (int i = 0; i < 5; i++)
    {
        AJPL[i].SetId();
        AJPL[i].GetId();
    }

    return 0;
}
