#include<iostream>
using namespace std;
class add
{
public:
    int n;
    add()
    {

    }
    add(int x)
    {
        n=x;
    }
    add operator+(add obj)
    {
        add c;
        c.n=n+obj.n;
    }
    void display()
    {
        cout<<n;
    }
};
int main()
{
    add a(5);
    add b(5);
    add c=a+b;
    c.display();
    return 0;
}
