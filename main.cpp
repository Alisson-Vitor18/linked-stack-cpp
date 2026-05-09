#include <iostream>
#include <stack>
#include <memory>
#include "stack.h"

void print_stack_cpp(std::stack<int>& stack_cpp);

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
    std::stack<int> stack_cpp;
    stack_cpp.push(1);
    stack_cpp.push(2);
    stack_cpp.push(3);
    stack_cpp.push(4);
    stack_cpp.push(5);

    print_stack_cpp(stack_cpp);
    std::cout << std::endl;
    
    return 0;
}

void print_stack_cpp(std::stack<int>& stack_cpp) {
    bool first = true;
    std::cout << "[";
    while (!stack_cpp.empty()) {
        if(!first) std::cout << ", ";
        std::cout << stack_cpp.top();
        stack_cpp.pop();
        first = false;
    }
    std::cout << "]";
}