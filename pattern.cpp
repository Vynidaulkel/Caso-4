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
string colores [5] = {"pink","green","purple","yellow","red"}; //Colores utilizados
int forma = 0;

// El llenado del rectangulo sera siempre de lineas y escuadras
// Se empezara siempre por la coordenada (0,0)
// La anchura de la linea Sera de 3-4
//

void drawPattern(int pAncho, int pAltura){

    unsigned int area = pAncho * pAltura;
    int color = 4;
    Point punto = Point (0,0);

    while(true){
        string figuraActual = figuras[rand()%2];
        string colorActual = colores[(++color)%5];

        if(figuraActual == "linea"){
            cout<<"linea-"<<colorActual<<"-";
            switch(forma){
            case 0:
                cout<<"vertical-";
                break;
            case 1: 
                cout<<"Horizontal-";
                break;
            }
        }                                   
    }
}


int main(){



    return 0;
}