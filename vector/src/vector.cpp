#include <iostream>
#include <vector>

int main(){
    std::vector<int> g1;
    std::vector<std::string> list_data;
    
    const char * data_1 = "suhada ";
    for(int i=0; i<100; i++){
        list_data.push_back(data_1);
        g1.push_back(i);
    }

    // manual print out
    for(int j=0; j<g1.size(); j++){
        std::cout<<g1[j]<<" ";
        std::cout<<list_data[j]<< "\n";
    }

    std::cout<<"\n \n \n";

    // print out menggunakan begin dan end.
    for(auto i = g1.begin(); i != g1.end(); ++i){
        std::cout<<*i<< " ";
    }


    std::cout<<"\n \n \n";
    return 0;
}