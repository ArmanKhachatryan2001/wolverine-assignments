#include <iostream>

void rtrim(std::string& str)
{
    int x = 0;
    int y = 0;
    for (int i = str.size()-1; i >= 0; --i) {
        if (str[i] == ' ') {
            ++x;
        } else {
            break;
        }
    }
    y = ((str.size()) - x);
    str.erase(y, x);
}

int main() {
    std::string str = "hello ";
    rtrim(str);
    std::cout << str;
}
