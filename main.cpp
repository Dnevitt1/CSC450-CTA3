#include <iostream>

int main() {

    int n1, n2, n3;
    int *pN1 = new int(n1);
    int *pN2 = new int(n2);
    int *pN3 = new int(n3);

    std::cout << "Enter 3 numbers separated by spaces: " << std::endl;
    std::cin >> *pN1 >> *pN2 >> *pN3;

    std::cout << "Addresses: " << pN1 << ", " << pN2 << ", " << pN3 << std::endl;
    std::cout << "Values: " << *pN1 << ", " << *pN2 << ", " << *pN3 << std::endl;

    delete pN1;
    delete pN2;
    delete pN3;

    return 0;
}