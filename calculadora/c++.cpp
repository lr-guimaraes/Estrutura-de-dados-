#include <iostream>
#include <string.h>

class Operation{
   public:
        float value, x;
        char op [1];


}


int main(){
    float inp, x;
    char op[1], res[1];

    setbuf(stdin, NULL);

    printf("Value: ");
    scanf("%f", x);

    do{
        printf("Value: ");
        scanf("%f", inp);
        setbuf(stdin, NULL);
        printf("Operation: ");
        fgets(op, 1, stdin);
        //printf("")
        setbuf(stdin, NULL);
        printf("Continue {Y/N}: ");
        fgets(res, 1, stdin);

    }while (resp.strcmp("N") == 0);

}

