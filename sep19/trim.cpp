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
    if (x) {
    y = ((str.size()) - x);
    str.erase(y, x);
    }
    x = 0;
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
    std::string str = "  hello ";
    rtrim(str);
    std::cout << str;
}
