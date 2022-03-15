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