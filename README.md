# Pilha Encadeada em C++

Este projeto implementa uma pilha encadeada em C++ utilizando templates, permitindo o armazenamento genérico de dados. O objetivo é estudar estruturas de dados em C++, também será feito uso da `std::stack` da STL a fins de demonstração.

---

## O que é uma pilha encadeada

Pilhas encadeadas são estruturas de dados que seguem o princípio LIFO (Last In, First Out — Último a Entrar, Primeiro a Sair). Elas são amplamente utilizadas na programação em diversas situações do dia a dia, como:

- Gerenciamento de histórico (Ctrl+Z e Ctrl+Y)
- Pilhas de chamadas (recursividade)
- Navegação no navegador (botão de voltar)
- Gerenciamento de memória 

### Por que usar estruturas encadeadas?
O principal objetivo de utilizar estruturas encadeadas é a flexibilidade de tamanho, já que não é necessário definir um limite fixo de elementos previamente. Dessa forma, evita-se o problema de _stack overflow_, desde que haja memória disponível no sistema.

---

## Funcionalidades 

- Push (empilhar elementos)
- Pop (remover elementos)
- Top (acessar elemento do topo)
- Empty (verifica se a pilha está vazia)
- Size (tamanho da pilha)
- Print (imprime a pilha)
- Implementação genérica com templates

---

## Tecnologias 

- C++
- Templates
- Estruturas de dados encadeadas 

---

## Como executar 

```bash
g++ main.cpp -Iincludes -o build/program
./build/program
```

## Exemplo de uso 

```cpp
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
```

### Saída esperada
```bash
[5, 4, 3, 2, 1]

Removendo valor "5" da pilha

[4, 3, 2, 1]

```

## Sobre a std::stack (C++ STL)

A linguagem C++ já fornece uma implementação pronta de pilha através da `std::stack`, presente na Standard Template Library (STL). Essa estrutura é altamente otimizada, testada e utilizada em projetos reais.

No dia a dia do desenvolvimento, o uso de ferramentas já prontas fornecidas pela linguagem é preferível, pois evita a necessidade de reimplementar funcionalidades já prontas.

---

### Exemplo de uso com a std::stack

```cpp
#include <iostream>
#include <stack>

void print_stack_cpp(std::stack<int>& stack_cpp);

int main() {
    std::stack<int> stack_cpp;

    stack_cpp.push(1);
    stack_cpp.push(2);
    stack_cpp.push(3);
    stack_cpp.push(4);
    stack_cpp.push(5);

    print_stack_cpp(stack_cpp);
    std::cout << std::endl;
}

void print_stack_cpp(std::stack<int>& stack_cpp) {
    bool first = true;
    std::cout << "[";

    while (!stack_cpp.empty()) {
        if (!first) std::cout << ", ";
        std::cout << stack_cpp.top();
        stack_cpp.pop();
        first = false;
    }

    std::cout << "]";
}
```
### Saída esperada
```bash
[5, 4, 3, 2, 1]
```
