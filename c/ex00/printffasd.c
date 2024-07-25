#include <unistd.h>
#include <stdio.h>

int Posicion(int num, int pos) {
    int digito;
    int i = 1;
    int num_digits = 0;
    int temp = num;

    while (temp > 0) {
        temp /= 10;
        num_digits++;
    }

    if (pos > num_digits) {
        return -1; 
    }

    while (i < pos) {
        num /= 10;
        i++;
    }
    digito = num % 10;
    return digito;
}

void funcion(int n){
    int length = 0;
    int temp = n; 
    while (temp > 0) {
        temp /= 10;
        length++;
    }

    while (length > 0) {
        char numerito;
        numerito = Posicion(n, length) + '0';
        write(1, &numerito, 1);
        length--;
    }
}

int main(void){
    funcion(1234);
    return 0;
}