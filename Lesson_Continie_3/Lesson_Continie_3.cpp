#include <iostream>
using namespace std;

class A
{
private:
    int *a;
public:
    A()
    {
        a = new int[20];
    }

    A(const A& other)
    {
        a = new int[20];

        for (int i = 0; i < 20; i++)
        {
            a[i] = other.a[i];
        }
    }

    ~A()
    {
        delete []a;
    }
};

int main()
{
    A a;
    A b = a;
    //A b = a;

    return 0;

}