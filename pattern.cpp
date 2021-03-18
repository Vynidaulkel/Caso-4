#include<iostream>
#include"point.h"

using namespace std;
/*
USAR lineas y escuadras
Escribir resultados a un archivo
Manipular tamannos con porcentajes

area = ancho * altura.
p = 2*b + 2+h.


-- forma --
0-> dibujar vertical
1-> dibujar horizontal
*/
string figuras [2] = {"linea","escuadra"};
string colores [5] = {"Pink","Green","Purple","Yellow","Red"};
int forma = 0;

// El llenado del rectangulo sera siempre de lineas y escuadras
// Se empezara siempre por la coordenada (0,0)
// La anchura de la linea Sera de 3-4
//

void drawPattern(int pAncho, int pAltura){
    unsigned int area = pAncho * pAltura;
    while(true){
        int figuraActual = rand()%2;
        
        if(forma = 0){
            
        }   
        else{

        }                                   
    }
}


int main(){



    return 0;
}