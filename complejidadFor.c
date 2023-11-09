#include "stdio.h"

int main()
{
    int a,b,c;
    //Caso 0, for con complejidad de 3N+2, de un for normal
    for (int i = 0; i < 100; i++)
    {
        b = 3;
        c = 10;
        a = b + c;
        printf("%i caso 0 \n", a);
    }

    printf("\n -------------------\n");
    //Caso 1, for con complejidad (p+2)N + 2, p son varios pasos dentro del for
    for (int i = 0; i < 100; i++)
    {
        b = 3;
        c = 10;
        a = b + c;
        printf("%i caso 1 \n", a);
    }

    printf("\n -------------------\n");
    //Caso 2, ciclos anidados su complejidad (p+2)N^2 + 4N + 2
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            b = 3;
            c = 10;
            a = b + c;
            printf("%i caso 2 \n", a);
        }
        
    }

    printf("\n -------------------\n");
    //Caso 3, for con complejidad de N+2
    for (int i = 0; i < 100; i+=3)
    {
        b = 3;
        c = 10;
        a = b + c;
        printf("%i caso 3 \n", a);
    }
    
    printf("\n -------------------\n");
    //Caso 5, for con complejidad de 3logN + 2
    for (int i = 1; i < 100; 2*i)//es necesario que inicie en 1 para que pueda entrar al ciclo
    {
        b = 3;
        c = 10;
        a = b + c;
        printf("%i caso 5 \n", a);  
    }
    
    
    return 0;
}
