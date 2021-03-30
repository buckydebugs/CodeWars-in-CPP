#include<string>
#include<iostream>
#include<map>
using namespace std;
std::string solution(int number) {
    const std::map<int, std::string> bases = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };
    std::string rnum("");
    for (auto it = bases.crbegin(); it != bases.crend(); ) {
        if (number >= it->first) {
            number -= it->first;
            rnum += it->second;
        } else {
            it++;
        }
    }
    
    return rnum;
}
int main ()
{
    string s = solution(420);
    cout<<s; //displays CDXX
}