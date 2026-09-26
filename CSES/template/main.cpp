#include <iostream>
#include <fstream>

int main(){ 
    std::ifstream ifile("in.txt");
    std::ofstream ofile("out.txt");
    if (!ifile.is_open()){
        std::cerr << "Failed to open input file";
        return 1;
    }
    if (!ofile.is_open()){
        std::cerr << "Failed to open output file";
        return 2;
    }

    return 0;
}