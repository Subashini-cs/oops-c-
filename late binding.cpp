#include<iostream>
using namespace std;
class a
{
public:
     virtual void display()
     {
         cout<<"base class";
     }

};
class b:public a
{
public:

    void display()
    {
        cout<<"derived class";
    }
};
int main()
{
    a *ptr;
    b B;
    ptr=&B;
    ptr->display();
    return 0;

}
