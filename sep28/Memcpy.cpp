#include <iostream>

void my_memcpy(void* arr, void* arr2, size_t count)
{
    int i = 0;
    int size = 0;
    while (((char*)arr)[i] != '\0') {
        ++i;
        ++size;
    }
    if (size < count) {
        return;
    }
    i = 0;
    for (i; i < count - 1; ++i) {
        ((char*)arr2)[i] = ((char*)arr)[i];
    }
    ((char*)arr2)[i] = '\0';
}

int main() {
    int size = 6;
    char arr[] = "aaaaaaaaaaaaaa";
    char arr2[size];
    my_memcpy(arr, arr2, size);
    int i = 0;
    while (arr2[i] != '\0') {
        std::cout << arr2[i];
        ++i;
    }
}
