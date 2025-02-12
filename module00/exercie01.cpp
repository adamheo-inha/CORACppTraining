

#include <string>   //string
#include <iostream> //cout
#include <algorithm>    //toupper

int main() {
    std::string str, stru, strl;
    std::cin >> str;
    stru = strl = str;

    std::cout << "origin : " << stru;
    std::transform(stru.begin(), stru.end(), stru.begin(), ::toupper);
    std::cout << "/ transformed : " << stru << std::endl;

    std::cout << "origin : " << strl;
    std::transform(strl.begin(), strl.end(), strl.begin(), ::tolower);
    std::cout << "/ transformed : " << strl << std::endl;
    return 0;
}