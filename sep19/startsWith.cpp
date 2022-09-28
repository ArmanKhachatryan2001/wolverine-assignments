#include <iostream>

bool startsWith(const std::string& str, const std::string& str2) {
    if (str.find(str2) != -1) {
        return true;
    }
    return false;
}

int main() {
    std::string str = "helloworld";
    std::string str2 = "hell";
    std::cout << startsWith(str, str2);
}
