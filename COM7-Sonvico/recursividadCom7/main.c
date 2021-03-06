#include <stdio.h>
#include <stdlib.h>

int factorial (int x)
{

    int rta;

    /// 1! = 1
    /// 0! = 1
    if(x==0)
    {
        rta=1;
    }
    else
    {
        rta=x*factorial(x-1);
    }
    return rta;

}

/// 0, 1, 1, 2, 3, 5, 8, 13, 21...
/// int a[100]={0,1};
/// i=2
/// a[i]=a[i-1]+a[i-2];


///


long fibonacciRecursivo(int n)
{
    /// 0
    /// 1

    /// n = n-1 + n-2

}

/// mostrar arreglo recursivo
/// las dos versiones

void mostrarArregloRecursivoUno(int A[], int validos, int i)
{
    /// condicion de corte explicita
    /// los usr de esta funcion deben saber que si el arreglo
    /// esta vacio, la fn mostrara basura

    if(i==validos-1)
    {
        printf("%d ", A[i]);
    }
    else
    {
        printf("%d ", A[i]);
        mostrarArregloRecursivoUno(A, validos, i+1);
    }

}


void mostrarArregloRecursivoDos(int A[], int validos, int i)
{
    /// condicion de corte implicita

    if(i<validos)
    {
        printf("%d ", A[i]);
        mostrarArregloRecursivoDos(A, validos, i+1);
    }
    /// si tengo un arreglo vacio o llegue al final del mismo
    /// no se muestra nada
}

/// mostra arreglo recursivo invertido

void mostrarArregloRecursivoInvertido(int A[], int validos, int i)
{
    /// condicion de corte implicita

    if(i<validos)
    {
       /// el pensamiento es, primero se muestra todo el arreglo invertido
       /// y luego me muestro yo
        mostrarArregloRecursivoInvertido(A, validos, i+1);

        printf("%d ", A[i]);
    }
    /// si tengo un arreglo vacio o llegue al final del mismo
    /// no se muestra nada
}


/// suma recursiva del arreglo

int sumarecursiva(int A[], int validos, int i)
{
    int suma;

    if(i==validos)
    {
        suma=0;
    }else
    {
        suma=A[i]+sumarecursiva(A, validos, i+1);
    }

    return suma;
}





int menorRecursivo(int A[], int i, int cant)
{
    int m;
    /// cuando llego al final del arreglo, retorno ese valor
    /// para comparar con los de las etapas recursivas anteriores
    if(i==cant-1)
    {
        m=A[cant];
    }
    else
    {
        m=menorRecursivo(A, i+1, cant);

        if(m>A[i])
        {
            m = A[i];
        }
    }
    return m;
}

/// 5 Determinar en forma recursiva si un arreglo es capic�a
int capicua (int A[], int i, int u)
{
    int rta;
    if(i<u)
    {
        if(A[i]==A[u])
        {
            rta=capicua(A,i+1,u-1);
        }
        else
        {
            rta=0;  /// A[i]!=A[u]
        }
    }
    else  /// i>=u
    {
        rta=1;
    }
    return rta;
}

int otrocapicua(int A[], int i, int u)
{
    int rta=1;
    if(i<u)
    {
        if(A[i]==A[u])
        {
            rta=otrocapicua(A,i+1,u-1);
        }
        else
        {
            rta=0;
        }
    }
    return rta;
}

int main()
{
    printf("Hello world!\n");

    ///  printf("%d", factorial(5));

    int unArreglo[10]= {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int otroArreglo[10];

    printf("\nContenido del arreglo unArreglo: \n");
    mostrarArregloRecursivoUno(unArreglo, 10, 0);

    printf("\nContenido del arreglo otroArreglo: \n");
    mostrarArregloRecursivoDos(otroArreglo, 0, 0);
    return 0;
}
