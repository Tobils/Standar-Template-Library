
void DisplayThread::operator()()     
{
    for(int i = 0; i < 10000; i++){
        std::cout<<"Display Thread Executing"<<std::endl;
    }
        
}