#include <iostream>

const std::string replaceAll(const std::string& s,const std::string& s1,const std::string& s2)
{
    std::string tmp = "";
    for (int i = 0; i < s.size(); ++i) {
        while (s1.find(s[i]) != -1) {
            tmp += s2;
            ++i;
        }
        tmp += s[i];
    }
    return tmp;
}



int main() {
    std::string str = "lhelloworldl";
    std::string str1 = "l";
    std::string str2 = "ch";
    std::cout << replaceAll(str, str1, str2);
}
