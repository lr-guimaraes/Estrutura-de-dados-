include <stdio.h>

typedef struct {
    char *st = [1000]
<<<<<<< HEAD
} Stack;

char push();
char pop();
empty();
full();
int lenght();
int capacity();

int main(){
=======


}Stack;

push();
pop();
empty();
full();
lenght();
capacity();

int main{
>>>>>>> 45608ec4820f5fb8ef85fb4d6a5919b3fdd00fed
    
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
<<<<<<< HEAD
def char push(){ //colocar
=======
def push (){ //colocar
>>>>>>> 45608ec4820f5fb8ef85fb4d6a5919b3fdd00fed
    for (i = 0; i<1000; i++){
        Stack.st[i] = i;        
    }
}
<<<<<<< HEAD
def char pop(){ //ler
    char *p;
=======
def pop(){ //ler
    char *p
>>>>>>> 45608ec4820f5fb8ef85fb4d6a5919b3fdd00fed
    for (i = 0; i < 1000; i++){
        p = &Stack.st[i];
        print(p);
    }
    
}
<<<<<<< HEAD
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
=======
def empty(){ 
    if Stack.st == null{
        printf("A lista esta vazia");
    }else{
        printf("A lista nao esta vazia");
    }

}
def full(){
    if Stack.st == 999{
        printf("A lista esta cheia");
    }else{
        printf("A lista esta cheia");
>>>>>>> 45608ec4820f5fb8ef85fb4d6a5919b3fdd00fed
    }

}
def int lenght(){
    printf(sizeof(Stack.st);

}
<<<<<<< HEAD
def int capacity(){
    printf("Poderam ser armazenados mais: ", 1000 - sizeof(Stack.st), " itens");

}
=======
def capacity(){
    printf("Poderam ser armazenados mais: ", 1000 - sizeof(Stack.st), " itens");

}
>>>>>>> 45608ec4820f5fb8ef85fb4d6a5919b3fdd00fed
