#include <iostream>
#include <fstream>
#include <vector>

// std::ifstream ifile("in.txt");
// std::ofstream ofile("out.txt");

void permutations(std::vector<int>& res, int idx){

     if (idx == res.size()){
        for (int i = 1; i < res.size(); ++i){
            // ofile << res[i] << " ";
            std::cout << (res[i] == res[i-1])?0:1;

        }
        // ofile << "\n";
        std::cout << "\n";

        return;
    }

    res[idx] = 0;
    permutations(res, idx + 1);
    res[idx] = 1;
    permutations(res, idx + 1);

}

int main(){ 
    
    // if (!ifile.is_open()){
    //     std::cerr << "Failed to open input file";
    //     return 1;
    // }
    // if (!ofile.is_open()){
    //     std::cerr << "Failed to open output file";
    //     return 2;
    // }

    long long n;
    // ifile >> n;
    std::cin >> n;

    std::vector<int> bitstr (n+1, 0);

    permutations(bitstr, 1);

    return 0;
}