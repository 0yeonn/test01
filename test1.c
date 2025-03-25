#include <stdio.h>

int fact(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    else{
        return n * fact(n-1);
    }
}

int main(void){
    int a, b;
    printf("Ingresa el número a calcular el factorial: ");
    scanf("%d", &a);
    b = fact(a);
    printf("El factorial de %d es %d\n", a, b);
    return 0;
}
