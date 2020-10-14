#include <stdio.h>

main()
{
    int cont=0;
    int N;

printf("Valor de N: ");
scanf("%d",&N);

while(cont<=N){

    printf("%d ",(N*N)-(2*cont));

    cont=cont+1;

}

return 0;
}
