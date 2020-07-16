#include<stdio.h>
#include<conio.h>
int main(void)
{
  float VetorA[5];
  float VetorB[5];
  float VetorC[5];

  // declarando e inicializando o vetor
  
  printf("Digite o primeiro número para armazenamento no primeiro grupo: \n");
  scanf("%f", &VetorA[0]);
  printf("Digite o segundo número para armazenamento no primeiro grupo: \n");
  scanf("%f", &VetorA[1]);
  printf("Digite o terceiro número para armazenamento no primeiro grupo: \n");
  scanf("%f", &VetorA[2]);
  printf("Digite o quarto número para armazenamento no primeiro grupo: \n");
  scanf("%f", &VetorA[3]);
  printf("Digite o quinto número para armazenamento no primeiro grupo: \n");
  scanf("%f", &VetorA[4]);
  
  printf("Estaremos passando para o SEGUNDO GRUPO \n");
  
  
  printf("Digite o primeiro número para armazenamento no segundo grupo: \n");
  scanf("%f", &VetorB[0]);
  printf("Digite o segundo número para armazenamento no segundo grupo: \n");
  scanf("%f", &VetorB[1]);
  printf("Digite o terceiro número para armazenamento no segundo grupo: \n");
  scanf("%f", &VetorB[2]);
  printf("Digite o quarto número para armazenamento no segundo grupo: \n");
  scanf("%f", &VetorB[3]);
  printf("Digite o quinto número para armazenamento no segundo grupo: \n");
  scanf("%f", &VetorB[4]);
  
  VetorC[0] = VetorA[0] + VetorB[0];
  VetorC[1] = VetorA[1] + VetorB[1];
  VetorC[2] = VetorA[2] + VetorB[2];
  VetorC[3] = VetorA[3] + VetorB[3];
  VetorC[4] = VetorA[4] + VetorB[4];  
  

  printf("Elementos do vetor C:[%.1f,%.1f,%.1f,%.1f e %.1f]", VetorC[0],VetorC[1],VetorC[2],VetorC[3],VetorC[4]);

  
  getch();
  return 0;
  
}

