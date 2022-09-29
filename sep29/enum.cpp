#include <iostream>
#include<map>

std::map<int, std::string> mp = {{0, "Blue"}, {1, "Yellow"}, {2, "Green"},
                                {3, "Red"}, {4, "Black"}, {5, "White"},
                                {6, "Grey"}, {7, "Ogange"}, {8, "Pink"},
                                {9, "Purple"}, {10, "Brown"}};

enum class colors {
    Blue, Yellow, Green, Red,
    Black, White, Grey, Ogange,
    Pink, Purple, Brown
};

std::string toString(const int num)
{
    for (auto it : mp) {
        if (it.first == num) {
            return it.second;
        }
    }
    return "";
}

int toEnum(const std::string str)
{
    for (auto it : mp) {
        if (it.second == str) {
            return it.first;
        }
    }
    return -1;
}
int main() {
    std::string str;
    std::cout << toString(static_cast<int>(colors::Pink)) << '\n';
    std::cout << toEnum("Pink") << '\n';
}
