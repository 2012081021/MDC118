# Objetivo

1. Escrever um programa em C que determine se um número é par ou impar.

int main (void)
{
int num;
printf("digite um numero inteiro: ");
scanf("%d",&num);
if(num%2==0)//operador %
{
printf("Par");
}
else
printf("Ímpar");
}
