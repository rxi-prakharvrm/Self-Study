#include <iostream>
#include <vector>

int main() {
    int size;
    std::cin >> size;
    std::cin.ignore();

    std::vector<int> v(size);
    for (int i = 0; i < size; i++) {
        std::cin >> v[i];
    }

    std::cout << "Size is: " << size << std::endl;

    for (int i = 0; i < size; i++) {
        std::cout << v[i] << " ";
    }

    return 0;
}
