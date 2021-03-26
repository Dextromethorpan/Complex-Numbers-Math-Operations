#include <iostream>
#include <cmath>
#include "vector_def.cpp"

using namespace std;

//Función Menu
int menu(void);

//Función Ayuda
void ayuda(void);

//Función Salir
int salir(void);

//Función Ingreso Inválido
void invalido(void);

//Funciones Operacionales
void suma(void);
void resta(void);
void ProductoEscalar(void);
void ProductoVectorial(void);
void norma(void);
void versor(void);
void MultiplicarporEscalar(void);
void DividirporEscalar(void);

//Main
int main()
{
    int eleccion;

    do
    {
        eleccion=menu();
        switch(eleccion)
        {
            case 1:
            suma();
            break;

            case 2:
            resta();
            break;

            case 3:
            ProductoEscalar();
            break;

            case 4:
            ProductoVectorial();
            break;

            case 5:
            norma();
            break;

            case 6:
            versor();
            break;

            case 7:
            MultiplicarporEscalar();
            break;

            case 8:
            DividirporEscalar();
            break;

            case 9:
            ayuda();
            break;

            case 10:
            salir();

            default:
            invalido();
            break;
        }

    system("pause");
    cout<<endl;
   
    }while(eleccion);

    return EXIT_SUCCESS;

}

int menu(void)
{
    int v;

    cout<<"--------MENU---------"
        <<endl
        <<"Operaciones vectoriales"
        <<endl
        <<endl
        <<"Elija una de las siguientes operaciones"
        <<endl
        <<"1-Suma"
        <<endl
        <<"2-Resta"
        <<endl
        <<"3-Producto Escalar"
        <<endl
        <<"4-Producto Vectorial"
        <<endl
        <<"5-Norma"
        <<endl
        <<"6-Versor"
        <<endl
        <<"7-Multiplicación por un Escalar"
        <<endl
        <<"8-Dividir por un Escalar"
        <<endl
        <<"9-Ayuda"
        <<endl
        <<"10-Salir"
        <<endl;


    cin>>v;

    return v;

}


void ayuda(void)
{
    cout<<"Ingrese los vectores con el siguiente formato: (X,Y,Z)"<<endl;
    cout<<"Con x,y,z datos de tipo double"<<endl;
}

int salir(void)
{
    cout<<"Adios"<<endl<<endl;
    return 0;
}

void invalido(void)
{
    cout<<"Cometio un error ingresando los datos"<<endl;
    cout<<"Hagalo de nuevo"<<endl;

}


void suma(void)
{
    vector v1, v2;
    cout<<"Ingrese el primer vector: "<<endl;
    cin>>v1;
    cout<<"Ingrese el segundo vector: "<<endl;
    cin>>v2;
    cout<<"El resultado es: "
        <<v1+v2
        <<endl
        <<endl;

}

void resta(void)
{
    vector v1, v2;
    cout<<"Ingrese el primer vector: "<<endl;
    cin>>v1;
    cout<<"Ingrese el segundo vector: "<<endl;
    cin>>v2;
    cout<<"El resultado es: "
        <<v1-v2
        <<endl
        <<endl;

}

void ProductoEscalar(void)
{
    vector v1, v3;
    cout<<"Ingrese el primer vector: "<<endl;
    cin>>v1;
    const vector v2(v1);
    cout<<"Ingrese el segundo vector: "<<endl;
    cin>>v3;
    const vector v4(v3);
    cout<<"El resultado es: "
        <<v2*v4
        <<endl
        <<endl;

}

void ProductoVectorial(void)
{
    vector v1, v2;
    cout<<"Ingrese el primer vector: "<<endl;
    cin>>v1;
    cout<<"Ingrese el segundo vector: "<<endl;
    cin>>v2;
    cout<<"El resultado es: "
        <<v1*v2
        <<endl
        <<endl;

}


void DividirporEscalar(void)
{
    double a;
    vector v1;
    cout<<"Ingrese el vector: "<<endl;
    cin>>v1;
    cout<<"Ingrese la escalar: "<<endl;
    cin>>a;
    cout<<"El resultado es: "
        <<v1/a
        <<endl
        <<endl;
}

void MultiplicarporEscalar(void)
{
    double a;
    vector v1;
    cout<<"Ingrese el vector: "<<endl;
    cin>>v1;
    cout<<"Ingrese la escalar: "<<endl;
    cin>>a;
    cout<<"El resultado es: "
        <<v1*a
        <<endl
        <<endl;
}

void norma(void)
{
    vector v1;
    cout<<"Ingrese el vector: "<<endl;
    cin>>v1;
    cout<<"El resultado es: "
        <<v1.norma()
        <<endl;
}

void versor(void)
{
    vector v1;
    cout<<"Ingrese el vector: "<<endl;
    cin>>v1;

    if(v1.norma()==1)
    {
        cout<<v1
            <<"ya es un versor"
            <<endl
            <<endl;
    }
    else
    {
        cout<<"El resultado es: "
            <<v1.versor()
            <<endl;

    };
}
