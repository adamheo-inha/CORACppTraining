//substr
//문자열중 일부분 발취
#include <string>
#include <iostream>

int main() {
    std::string str;
    std::cin >> str;
    
    int pos, cou;
    std::cout << "시작위치 : ";
    std::cin >> pos;
    std::cout << "길이 : ";
    std::cin >> cou;
    
    std::string strr = str.substr(pos, cou);
    std::cout << "원본 : " << str << ", 발취 : " << strr << std::endl;

    return 0;
}