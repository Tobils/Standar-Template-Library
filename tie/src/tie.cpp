#include <iostream>
#include <tuple>

int main(){
    int myint;
    char mychar;
    float myfloat;

    std::tuple<int, float, char> mytuple; 

    mytuple = std::make_tuple (10, 10.3, 'a'); // packing values on tuple

    std::tie (myint, myfloat, mychar) = mytuple; // unpacking tuple into variables

    std::cout << "myint contains : " << myint << std::endl;
    std::cout << "mychar contains : " << mychar << std::endl;
    std::cout << "myfloat contains : " << myfloat << std::endl;

    return 0;
}