// Datos informativos
//Autor: Jandry Zambrano Palacios 
//Fecha:24/06/2024
#include <iostream>
#include<math.h>
using namespace std;
/// @brief calcula los valores de la ecuacion cuadratica
/// @param a coeficiente los valores de la ecuacvion cuadratica
/// @param b primer coeficiente de la ecuación
/// @param c  tercer coeficiente de la ecuación
/// @param x1 referencia para devolver  el primer valor de la ecuacion
/// @param x2 referencia para devolver el  segundo valor de la ecuación
/// @return devuelve 'correcto' si la ecuacion tiene solucion. Devuelve'division por cero' si a'' es cero
string  EcuacionCuadratica (double a, double b, double c , double&  x1, double x2)
{
if (a==0)
return "Error:División por cero";
//cálculo del discriminante
double d = (b*b) - (4*a*c);
if (d < 0)
return "Error. No se puede calcular la raíz de un número negativo";
double x1 = (-b + sqrt(d)) / (2* a);
double x2 = (-b + sqrt (d)) / (2* a);
return "Correcto";

}
main ()
{
double x1, x2;
string res =  EcuacionCuadratica( 1,4,4, x1 ,x2);

if(res == "Correcto" ) 
cout<<endl<<"x1= "<<x1<<",x2 ="<<x2;
else
cout<<endl<<res;

    return 0;
}
