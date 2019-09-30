namespace first
{
    int val = 500;
}

namespace ns1 
{
    int value() {return 5;}
}

namespace ns2 
{
    const double x = 100;
    double value(){ return 2*x;}
}

// class and namespace #1
#include <iostream>
namespace ns
{
    class geek
    {
        public:
            void display()
            {
                std::cout<<" ns::geek::dsiplay()\n";
            };
    };
}

// class and namespace #2
namespace ns2
{
    class geek;
}

class ns2::geek
{
    public:
    void display()
    {
        std::cout<<"ns2::geek::display()\n";
    }
};


//class and namespace #3
namespace ns3
{
    void display();
    class geek
    {
        public :
        void display();
    };
}

void ns3::geek::display()
{
    std::cout<<"ns3::geek::display()\n";
}

void ns3::display()
{
    std::cout<<"ns3::display()\n";
}




