#include <stdio.h>

int main()
{
    float Vin;
    float LedAzulb;
    float ResledAzul;
    float VledAzul;
    float IledAzul;
    float VR;

    float Ledverde;
    float Resledverde;
    float Vledverde;
    float Iledverde;
    float VR1;

     float Ledamarillostd;
    float Resledamarillostd;
    float Vledamarillostd;
    float Iledamarillostd;
    float VR2;


    VledAzul= 3;
    IledAzul= 0.02;
        Vledverde= 3;
    Iledverde= 0.02;

    Vledamarillostd= 1.8;
    Iledamarillostd= 0.015;

    printf("ingrese el valor del voltaje de alimentacion\n");
    scanf ("%f",&Vin);
    printf("Voltaje de alimentacion= %f\n",Vin);

    VR= Vin-VledAzul;
    ResledAzul= VR/IledAzul;

    printf("Resistencia para el Led azul brillante= %f\n",ResledAzul);

    printf("Voltaje de alimentacion= %f\n",Vin);
    VR1= Vin-Vledverde;
    Resledverde= VR1/Iledverde;

    printf("Resistencia para el Led verde brillante= %f\n",Resledverde);

    printf("Voltaje de alimentacion= %f\n",Vin);
    VR2= Vin-Vledamarillostd;
    Resledamarillostd= VR2/Iledamarillostd;



    printf("Resistencia para el Led amarillostd= %f\n",Resledamarillostd);


    return 0;
}
