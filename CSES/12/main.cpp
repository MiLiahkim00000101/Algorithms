#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <fstream>


int main(){ 

    // std::ifstream ifile("in.txt");
    // std::ofstream ofile("out.txt");
    // if (!ifile.is_open()){
    //     std::cerr << "Failed to open input file";
    //     return 1;
    // }
    // if (!ofile.is_open()){
    //     std::cerr << "Failed to open output file";
    //     return 2;
    // }


    std::string inp;
    std::cin >> inp;
    // ifile >> inp;


    long long n = inp.size();

    std::map<char, long long> letter_amount;

    for (long long i = 0; i < n; ++i){
        if (letter_amount.count(inp[i]) == 0)
            letter_amount[inp[i]] = 1;
        else
            letter_amount[inp[i]] += 1;
    }
    std::string res (n, '0');

    int am_of_odd = 0;
    long long idx = 0;
    
    for (const auto& la : letter_amount){

        if (la.second % 2 == 1){
            am_of_odd++;
            res[n / 2] = la.first;
            for(int i = la.second - 1; i > 0; i -= 2){
                res[idx] = la.first;
                res[(n - idx) - 1] = la.first;
                idx++;
            }
            
        }
        else{
            for(int i = la.second; i > 0; i -= 2){
                res[idx] = la.first;
                res[(n - idx) - 1] = la.first;
                idx++;
            }
        }
        if (am_of_odd > 1 || ((am_of_odd == 1) && (n % 2 == 0))){
            std::cout << "NO SOLUTION" << "\n";
            // ofile << "NO SOLUTION" << "\n";

            return 0;;
        }
    }

    std::cout << res << "\n";
    // ofile << res << "\n";

    return 0;
}