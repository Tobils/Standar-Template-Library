#include <sstream>
#include <iostream>
#include <map>
int countWords(std::string kalimat){
    // pecah kalimat menjadi kata menggunakan stringstream
    std::stringstream s(kalimat); // digunakan untuk memecah kelimat menjadi kata-kata
    std::string kata;

    int count = 0;
    while (s >> kata)
    {
        /* code */
        count++;
    }

    return count;
}


void printFrequency(std::string kalimat){
    // setiap kata di mapping dengan frequensinya
    std::map<std::string, int> FW;
    std::stringstream ss(kalimat);
    std::string kata;

    while(ss >> kata){
        FW[kata]++; // increase value based on id kata. <kata, jumlah_kata>
    }

    std::map<std::string, int>::iterator itr;
    for(itr = FW.begin(); itr != FW.end(); itr++){
        std::cout<< itr->first << "\t" << itr->second << std::endl;
    }
}

int main(){
    std::cout<<"menghitung banyaknya kata dalam sebuah kalimat" << std::endl;
    std::cout<<"=========================================================" << std::endl;
    std::string kalimat = "geeks for geeks geeks contribution placements";
    std::cout<<" benyaknya kata adalah : " << countWords(kalimat) << std::endl;
    std::cout<<"=========================================================\n" << std::endl;
    std::cout<<"menghitung frekuensi kata dalam kalimat" << std::endl;
    printFrequency(kalimat);
    return 0;
}