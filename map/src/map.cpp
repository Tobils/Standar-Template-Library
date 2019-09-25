#include <iostream>
#include <iterator>
#include <map>
#include <unordered_map>

int main(){
    
    // empty map container
    std::cout<<"================ MAP ===========\n";
    std::map<int, int> map_test;
    int firstInt;
    int secInt;

    // insert element on random order
    int i = 1;
    for(int j=10; j<100; j=j+10){
        // map_test.insert(std::pair<int, int> (i, j));  // insert value menggunakan insert
        map_test[i] = j; // insert value manual menggunakan id <id, value>
        i++;
    }

    // print out map_test using itr
    std::cout<<"print out std::map data using iterator\n";
    std::map<int, int>::iterator itr;
    for(itr = map_test.begin(); itr != map_test.end(); itr++){
        std::cout<< '\t' << itr->first
                 << '\t' << itr->second << std::endl;
    }

    std::cout<<"\n";
    std::cout<<"print out manualy\n";
    for(int i=1; i< map_test.size(); i++){
        std::cout<<"\t"<<map_test[i]<<std::endl;
    }


    std::cout<<"================ <id string, value int> MAP ===========\n";
    std::map<std::string, int> debug;
    debug["debug1"] = 10;
    debug["debug2"] = 20;
    debug["debug3"] = 30;
    debug["debug4"] = 40;
    debug["debug5"] = 50;
    debug["debug6"] = 60;
    debug["debug7"] = 70;
    debug["debug8"] = 80;
    debug["debug9"] = 90;
    debug["debug10"] = 100;

    // print out data
    std::map<std::string, int>::iterator itr2;
    for(itr2 = debug.begin(); itr2 != debug.end(); itr2++){
        std::cout<<itr2->first<<"\t"<<itr2->second<<std::endl;
    }

    std::cout<<"================ UNORDERED MAP ===========\n";
    std::unordered_map<int, int> unmap_test;

    // insert value to unoredered map
    int j = 10;
    for(int k=1; k<10; k++){
        unmap_test[k] = j;
        j = j+10;
    }

    for(auto x : unmap_test){
        std::cout<<x.first << "\t" << x.second <<std::endl;
    }

    for(int z=1; z<unmap_test.size(); z++){
        std::cout<<unmap_test[z]<<std::endl;
    }

    return 0;
}