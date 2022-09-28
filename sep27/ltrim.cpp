#include <iostream>

void rtrim(std::string& str)
{
    int x = 0;
    for (int i = 0;i < str.size(); ++i) {
        if (str[i] == ' ') {
            ++x;
        } else {
            break;
        }
    }
    str.erase(0, x);
}

int main() {
    std::string str = "   hello";
    rtrim(str);
    std::cout << str;
}
