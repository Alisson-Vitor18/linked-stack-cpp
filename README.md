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

stack.push(10);
stack.push(20);
stack.push(30);
stack.push(40);
stack.push(50);

stack.print(std::cout);
std::cout << std::endl;
```

### Saída esperada
```bash
[50, 40, 30, 20, 10]
```