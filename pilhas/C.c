#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LEN 10

typedef struct {
    int st[LEN];
} Stack;

typedef struct {
    int io[LEN];
 
} First_InOut;

void push_s(); //to Stack
First_InOut push_f(); //to First_InOut
//void pop();
void empty();
void full();
void lenght();
void capacity();
void TimeSum();

int main(){
 
    for(int i = 0; i <LEN; i++){
       push_s(i);
       push_f(i);
      

    }
     TimeSum();
    
        return 0;
}

void push_s(int insert){ 
    Stack stack;
    int i = LEN - sizeof(stack.st);
    stack.st[i] = insert;
    printf("Stack in fuction push: zn");
    for(int i = 0; i < LEN; i++){
        printf("%d, \n", stack.st[i]);
    }
    return stack;
}
First_InOut push_f(int append){ 
    First_InOut first_InOut;
    int i = sizeof(first_InOut.io);

    first_InOut.io[i] = append;
    for(int i = 0; i <LEN; i++){

    }
    return first_InOut;
}

//void pop(){ }

void empty(){ 
    Stack stack;
    First_InOut first_InOut;
    int resp;

    printf("check 1 - stack \n 2 - row\n");
    scanf(resp);
    if (resp == 1){
        if (sizeof(stack.st) == 0){
             printf("The stack is empty");
        }else{
            printf("The stack is not empty");
        }
    }else if (resp == 2){
        if (sizeof(first_InOut.io) == 0){
             printf("The row is empty");
        }else{
            printf("The row is not empty");
        }
    }else{
        printf("ERRO! option invalid");
    }
}

void full(){
    Stack stack;
    First_InOut first_InOut;
    int resp;

    printf("check 1 - stack \n 2 - row\n");
    scanf(resp);
    if (resp == 1){
        if (sizeof(stack.st) == LEN){
             printf("The stack is full");
        }else{
            printf("The stack is not full");
        }
    }else if (resp == 2){
        if (sizeof(first_InOut.io) == LEN){
             printf("The row is full");
        }else{
            printf("The row is not full");
        }
    }else{
        printf("ERRO! option invalid");
    }

}

void lenght(){
    Stack stack;
    First_InOut first_InOut;
    int resp;

    printf("check \n 1- stack \n 2 - row\n");
    scanf(resp);
    if (resp == 1){
        printf(sizeof(stack.st));
    }else if (resp == 2){
        printf(sizeof(first_InOut.io));
    }else{
        printf("ERRO! option invalid");
    }

}

void capacity(){
    Stack stack;
    First_InOut first_InOut;
    int resp;

    printf("check 1 - stack \n 2 - row\n");
    gets(resp);
    if (resp == 1){
        printf("%d", LEN- sizeof(stack.st));
    }else if (resp == 2){
        printf("%d", LEN - sizeof(first_InOut.io));
    }else{
        printf("ERRO! option invalid");

    }
}

void TimeSum(){
    Stack stack;
    First_InOut first_InOut;
    clock_t start1, end1, start2, end2;
    double Tstack, Trow;
    int s = 0, r;
    
    start1 = clock();
    printf("Stack\n");
    for (int i = 0; i <LEN; i++){
        s = s + stack.st[i];
      printf("%d",stack.st[i]);
    }
    printf("\n");
    end1 = clock();
    Tstack = (double)( end1 - start1);

    start2 = clock();
    for (int i = 0; i <LEN; i++){
        r += first_InOut.io[i];
    }
    end2 = clock();
    Trow = (double)(end2 - start2);

    printf("====Stack====\n");
    printf("Sum: %d\n", s);
    printf("test: %d", stack.st);
    printf("%f secound \n", Tstack);

    printf("====Row====\n");
    printf("Sum: %d", r);
    printf("%f secound", Trow);
}