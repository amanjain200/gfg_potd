#include <iostream>
using namespace std;
class Employee
{
    int id;
    int salary;

protected:
    int SecretCode;

public:
    Employee()
    {
        id = 1;
        salary = 50;
        SecretCode = 10001;
    }
    void SetData(int a, int b)
    {
        id = a;
        salary = b;
    }
    void GetData()
    {
        cout << "Id is " << id << endl;
        cout << "salary is " << salary << endl;
        cout << "The secret code of the employee is " << SecretCode<<endl;
    }
};
class Developer : public Employee
{
    int Code;

public:
    Developer()
    {
        Code = 1;
        SecretCode = 10002;
    };
    void GetDetails()
    {
        cout << "The code is " << Code << endl;
        GetData();
    }
};

int main()
{
    Employee david, rahul, gautam;
    david.SetData(2, 200);
    david.GetData();
    rahul.GetData();
    

    Developer sid, harry;
    sid.SetData(5, 500);
    sid.GetDetails();
    

    return 0;
}
