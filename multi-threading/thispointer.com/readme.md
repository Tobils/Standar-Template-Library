**What std::thread accepts in constructor ?**
We can attach a callback with the std::thread object, that will be executed when this new thread starts. These callbacks can be,

1.) Function Pointer
2.) Function Objects
3.) Lambda functions

Thread objects can be created like this,
```c++
std::thread thObj(<CALLBACK>);
```