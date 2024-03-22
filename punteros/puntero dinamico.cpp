//
//  puntero dinamico.cpp
//  punteros
//
//  Created by Luis Rivas on 21/03/24.
//



#include <iostream>
using namespace std;

int main(){

    int fil = 0, col=0,**pm_notas;
    cout<<"Ingrese la cantidad de Estudiantes:";
    cin>>fil;
    cout<<"Ingrese la cantidad de Notas por estudiante:";
    cin>>col;
    
    pm_notas = new int *[fil];
    for(int i=0;i<fil;i++){
        pm_notas[i] = new int[col];
    }
    for (int i=0;i<fil;i ++){
        cout<<"________Estudiante________"<<i<<endl;
        for (int ii=0;ii<col;ii++){
            cout<<"Estudiente "<<i<<", Nota:"<<ii<<":";
            cin>>*(*(pm_notas+ii));
        }
        cout<<"________________"<<endl;
    }
    cout<<"------ Mostrar Notas ------"<<endl;
    
    for (int i=0;i<fil;i ++){
        
        for (int ii=0;ii<col;ii++){
            
            cout<<*(*(pm_notas+i)+ii)<<endl;
        }
        cout<<"____________________"<<endl;
    }
        
    for (int i=0;i<fil;i ++){
        delete [] pm_notas[i];
    }
    delete [] pm_notas;
    
/*
    int total = 0,*p_notas;
    p_notas = new int[total];
//    int notas[total];
    char res;
//    int *p_notas = notas;
    
    do{
        cout<<"Ingrese nota "<<total<<":";
        cin>>p_notas[total];
        total++;
        cout<<"Desea ingresar otro valor(s/n):";
        cin>>res;
    }while(res=='s' || res=='S');
    
    cout<<"------- Mostrar notas---------"<<endl;
    for(int i=0;i<total;i++){
        cout<<"Nota ("<<i<<"):"<<*p_notas<<endl;
        p_notas++;
    }
    
    delete[] p_notas;
//anterior
    int edad,*p_edad;
    p_edad =&edad;
    cout<<"Ingrese edad:";
    cin>>edad;
    cout<<*p_edad<<endl;
    
    if (*p_edad>18){
        cout<<"Mayor de edad:"<<endl;
    }else{
        cout<<"Menor de edad"<<endl;
    }
//termina anterior
*/
    return 0;
    
}
