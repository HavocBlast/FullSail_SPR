#include <iostream>
#include <string>

namespace Helper{
  int GetValidatedInt(const char* strMessage, int nMinimumRange = 0, int nMaximumRange = 0){
    std::cout << strMessage;
    std::string input;
    std::cin >> input;

    for(char ch : input){
      if(!isdigit(ch)){
        std::cin.clear();
        std::cin.ignore();
        GetValidatedInt(strMessage, nMinimumRange,nMaximumRange);
      }
    }
    std::cin.clear();
    return std::stoi(input);
  }
}