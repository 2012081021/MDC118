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