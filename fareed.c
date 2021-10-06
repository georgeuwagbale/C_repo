//
// Created by User on 06/10/2021.
//

#include <stdio.h>

void calculator(double n1, char op, double n2);

int main(){
    double n1;
    double n2;
    char op;


    printf("Enter a number: ");
    scanf("%1lf", &n1);
    fflush(stdin);
    printf("Enter an operator: ");
    scanf("%c", &op);

    fflush(stdin);

    printf("Enter a number: ");
    scanf("%1lf", &n2);

    calculator(n1, op, n2);

    return 0;
}

void calculator(double n1, char op, double n2){
    double result;

    if (op == '+'){
        result = n1 + n2;
        printf("%f", result);
    }
    else if (op == '-'){
        result = n1 - n2;
        printf("%f", result);
    }
    else if (op == '*'){
        result = n1 * n2;
        printf("%f", result);
    }
    else if (op == '/'){
        result = n1 / n2;
        printf("%f", result);
    }
    //else printf("Invalid");
}