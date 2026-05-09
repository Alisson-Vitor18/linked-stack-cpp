#include <iostream>
#include <stack>
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

    std::cout << std::endl;
    std::cout << "Removendo valor \"" << stack.top() << "\" da pilha\n";
    stack.pop();
    std::cout << std::endl;

    stack.print(std::cout); 
    std::cout << std::endl;
    
    return 0;
}