// Datos informativos
/*
// Una función recibe como parámetro un entero que indica las filas de una figura. Adicionalmente, recibe como parámetro un string que indica el relleno de la figura a dibujar. Por ejemplo, si filas es 4 y el relleno es '+', la figura sería:

+

++

+++

++++
*/
#include <iostream>
using namespace std;
void DibujaFigura(int filas, srting relleno)
{
cout<<endl;
for (int k=1; k<=filas; k++) 
{
 for(int j=1; j<=k; j++)
 
{
   
cout<<relleno<<"";
}
cout<<endl;
}
}
main()
{
    DibujaFigura(5, "+");
     DibujaFigura(3, "♦");
    return 0;
}