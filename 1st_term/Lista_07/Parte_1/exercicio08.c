/******************************************************************************

8 - FaΓ§a uma funΓ§Γ£o recursiva que gere a seguinte sequΓͺncia:
πΉ(π) = {
1 π π π = 1
2 π π π = 2
2 β πΉ(π β 1) + 3 β πΉ(π β 2) π π π = Γ© Γ­ππποΏ½

*******************************************************************************/
#include <stdio.h>

int Calculos(int n)
{
    if(n == 1)
    {
        return 1;
    }
    
    else if(n == 2)
    {
        return 2;
    }
    
    else if(n % 2 != 0)
    {
        return 2* (Calculos(n - 1)) + 3 * (Calculos(n - 2));
    }
}

int main()
{ 
    int n, resultado;

    printf("Insira um valor para 'N':\n");
    scanf(" %d", &n);
    
    resultado = Calculos(n);
    
    printf("F(%d) = %d", n, resultado);

   
}
