#include <iostream>
#include <fstream>

void file_token(const std::string& str, std::ofstream& file)
{
    std::string s = "";
    std::string s1 = " ,";
    int i = 0, j = 0;
    bool flag = false;
    while (i < str.size()) {
            while (s1.find(str[i]) != -1) {
                flag = true;
                ++i;
            }
        if (flag) {
            file << s << '\n';
            s = "";
            flag = false;
        }
        s += str[i];
        ++i;
        if (i == str.size()) {
            file << s << '\n';
        }
    }
}

int main() {
    std::ifstream file;
    file.open("file.text");
    std::string str;
    std::ofstream file1;
    file1.open("file.write");
    while (!file.eof()) {
        std::getline(file, str);
        file_token(str, file1);
    }
    file.close();
    file1.close();
}
