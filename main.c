#include <stdio.h>

int main()
{

 #define Tam_Max 10
 
  int vet1[Tam_Max];
  int maior;
  
  for(int i=0; i<Tam_Max; i++){
    scanf("%d", &vet1[i]);
  }
  maior = vet1[0];
  for(int i=0; i<Tam_Max; i++)
    if (vet1[i] > maior){
     maior = vet1[i];
  }
  printf("O maior elemento é %d\n", maior);
}
