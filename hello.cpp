#include <iostream>

int main()
{
    bool isFirst;
    std::cin >> isFirst ;
    if (isFirst) {
        std::cout << "hello world" << std::endl;
    } else {
        std::cout << "hello again" << std::endl;
    }
    return 0;
}
