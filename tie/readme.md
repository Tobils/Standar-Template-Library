# std::tie

std::tie digunakan untuk unpacking variable, salah satunya unpacking dari tuple.
contohnya :
dari tuple data = (22, 20.5, 'c');
setiap element pada tuple data dapat diunpacking menjadi :
int tmpInt = 22
int tmpFloat = 20.5
int tmpChar = c

 dengan syntax :
 ```c++
    int myint;
    char mychar;
    float myfloat;

    std::tuple<int, float, char> mytuple; 

    mytuple = std::make_tuple (10, 10.3, 'a'); // packing values on tuple

    std::tie (myint, myfloat, mychar) = mytuple; // unpacking tuple into variables
 ```