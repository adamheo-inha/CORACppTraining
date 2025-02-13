//append
//기존 문자(열) 뒤에 새로운 문자열을 추가
#include <iostream>
#include <string>

int main() {
    std::string str, addstr;
    std::cout << "기본 문자(열) : ";
    std::cin >> str;
    std::cout << "추가 문자(열) : ";
    std::cin >> addstr;

    str.append(addstr);
    std::cout << "추가된 문자(열) : " << str << std::endl;

    return 0;
}