//Programa para declarar la clase vector

#include <iostream>
using namespace std;



class vector
{
    private:
    double x;
    double y;
    double z;


    public:
    //Voy a definir 3 tipos de Constructores
    //Uno por Defecto, por pase de Argumentos y otro por copa
    
    //Constructores
    //Por Defector
    vector();

    //Por Pase de Argumentos
    vector(double , double , double);
    
    //Por Copia
    vector(const vector &);

    
    //Destructor
   // ~vector();


    //Voy a definir 3 metodos para acceder a cada
    //componente de los vectores
    double get_x() const;
    double get_y() const;
    double get_z() const;



    //Voy la definición de la Sobrecarga Interna de Operadores

    //Operadores Operacionales
    //Operador Suma
    friend vector const operator+(vector const &, vector const & );

    //Operador Resta
    friend vector const operator-(vector const &, vector const & );

    //Operador Multiplicacion por una escalar
    friend vector const operator*(vector const & , double );

    //Operador Division por una escalar
    friend vector const operator/(vector const & , double );

    //Operador Producto Escalar
    friend double const operator*(vector const &, vector const &);

    //Operador Producto Vectorial
    friend vector operator*(vector &, vector &);

    

    //Operador de la Igualdad
    vector const &operator=(vector const &);

    
    //Operadores No Operacionales
    //Operador Ingreso del Vector
    friend std::istream &operator>>(std::istream &, vector &);

    //Operador Egreso del Vector
    friend std::ostream &operator<<(std::ostream &, const vector &);


    //----
    //Declaro los métodos para calcular la Norma y el Versor
    double const norma();
    vector const versor();



};