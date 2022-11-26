#include <stdio.h>

void oper();

int main() {
    oper();
    return 0;
}

void sum(int a, int b) {
    printf("\nN1+N2 = %d\n ", a + b);
    oper();
}

void dif(int a, int b) {
    printf("\nN1-N2 = %d\n ", a - b);
    oper();
}

void mul(int a, int b) {
    printf("\nN1*N2 = %d\n", a * b);
    oper();
}

void div(int a, int b) {
    printf("\nN1/N2 = %d\n", a * b);
    oper();
}

void mod(int a, int b) {
    printf("N1%N2 = %d\n ", a % b);
    oper();
}


void oper(){
    int n1, n2;
    char op;
    fflush(stdin);
    printf("\nChoose Operator +, -, *, /, x, a");
    printf("\n(a - all operations / x - exit)\n");
    printf("--> ");

    scanf(" %c",&op);
    fflush(stdin);

    if(op=='x'){
        printf("exited!\n thank you for using it");

    }
    else if(op=='+'||op=='-'||op=='/'||op=='*'||op=='a'||op=='%'){
        printf("enter n1\n");
        scanf("%d",&n1);
        printf("enter n2\n");
        scanf("%d",&n2);

        if (op=='+')
            sum(n1,n2);

        else if (op=='-')
            dif(n1,n2);

        else if (op=='*')
            mul(n1,n2);

        else if (op=='/')
            div(n1,n2);

        else if (op=='%'){
            mod(n1,n2);
        }
        else if (op=='a'){
            printf("\nN1+N2 = %d\n ", n1 + n2);
            printf("N1-N2 = %d\n ", n1 - n2);
            printf("N1*N2 = %d\n ", n1 * n2);
            printf("N1/N2 = %d\n ", n1 / n2);
            oper();
        }
        else{
            printf("\nWrong input");
            oper();
        }


    } else{
        printf("\nwrong input try again");
        oper();
    }
}



