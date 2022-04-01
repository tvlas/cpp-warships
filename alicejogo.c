#include <stdio.h>
#include <stdlib.h>
 
#define n 100000
 
int minimo (int x, int y) {
    if (x < y) return x;
    else return y;
}
 
int main () {
    int a, b, i, carta;
    int cartasA[n], cartasB[n];
    int trocasA, trocasB;
 
    // Numero de cartas de Alice e de Beatriz
    scanf ("%d%d", &a, &b);
    while (a > 0 && b > 0) {
        trocasA = 0;
        trocasB = 0;
         
        for (i = 0; i < n; i++) {
            cartasA[i] = 0;
            cartasB[i] = 0;
        }
         
        for (i = 0; i < a; i++) {
            scanf ("%d", &carta);
            cartasA[carta-1]++;
        }
         
        for (i = 0; i < b; i++) {
            scanf ("%d", &carta);
            cartasB[carta-1]++;
        }
 
        for (i = 0; i < n; i++) {
            if (cartasA[i] > 0 && cartasB[i] == 0) trocasA++;
            if (cartasB[i] > 0 && cartasA[i] == 0) trocasB++;
        }
         
        printf ("%d\n", minimo (trocasA, trocasB));
 
        // Relendo o numero de cartas de Alice e de Beatriz
        scanf ("%d%d", &a, &b);
    }
 
    return 0;
}