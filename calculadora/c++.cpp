#include <iostream>
#include <string.h>
#include <time.h>
#define LEN 10

class Stack {
    public:
        int st[LEN];
        void push_s(int); //to Stack
        void pop_s();
        void TimeSum_s();
        
};

class First_InOut {
    public:
        int io[LEN];
        void push_f(int); //to First_InOut
        void pop_f();
        void TimeSum_f();
        
};

void empty();
void full();
void lenght();
void capacity();


int main(){
    Stack stack;
    First_InOut f_io;
    for(int i = 0; i <LEN; i++){
        stack.push_s(i);
        f_io.push_f(i);

    }
    stack.TimeSum_s();
    f_io.TimeSum_f();
    
    return 0;
}

void Stack::push_s(int value){ 

    int i = LEN - sizeof(Stack::st);
    Stack::st[i] = value;
    std::cout <<"Stack in fuction push: zn";
    for(int i = 0; i < LEN; i++){
        std::cout <<"%d, \n", Stack::st[i];
    }
};
void First_InOut::push_f(int value){ 
    
    int i = sizeof(First_InOut::io);

    First_InOut::io[i] = value;
    for(int i = 0; i <LEN; i++){
    }
};

//void pop(){ }

void empty(){ 

    int resp;

    std::cout <<"check \n 1 - stack \n 2 - row\n";
    std::cin >> resp;
    if (resp == 1){
        if (sizeof(Stack::st) == 0){
            std:: cout<<"The stack is empty";
        }else{
           std:: cout<<"The stack is not empty";
        }
    }else if (resp == 2){
        if (sizeof(First_InOut::io) == 0){
            std:: cout<<"The row is empty";
        }else{
           std:: cout<<"The row is not empty";
        }
    }else{
       std:: cout<<"ERRO! option invalid";
    }
}

void full(){
    int resp;

   std:: cout<<"check 1 - stack \n 2 - row\n";
   std:: cin >>resp;
    if (resp == 1){
        if (sizeof(Stack::st) == LEN){
            std:: cout<<"The stack is full";
        }else{
           std:: cout<<"The stack is not full";
        }
    }else if (resp == 2){
        if (sizeof(First_InOut::io) == LEN){
            std:: cout<<"The row is full";
        }else{
           std:: cout<<"The row is not full";
        }
    }else{
       std:: cout<<"ERRO! option invalid";
    }

}

void lenght(){

    int resp;

   std:: cout<<"check \n 1- stack \n 2 - row\n";
   std:: cin >>resp;
    if (resp == 1){
       std:: cout<<sizeof(Stack::st);
    }else if (resp == 2){
       std:: cout<<sizeof(First_InOut::io);
    }else{
       std:: cout<<"ERRO! option invalid";
    }

}

void capacity(){
    int resp;

   std::cout<<"check 1 - stack \n 2 - row\n";
   std::cin >>resp;
    if (resp == 1){
       std:: cout<<"%d", LEN- sizeof(Stack::st);
    }else if (resp == 2){
       std:: cout<<"%d", LEN - sizeof(First_InOut::io);
    }else{
       std:: cout<<"ERRO! option invalid";

    }
}

void Stack::TimeSum_s(){
  
    clock_t start, end;
    double Tstack;
    int sum = 0;
    
    start = clock();

   std:: cout<<"Stack\n";
    for (int i = 0; i  <LEN; i++){
        sum += Stack::st[i];
     std:: cout<<"%d",Stack::st[i];
    }
   std:: cout<<"\n";
    end = clock();
    Tstack = (double)( end - start);
    
    std:: cout<<"====Stack====\n";
    std:: cout<<"Sum: %d\n", sum;
    std:: cout<<"test: %d", Stack::st;
    std:: cout<<"%f secound \n", Tstack;


}
void First_InOut::TimeSum_f(){
    
    clock_t start, end;
    double Trow;
    int sum = 0;

    start = clock();
    for (int i = 0; i <LEN; i++){
        sum += First_InOut::io[i];
    }
    end = clock();
    Trow = (double)(end - start);

  
   std:: cout<<"====Row====\n";
   std:: cout<<"Sum: %d", sum;
   std:: cout<<"%f secound", Trow;
}