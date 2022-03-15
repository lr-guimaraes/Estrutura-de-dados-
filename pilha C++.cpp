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