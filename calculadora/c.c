#include <stdio.h>
#include <string.h>

void operation(char*, float *, float *);

int main(){
    float inp, x;
    char op[1], resp[1];


    setbuf(stdin, NULL);
    printf("Value: "); 
    scanf("%f", &x);
 
  
 do{
    printf("\n");
    printf("Value: "); 
    scanf("%f",&inp);
    setbuf(stdin, NULL);
    printf("Operation: ");
    fgets(op,2, stdin);
    operation(op, &x, &inp);
    setbuf(stdin, NULL);
    printf("\n Continue {Y, N}: ");
    fgets(resp,2, stdin);
    
    }while(strcmp(toupper(resp), "N") == 0);

    return 0;
}   

void operation(char* op, float *x, float *inp){
    float result;

    if(strcmp(op, "+") == 0){
        result = *x + *inp;
        printf("Restult: %f",result);
    }else if (strcmp(op, "-") == 0){
        result = *x - *inp;
        printf("Restult: %f",result);
    }else if(strcmp(op, "*") == 0){
        result = *x + *inp;
        printf("Restult: %f",result);
    }else{
        if (inp != 0){
            result = *x / *inp;
            printf("Restult: %f",result);
        }else{
            printf("ERRO! division to 0");
        }
    }
    *x = result;
}