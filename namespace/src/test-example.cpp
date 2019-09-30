#include "example.h"
#include <iostream>

// global variable
int val = 200;

int main()
{

    const char *basic_namespace = "basic name space";
    const char* bagian_2 = "basic kedua memanggil value";
    const char* bagian_3 = "basic class dan namespace #1";
    const char* bagian_4 = "basic class dan namespace #2";
    const char* bagian_5 = "basic class dan namespace #3";
    const char* batas = "===========================";
    // local variable
    int val = 300;
    std::cout<<batas<<std::endl<<basic_namespace<<std::endl;
    std::cout<<first::val<<std::endl;

    // access value
    std::cout<<batas<<bagian_2<<std::endl;
    std::cout<<ns1::value() << std::endl <<ns2::value()<<std::endl<<ns2::x<<std::endl;

    // namespace and class 1
    std::cout<<batas<<bagian_3<<std::endl;
    ns::geek obj;
    obj.display();

    // namespace and class 2
    std::cout<<batas<<bagian_4<<std::endl;
    ns2::geek obj2;
    obj2.display();


    // namespace and class 3
    std::cout<<batas<<bagian_5<<std::endl;
    ns3::geek obj3;
    ns3::display();
    obj3.display();

    return 0;
}