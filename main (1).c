/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
  int vet1[5];
  int maior;
  
  for(int i=0; i<5; i++){
    scanf("%d", &vet1[i]);
  }
  maior = 0;
  for(int i=0; i<5; i++)
    if (vet1[i] > 100){
     maior += 1;
  }
  printf("Quantos números são maiores que 100: %d\n", maior);


}
