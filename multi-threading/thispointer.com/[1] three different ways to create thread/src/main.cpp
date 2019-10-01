#include <thread>
#include <iostream>
/*
    ada 3 cara menggunakan thread dengan callback
    1. fungsi pointer
    2. fungsi object
    3. fungsi lambda
*/

void thread_function()
{
    for(int i = 0; i < 10; i++);
    {
        std::cout<<"thread function pointer Executing"<<std::endl;
    }
}



class DisplayThread
{
public:
    void operator()()     
    {
        for(int i = 0; i < 10; i++){
            std::cout<<"Display Thread object Executing"<<std::endl;
        }
            
    }
};



int main()  
{
    const char* case1 = "fungsi pointer";
    const char* case2 = "fungsi object";
    const char* case3 = "fungsi lambda";


    for(int i = 0; i < 10; i++){
        std::cout<<"Display From Main Thread "<<std::endl;
    }


    // case #1
    std::cout << case1 << std::endl;
    std::thread pointer(thread_function);
    std::cout<<"Waiting For Thread to complete"<<std::endl;
    pointer.join();
    std::cout<<"Exiting from pointer Main Thread"<<std::endl;

    // case #2
    std::cout << case2 << std::endl;
    std::thread object( (DisplayThread()) );
    std::cout<<"Waiting For Thread to complete"<<std::endl;
    object.join();
    std::cout<<"Exiting from object Main Thread"<<std::endl;

    // case #3
    std::cout<<case3<<std::endl;
    int x = 9;
    std::thread threadLambda([]{
            for(int i = 0; i < 10; i++)
                std::cout<<"Display Thread Lambda Executing"<<std::endl;
            });

    threadLambda.join();

    return 0;
}