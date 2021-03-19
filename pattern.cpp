#include<iostream>
#include"point.h"

using namespace std;
string colores [5] = {"pink","green","purple","yellow","red"}; //Colores utilizados

void drawPattern(int pAncho, int pAltura){
    int initX=0; // ->1
    int initY=0; // ->1
    int medX;
    int medY;
    int finalX=pAncho; //->1
    int finalY=pAltura; // ->1
    int color = 4; // ->1
    int ancho;
    string colorActual;
    
    while(initX<=finalX && initY<=finalY){ // 12*22 = 264+5= 269
        colorActual = colores[(++color)%5]; // ->5
        ancho =  rand()%11+2; // ->4
        cout << "cuadrado con puntos opuestos en: ("<< initX << ", " << initY 
        << ") y en : ("<< finalX << ", " << finalY << ") y un ancho de linea de: " << ancho << " y el color es: " << colorActual<<  endl; 
        initX+= ancho; 
        initY+= ancho;
        finalX-= ancho;
        finalY-= ancho;
        //->8
    }
    cout << "----------------------"<< endl;
    int random = (rand()%7)+5; // ->3
    //->1
    for(int i=0; i< random; i++){ //n*26 = 26n+4+269 = 26n+273
        colorActual=  colores[rand()%5]; //-> 4
        ancho =  rand()%11+2; //-> 4
        initX = rand()%pAncho; //-> 3
        initY = rand()%pAltura; //-> 3
        finalX = rand()%pAncho; //-> 3
        finalY = rand()%pAltura; //-> 3
        medX = abs(finalX - initX); //-> 3
        medY = abs(finalY - initY); //-> 3
        cout << "escuadra con puntos en (" << initX << ", " << initY 
        << "), en : ("<< medX << ", " << medY <<"), y en : ("<< finalX << ", " << finalY << ") con un ancho de linea de: " <<
         ancho << " y el color es: " << colorActual<<  endl;
    }
}
int main(){

    /*
    Se mostraran respectivamente las pruebas.
    Por cada una se mostraran todos los cuadrados utilizados para rellenar el area dada en el patron
    Cada uno sera de diferentes colores 
    Luego de rellenarlo se mostraran x cantidad de escuadras creadas aleartoriamente dentro del area
    */
    cout<<"Prueba#1"<<endl<<endl;
    drawPattern(300,300);
    cout<<"----------------------------------"<<endl;
    cout<<"Prueba#2"<<endl<<endl;
    drawPattern(500,500);
    return 0;
}
//f(n) = 26n+273
//O(n)