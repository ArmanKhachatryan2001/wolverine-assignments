#include <iostream>

bool startsWith(const std::string& str, const std::string& str2) {
    if (str.find(str2) != -1) {
        int j = str.size() - 1;
        for (int i = str2.size()-1; i >= 0; --i) {
            if (str2[i] != str[j]) {
                return false;
            }
            --j;
        }
        return true;
    }
    return false;
}

int main() {
    std::string str = "helloworld";
    std::string str2 = "rld";
    std::cout << startsWith(str, str2);
}
