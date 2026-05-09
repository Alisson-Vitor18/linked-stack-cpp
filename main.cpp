#include <iostream>
#include <stdexcept>
#include <memory>
#include "stack.h"

int main() {
    Stack<int> stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);

    stack.print(std::cout); 
    std::cout << std::endl;

    return 0;
}
