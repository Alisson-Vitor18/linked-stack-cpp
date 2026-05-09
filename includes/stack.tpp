#include <iostream>
#include <stdexcept>
#include <memory>
#include "stack.h"

template<typename T>
Stack<T>::Node::Node(const T& valor, std::unique_ptr<Node>prox) 
    : valor(valor), prox(std::move(prox)) {}

template<typename T>
Stack<T>::Stack() = default;

template<typename T>
bool Stack<T>::empty() const {
    return topo == nullptr;
}

template<typename T>
void Stack<T>::push(const T& valor) {
    auto novo = std::make_unique<Node>(valor);

    novo->prox = std::move(topo);
    topo = std::move(novo);
    
    ++tamanho;
}

template<typename T>
void Stack<T>::pop() {
    if(empty()) {
        throw std::runtime_error("A pilha está vazia, não é possível remover");
    }

    topo = std::move(topo->prox);
    --tamanho;
}

template<typename T>
T& Stack<T>::top() {
    if(empty()) {
        throw std::runtime_error("A pilha está vazia");
    }

    return topo->valor;
}

template<typename T>
std::size_t Stack<T>::size() const {
    return tamanho;
}