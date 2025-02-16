/*
The program gets two arguments:
./convert {command} {string}

A. ex) ./convert up I’m the one!
    i. output: I’M THE ONE!

B. ex) ./convert down I’m A SMall man
    i. output: i’m a small man
*/
/*
진행상황
    완)인자들 중에 문장 부분 합치기
    완)up/down 판단
        완)무장 대/소문자 변경
*/
#include <iostream>     //cout
#include <algorithm>    //toupper tolower
#include <string>

int main(int argc, char* argv[]) {

    std::string string;
    std::string condition = argv[1];


    //입력받은 문자를 합치고 출력
    for (int i = 2; i < argc; i++) {
        string.append(argv[i]);
        if (i < argc-1) string.append(" ");   
    }
    std::cout << string << std::endl;
    
    //-------------------------------

    // up/down 판단
    if(condition == "up") {
        //std::cout << "up" << std::endl;
        std::transform(string.begin(), string.end(), string.begin(), ::toupper);
        std::cout << "output : " << string << std::endl;


    } else if(condition == "down"){
        //std::cout << "down" << std::endl;
        std::transform(string.begin(), string.end(), string.begin(), ::towlower);
        std::cout << "output : " << string << std::endl;

    
    } else {
        std::cout << "조건 부적합" << std::endl;        
    
    }    
    //--------------------------------------
    
    return 0;
}