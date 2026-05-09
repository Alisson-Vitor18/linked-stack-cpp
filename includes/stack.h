#pragma once
#include <memory>

template<typename T>
class Stack {
    private:
        struct Node {
            T valor;
            std::unique_ptr<Node> prox;

            //Construtor da classe nó
            Node(const T& valor, 
                std::unique_ptr<Node>prox = nullptr);
        };
        std::unique_ptr<Node> topo = nullptr;
        std::size_t tamanho = 0;

    public:
        //Construtor da classe Stack
        Stack();

        //Verifica se a pilha está vazia
        bool empty() const;

        //Insere um novo nó na pilha
        void push(const T& valor);
        
        //Remove um nó da pilha
        void pop();

        //Retorna o valor do topo atual
        T& top();

        //Retorna o tamanho da pilha
        std::size_t size() const;

        //Imprime a pilha
        void print(std::ostream& os = std::cout) const;
};

#include "stack.tpp"