#include<iostream>
#include"point.h"

using namespace std;
string colores [5] = {"pink","green","purple","yellow","red"}; //Colores utilizados
void drawPattern(int pAncho, int pAltura){
    int initX=0;
    int initY=0;
    int medX;
    int medY;
    int finalX=pAncho; 
    int finalY=pAltura;    
    int color = 4;
    int ancho;
    string colorActual;
    
    while(initX<=finalX && initY<=finalY){
        colorActual = colores[(++color)%5];
        ancho =  rand()%11+2;
        cout << "cuadrado con puntos en: ("<< initX << ", " << initY 
        << ") y en : ("<< finalX << ", " << finalY << ") y un ancho de linea de: " << ancho << " y el color es: " << colorActual<<  endl; 
        initX+= ancho; 
        initY+= ancho;
        finalX-= ancho;
        finalY-= ancho;
    }
    cout << "----------------------"<< endl;
    int n = (rand()%7)+5;
    for(int i=0; i< n; i++){
        colorActual=  colores[rand()%5];
        ancho =  rand()%11+2;
        initX = rand()%pAncho; 
        initY = rand()%pAltura;
        finalX = rand()%pAncho;
        finalY = rand()%pAltura;
        medX = abs(finalX - initX);
        medY = abs(finalY - initY);
        cout << "escuadra con puntos en (" << initX << ", " << initY 
        << "), en : ("<< medX << ", " << medY <<"), y en : ("<< finalX << ", " << finalY << ") y un ancho de linea de: " <<
         ancho << " y el color es: " << colorActual<<  endl;
    }
}

int main(){
    int tamagno;
    cout << "digite el tamano de la pantalla, debe ser cuadrado" << endl;
    cin >> tamagno;
    drawPattern(tamagno, tamagno);
    return 0;
}