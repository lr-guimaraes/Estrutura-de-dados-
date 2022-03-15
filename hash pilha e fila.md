# Hash
.....

# Estrutura de Dados 

Artefatos de armazenamento de dados complexos e compostos.
- Primitivos: Int, Float, doble...
- Compostos: Array, string
- Complexos: structs, classes

Estruturas de dados requerem métodos para, no minimo, armazemanto e leitura. Quanto mais complexa a estrutura, mais comclexos estes métodos

# Lista 
Estrutura de dados ordenadas, homogeneas, ou não, que obdecem uma determinada regra de formação

Listas especiais: 
 - Pilha 
 - Fila
 - Lista encadeada

 Os dados ordenados em uma lista são chamados de itens

# Python
~~~python
class Stack:
    def __init__(self):
        self.__stack = [] 
        self.cont = 0
        self.capacity = 1000
    
    def push(self, str):
        self.cont += 1
        self.__stack.append(str)
    def pop(self):
        for i in range(len(self.__stack)):     
            print(self.__stack[i])

    def empty(self):
        if self.__stack is None:
            print("A pilha está vazia")
        else:
            print ("A pilha não está vazia")

    def full(self):#arrumar 
        if len(self.__stack) < 1000:
            print("A lista não está cheia")
        else:
            print("A pilha esta cheia")
            
    def lenght(self):
        return len(self.__stack)

    def capacit(self):
        print(self.capacity)


opcao = input("1 - Adicionar item no inicio \n2 - Adicionar item no final \n3 - Verificar se a pilha possui strings \n4 - Verificar se a pilha está cheia \n5 - Tamanho da pilha \n6 - Capacidade da pilha \n Opção:")
pilha = Stack()
if opcao == 1:
    for i in range(1, 1001):
        pilha.push(i)
        print(pilha.lenght())
    pilha.pop()
elif opcao == 2:
    pilha.pop()
    print(pilha.lenght())
elif opcao == 3:
    pilha.empty()
elif opcao == 4:
    pilha.full()
elif opcao == 5:
    pilha.lenght()
elif opcao == 6:
    pilha.capacit()
~~~
~~~c++
#include <stdio.h>

class Stack{
    private:
    
        char stack = [];
        void Push();
        char Pop();
        bool Empty();
        bool Full();
        int Lenght();
        int Capacity();
}   
void Push:: Push(){
    for ;
}
char Pop:: Pop(){
    for (i = 0; i == lenght(stack);i ++ ){
        printf(stack[i]);
    }
}
bool Empty:: Empty(){
    if stack == NULL{
        return true
    }else{
        return false
    }
}
bool Full:: Full(){
    if stack == 1000{
        return true
    }else{
        return false
    }
}
int Lenght:: Lenght(){
    return sizeof(stack);
}
int capacity:: capacity(){
    return 1000;
}
int main(){
    
    int option;
    printf("1 - Adicionar item no inicio \n2 - Ler itens \n3 - Verificar se a pilha possui strings \n4 - Verificar se a pilha está cheia \n5 - Tamanho da pilha \n6 - Capacidade da pilha");
    print("Option: ");
    test = Stack();
    scanf("%d", &option);
    switch(option){
        case 1:
            for (i = 0; i< 1000; i++){
                test.push(i);
            }
        case 2:
            pop();
        case 3: 
            empty();
        case 4: 
            full();
        case 5:   
            lenght();
        case 6: 
            capacity();

        default:
            printf("this option does not exist");       
        
        }
        return 0;
}
~~~
~~~C
#include <stdio.h>

typedef struct {
    char *st = [1000]
} Stack;

char push();
char pop();
empty();
full();
int lenght();
int capacity();

