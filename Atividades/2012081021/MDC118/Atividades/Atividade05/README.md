# Objetivo

1. Escrever um programa em C que leia 10 valores e imprima o maior e o menor valores lidos.

int main()
{
  int num, maior = 0, menor = 0, y=0;
 
    printf("Digite um numero:");
    scanf("%d",&num);
   
  menor = num;
  maior = num;
 
  for( y = 1; y < 10; y++ ){
   
    printf("Digite um numero:");
    scanf("%d",&num);
 
    if(num > maior) maior = num;
    if(num < menor) menor = num;
   
  }

  printf ("%d %d\n",menor, maior);
 
  return 0;
 }


3. Escrever um programa em C que leia até 80 caracteres e imprima na ordem invertida.

main()
{
    int a,n;
    printf("exibir ate 80 caracteres ");
    scanf("%i",&n);
    printf("Ordem normal:\n");
    for(a=1;a<=80;a++) printf("%d ",a);
    printf("\n\nOrdem inversa:\n");
    for(a=n;a>80;a--) printf("%d ",a);
    printf("\n\n");
system("pause");
}



