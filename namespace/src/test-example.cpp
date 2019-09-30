#include "example.cpp"
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
    const char* bagian_6 = "nested namespace and alias #4";
    const char* batas = "===========================";
   
    std::cout<<batas<<std::endl<<basic_namespace<<std::endl;
    std::cout<<first::val<<std::endl;

    std::cout<<batas<<std::endl<<bagian_2<<std::endl;
    ns::geek obj1;
    std::cout<<ns::value<<"\t"<<std::endl;
    obj1.display();
    obj1.tampilkan();

    std::cout<<batas<<std::endl<<bagian_3<<std::endl;
    ns2::geek obj2;
    std::cout<<"x : "<<ns2::x<<"\t"<<ns2::value()<<std::endl;
    obj2.display();
    ns2::display();

    std::cout<<batas<<std::endl<<bagian_4<<std::endl;
    ade::suhada::tobil objTobil;
    objTobil.display();

    return 0;
}