# Objetivo

1. Escrever um programa em C que liste todos os múltiplos de 3, entre 1 e 100.

int main(void)
{
int i,n;

printf("Informe um numero inteiro");
scanf ("%i",&n);

for (i=0;i<=n;i++)
{
    if(i%3==0)
    {
    printf("\n %i -numero multiplo de 3", i);
    }
    
    else
    {
    printf("\n %i nao e multiplo de 3",i);
    }

}
return 0;
}

2. Escrever um programa em C que liste os 10 primeiros números da série de Fibonacci (o próximo é a soma dos dois anteriores).
void main()
{

 int a, b, auxiliar, i, n;
 
  a = 0;
  b = 1;
 
 printf("Digite um número: ");
scanf("%d", &n);
printf("Série de Fibonacci:\n");
printf("%d\n", b);
 
  
  for(i = 0; i < n; i++)
  {
    auxiliar = a + b;
    a = b;
    b = auxiliar;
 
    printf("%d\n", auxiliar);
  }
}

3. Escrever um programa em C que calcule o fatorial de um número inteiro.
int main()
{
int fat, n;
printf("Insira um valor para o qual deseja calcular seu fatorial: ");
scanf("%d", &n);
 
for(fat = 1; n > 1; n = n - 1)
fat = fat * n;
 
printf("\nFatorial calculado: %d", fat);
return 0;
}

