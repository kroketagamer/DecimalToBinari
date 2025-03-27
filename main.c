/**
 * Autor: Alejandro Garcia
 * Date : 27/03/2025
 * Description: Conversor for decimal to binary 
 */
#include <stdio.h>
#define binario 1000
int main() {
    int num;
    int i;
    int bin[binario];
    printf("Entry number (Only integers): \n");
    scanf("%d", &num);
     for (i = 0; num > 0; i++) {
        bin[i] = num % 2;
        num = num / 2;
    }
    printf("El numero en binario es:\n");
    for (i = i; i >= 0; i--) {
        printf("%d", bin[i]);
    }
    return 0; 
}
