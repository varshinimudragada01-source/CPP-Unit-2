#include <iostream>
using namespace std;
class A
{
    int x;
public:
    A()
    {
        x = 5;
    }
    friend void display(A);
};
void display(A a)
{
    cout << a.x;
}
int main()
{
    A obj;
    display(obj);
    return 0;
}