int main(){
    
    int option;
    printf("1 - Adicionar item no inicio \n2 - Adicionar item no final \n3 - Verificar se a pilha possui strings \n4 - Verificar se a pilha está cheia \n5 - Tamanho da pilha \n6 - Capacidade da pilha");
    print("Option: ");
    scanf("%d", &option);
    switch(option){
        case 1:
            push();
        case 2:
            pop();
        case 3: 
            empty();
        case 4: 
            full();
        case 5:   
            lenght();
        case 6: 
            capacity();

        default:
            printf("this option does not exist");       
        
        }
        return 0;
}
def char push(){ //colocar
    for (i = 0; i<1000; i++){
        Stack.st[i] = i;        
    }
}
def char pop(){ //ler
    char *p;
    for (i = 0; i < 1000; i++){
        p = &Stack.st[i];
        print(p);
    }
    
}
bool empty(){ 
    if Stack.st == null{
        return True
    }else{
        return false
    }

}
bool full(){
    if Stack.st == 999{
        return True;
    }else{
        return false;
    }

}
def int lenght(){
    printf(sizeof(Stack.st);

}
def int capacity(){
    printf("Poderam ser armazenados mais: ", 1000 - sizeof(Stack.st), " itens");

}
~~~

**Exercicio em aula: Criar uma pilha em C, C++, Python e Java. Crie um programa capae de armazenar, ler e apresentear, até 1000 strings em uma pylha dinâmica**   
 # Pilha
 Estrutura de daods que obdece a **regra First in, Last out**
<img src=””>

# Fila att (abstreack data type)

- fila seguiem uma ordem de armazenamento definida como fila ou **Fist in fist out**
- As filas, em ingles quere, replicam algoritimicament as filas que escistem no mundo real.
-  Como todas as estruturas de dados precisameos de uma interface de acesso 

## Interface mais simplas

- [x] enqueve: coloca o item C no fim da fila
- [ ]  dequeve: retira o elemento que está no começo da dila
- [ ] peek: lê o elemento que está no começo da filas

As filas podem ser simpes, inversiveis ou circulares

## Métodos 

 - push-> coloca um dado no topo da pilha
 - pop -> Lê o dado que esta no topo da Pilha
 - is_Empty -> indica se a pilha está vazia topo
 - is_full -> indica se a pilha está cheia 
 - Lenght -> Destemina o tamanho da Pilha
 - Capacity -> indica quntos itens ainda podem ser armazanados

 ### Circulares
Permite uma fila maior em um espaço de armazenmento reduzido


- ***inicio no 0 e final no 5*** 
<table>
    <thead>
        <th>0</th> 
        <th>1</th> 
        <th>2</th> 
        <th>3</th> 
        <th>4</th> 
        <th>5</th> 
        <th>6</th> 
        <th>7</th> 
        <th>8</th> 
        <th>9</th> 
    </thead>
    <tbody>
        <tr>
            <td>x</td>
            <td>x</td>
            <td>x</td>
            <td>x</td>
            <td>x</td>
            <td>x</td>
            <td>'</td>
            <td>'</td>
            <td>'</td>
            <td>'</td>
        </tr>
    </tbody>
<table>

- ***inicio no 7 e final no 2*** 

<table>
    <thead>
        <th>0</th> 
        <th>1</th> 
        <th>2</th> 
        <th>3</th> 
        <th>4</th> 
        <th>5</th> 
        <th>6</th> 
        <th>7</th> 
        <th>8</th> 
        <th>9</th> 
    </thead>
    <tbody>
        <tr>
            <td>x</td>
            <td>x</td>
            <td>x</td>
            <td>'</td>
            <td>'</td>
            <td>'</td>
            <td>'</td>
            <td>x</td>
            <td>x</td>
            <td>x</td>
        </tr>
    </tbody>
<table>


# Lista encadeada

São uma ADT genérica em uma regra de ordenação definida, mas com uma reia de criação que determina que um item deve conter o endereço do próximo item 

<image src = "image/listas.png">

Geralmente o endereço do próximo item é armazenado em um ponteiro listas encadeadas precisam ser definidas por meio de tipos de dados complexos como structs ou classes. 
Tipicamente estas listas são diretas, circulares ou bidirecionais

## Diretas
- head -> item -> item-> tail -> null

## Curculares
- head -> item -> item-> tail -> head

## Bidimenticonais

head <-> item <-> item <-> tail -> null