#include <iostream>
#include <vector>

std::vector<std::string> foo(const std::string& s, const std::string& s1) {
    std::string str = "";
    std::vector<std::string> vec;
    int i = 0, j = 0;
    bool flag = false;
    while (i <= s.size()) {
            if (s1.find(s[i]) != -1) {
                flag = true;
                ++i;
            }
        if (flag) {
            vec.push_back(str);
            str = "";
            flag = false;
        }
        str += s[i];
        ++i;
    }
    vec.push_back(str);
    return vec;
}

int main() {
    std::string str = "mov r1: 4";
    std::string ss = " ,:";
    std::vector<std::string> vec = foo(str, ss);
    for (int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
}
