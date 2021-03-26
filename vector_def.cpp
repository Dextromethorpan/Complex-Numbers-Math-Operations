//Programa para definir la clase vector

#include <iostream>
using namespace std;
#include "vector_dec.h"

//Constructores
//Por Defecto
vector::vector()
:x(0),y(0),z(0){}

//Por Pase de Argumentos
vector::vector(double x1, double x2, double x3)
:x(x1),y(x2),z(x3){}

//Por Copia
vector::vector(const vector &v)
:x(v.x),y(v.y),z(v.z){}

//Defino los metodos get's
double vector::get_x() const
{
    return x;
}

double vector::get_y() const
{
    return y;
}

double vector::get_z() const
{
    return z;
}

//Defino los operadores

//Defino el operador igualdad
vector const & vector::operator=(vector const &v)
{
    x=v.get_x();
    y=v.get_y();
    z=v.get_z();
    return *this;

}

//Defino el operador+
vector const operator+(vector const & a1, vector const & a2)
{
    return vector (a1.get_x()+a2.get_x(), a1.get_y()+a2.get_y(), a1.get_z()+a2.get_z());
}

//Defino el operador-
vector const operator-(vector const & a1, vector const & a2)
{
    return vector (a1.get_x()-a2.get_x(), a1.get_y()-a2.get_y(), a1.get_z()-a2.get_z());
}

//Defino el operador* Multiplicación por Escalar
vector const operator*(vector const & a1, double l)
{
    return vector (a1.get_x()*l, a1.get_y()*l, a1.get_z()*l);
}

//Defino el operador% División por Escalar
vector const operator/(vector const & a1, double l)
{
    return vector (a1.get_x()/l, a1.get_y()/l, a1.get_z()/l);
}

//Defino el operador para el Producto Escalar
double const operator*(vector const &v1, vector const & v2)
{
    double aux=v1.get_x()*v2.get_x()+ v1.get_y()*v2.get_y()+v1.get_z()*v2.get_z();

    return aux;

}

//Defino el operador para el Producto Vectorial
vector operator*(vector &v1, vector &v2)
{
    vector v3(
        (v1.get_y() * v2.get_z()) - (v2.get_y() * v1.get_z()),
		(v1.get_x() * v2.get_z()) - (v2.get_x() * v1.get_z()),
		(v1.get_x() * v2.get_y()) - (v2.get_x() * v1.get_y())
    );

    return v3;
}

//Defino los operadores de Ingreso y Egreso de vectores
//Operador Egreso
ostream & operator <<(ostream &sortie, vector const & z)
{
    sortie<<'('<<z.get_x()<<","<<z.get_y()<<","<<z.get_z()<<")";
    return sortie;
}

//Operador Ingreso
istream & operator >>(istream &in, vector & p)
{
    double x1 = 0;
	double x2 = 0;
	double x3 = 0;
	int ok = 0;
	char ch = 0;

	if (in >> ch
		&& ch == '(') {
		if (in >> x1
			&& in >> ch
			&& ch == ','
			&& in >> x2
			&& in >> ch
			&& ch == ','
			&& in >> x3
			&& in >> ch
			&& ch == ')')
			ok = 1;
	}
	else {
		in.putback(ch);
		if (in >> x1)
			ok = 1;
	}

	if (ok)
		p.x=x1 , p.y=x2, p.z=x3;
	else
		in.clear(ios::badbit);

	cout << endl;
	return in;

}

//Definicion del Metodo Norma
double const vector::norma()
{
    return sqrt(x*x+y*y+z*z);
}

//Definicion del Metodo Versor
vector const vector::versor()
{
    return vector(x/norma(),y/norma(),z/norma());
}
