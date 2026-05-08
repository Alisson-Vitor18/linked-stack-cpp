#pragma once
#include <memory>

template<typename T>
class Stack {
    private:
        struct Node {
            T valor;
            std::unique_ptr<Node> prox;

            Node(const T& valor, 
                std::unique_ptr<Node>prox = nullptr);
        };
        std::unique_ptr<Node> topo;
        std::size_t tamanho;

    public:
        Stack();

        bool push(const T& valor);
        bool pop();
        bool empty() const;
        T& top();
        std::size_t size() const;
};

#include "stack.tpp"