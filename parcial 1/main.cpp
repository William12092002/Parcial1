#include<iostream>
#include<fstream>
#include<stdlib.h>
#include <stdio.h>

using namespace std;
void leermateria();
ifstream materias("materias.txt",ios::in);


char **semana;
int main(){
    leermateria();
    
     char * semana1[]={"Lunes","Martes", "Miercoles","Jueves","Viernes","Sabado","Domingo"};
    semana=new char*[24];
    for(int i=0; i<24;i++){
        semana[i]= new char[8];                   
    }
    semana[0][0]=1;
    semana[0][1]=*semana1[1];

    for(int i=0; i<24; i++){
        for(int j=0; j<8; j++){
            cout<<(*(*semana+i)+j)<< " ";
        }
        cout<<endl;

    }

    for(int i=0; i<24; i++){
        delete[] semana[i];
    }
    delete[] semana;


    return 0;


   
        
    
  

    return 0;
  
}

void leermateria(){
    int codigo;
    char nombre[30];
    int horasdocentes;
    int horaspersonales;
    int creditos;
    int creditostotales=0;
    int horasptotales=0;
    int cont=0;
    materias>>codigo;
    cout<<"Este semestre, veras las siguentes materias : "<<endl<<endl<<endl;
    while(!materias.eof()){
        materias>>nombre>>horasdocentes>>horaspersonales>>creditos;
        materias>>codigo;
        cout<<"codigo: "<<codigo<<endl<<"materia: "<<nombre<<endl<<"Horas docentes: "<<horasdocentes<<endl<<"Horas personales: "<<horaspersonales<<endl<<"creditos: "<<creditos<<endl<<endl;
        creditostotales+=creditos;
        horasptotales+=horaspersonales;
        cont+=1;
    }
    materias.close();
    cout<<"Tienes "<<creditostotales<<" creditos totales este semestre. Por lo que tendras que estudiar "<<horasptotales<<" horas por tu cuenta."<<endl;

}


 