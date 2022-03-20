#include <stdio.h>

void operation(char, float *, float *);

int main(){
    float inp; float x;
    char *op[1];
    char *resp[1];

    setbuf;
    printf("Value: "); 
    scanf("%f", &x);
    do{
        printf("Value: "); 
        scanf("%f",&inp);
        printf("Operation: ");
        gets(op);
        operation(op[0], &x, &inp);

    }while(resp[0] == "Y");

    return 0;
}   

void operation(char op, float *x, float *inp){
    float result;

    if(op == "+"){
        result = *x + *inp;
    }
    elif(op == "-"){
        result = *x - *inp;        
    }elif(op =="*"){
        result = *x * *inp;
    }elif(op == "/"){
        if (*inp != 0){
            result = *x / *inp;
        }else{
            printf("Nao e possvel dividir por 0");
        }
    }
    *x = result;
}