#include <iostream>

void my_memset(char* arr, char ch, size_t count) {
    int size = 0;
    int i = 0;
    while (arr[i] != '\0') {
        ++size;
        ++i;
    }
    if (size < count) {
        return;
    }
    for (size_t i = 0; i < count; ++i) {
        arr[i] = ch;
    }
}

int main() {
    char arr[] = "aaaaaaaaaaaaa";
    my_memset(arr, 'w', 5);
    int i = 0;
    while (arr[i] != '\0') {
        std::cout << arr[i] << " ";
        ++i;
    }
}
