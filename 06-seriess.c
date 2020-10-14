#include <stdio.h>

main()
{
    int cont=0;
    int ls;

printf("Valor de N: ");
scanf("%d",&ls);

while(cont<=ls+ls+1){

    printf("%d ",(3*ls)+(cont*2));

    cont=cont+1;

}

return 0;
}
