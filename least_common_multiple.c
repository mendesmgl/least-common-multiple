#include <stdio.h>
int mmc (int n1, int n2){
  int i = n1;
  while (i % n1 != 0  || i % n2 != 0){
      i++;
      }
    
    
    
  return (i);
  }

int main() {
  int resultado,i,n1,n2;
  
    printf("Escreva seu número n1: \n");
    scanf ("%d", &n1);
    
    printf("Escreva seu número n2: \n");
    scanf ("%d", &n2);
    
    if (n1 <= 0 || n2 <= 0){
      printf ("N não pode ser menor ou igual a zero.\n");
      return 0;
      }
    
    resultado = mmc (n1, n2);
    
    printf ("seu mmc de %d e %d é %d \n", n1, n2,resultado);
    return 0;
}
