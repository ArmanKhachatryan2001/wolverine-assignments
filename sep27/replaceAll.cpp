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
/*
const std::string replaceAll(std::string s,const std::string& s1,const std::string& s2)
{
    int x = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s.find(s1) != -1) {
           int x = s.find(s1);
           s.erase(x, s1.size());
           s.insert(x, s2);
        }
    }
    return s;
}

int main() {
    std::string str = "hello";
    std::string str1 = "hello";
    std::string str2 = "world";
    std::cout << replaceAll(str, str1, str2);
}
*/
int main() {
    std::string str = "lhelloworldl";
    std::string str1 = "l";
    std::string str2 = "ch";
    std::cout << replaceAll(str, str1, str2);
}
