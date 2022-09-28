#include <iostream>

void toUpperCase(std::string& str)
{
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }
}

int main() {
    std::string str = "hElLo";
    toUpperCase(str);
    std::cout << str;
}
