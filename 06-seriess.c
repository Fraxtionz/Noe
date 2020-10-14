#include <stdio.h>

main()
{
    int cont=0;
    int N;

printf("Valor de N: ");
scanf("%d",&N);

while(cont<=N+N+1){

    printf("%d ",(3*N)+(cont*2));

    cont=cont+1;

}

return 0;
}
