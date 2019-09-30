#include "example.h"
#include <iostream>

namespace first
{
    int val = 100;
}

namespace ns
{
    int value = 5;
    void geek::display()
    {
        std::cout<<"ns::geek::display()\n";
    }

    void geek::tampilkan()
    {
        std::cout<<"ns::geek::tampilkan()\n";
    }
}

namespace ns2 
{
    double x = 100;
    double value() {return 2*x;}
    
    void display()
    {
        std::cout<<"ns2::display()\n";
    }

    void geek::display()
    {
        std::cout<<"ns2::geek::display()\n";
    }
}



namespace ade{
    namespace suhada{
        void tobil::display()
        {
            std::cout<<"ade::suhada::display()\n";
        };
    }
}


