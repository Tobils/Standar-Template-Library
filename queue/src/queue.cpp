#include <iostream>
#include <queue>


void showpq(std::priority_queue <int> gq)
{
    std::priority_queue <int> g = gq;
    while (!g.empty())
    {
        std::cout<< '\t' << g.top();
        g.pop();
    }
    // std::cout<<"\n";
}


int main(){
    
    std::vector<int> g1;
    for(int i=0; i<100; i++){
        g1.push_back(i);
    }

    std::priority_queue <int> gquize;
    for(int k=1; k<100; k++){
        gquize.push(k);
    }

    std::cout<<"the priority queue gquize is : \n";
    showpq(gquize);

    std::cout<<"\ngquize.size() : "<<gquize.size() <<std::endl;
    std::cout<<"gquize.top() : "<<gquize.top() <<std::endl;

    std::cout<<"gquize.pop() : " <<std::endl;
    gquize.pop();
    showpq(gquize);
    
    gquize.push(5);
    showpq(gquize);

    std::cout<<"\n";



    return 0;
}