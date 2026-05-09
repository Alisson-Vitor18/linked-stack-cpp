#include <iostream>
#include <stdexcept>
#include <memory>
#include "stack.h"

template<typename T>
void printStack(Stack<T>& stack);

int main() {
    Stack<int> stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);

    try {
        printStack(stack);
    }catch(const std::runtime_error& e) {
        std::cout << "Erro capturado: " << e.what() << std::endl;
    }   

    return 0;
}

template<typename T>
void printStack(Stack<T>& stack) {
    if(stack.empty()) {
        throw std::runtime_error("A pilha está vazia");
    }

    bool first = true;
    std::cout << "[";
    while(!stack.empty()) {
        if(!first) {
            std::cout << ", ";
        }
        std::cout << stack.top();
        stack.pop();
        first = false;
    }
    std::cout << "]" << std::endl;
}