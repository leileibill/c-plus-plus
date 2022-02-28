#include <iostream>

using namespace std;


class BaseClass 
{       
    public:            
        int myNum;       
        virtual void print_something(string text = "base")
        {
            cout << "Printed by base with text = " << text << "\n";
        };  

        // virtual void print_with_default(string text="base")
        // {
        // };
};

class DerivedClass: public BaseClass
{
    public:
        // void print_something(string text = "derived")
        // {
        //     cout << "Printed by derived with text = " << text << "\n";
        // };

        void print_something()
        {
            cout << "Printed by derived\n";
        };
};

int main()
{
    cout << "Hello world\n";

    BaseClass * base_ptr = new BaseClass();
    DerivedClass * derived_ptr = new DerivedClass();
    BaseClass * derived_base_ptr = new DerivedClass();

    base_ptr->print_something();
    derived_ptr->print_something();
    derived_base_ptr->print_something();


    return 0;
}

