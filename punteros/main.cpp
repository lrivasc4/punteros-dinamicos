//
//  main.cpp
//  punteros
//
//  Created by Luis Rivas on 21/03/24.
//

#include <iostream>
using namespace std;


int main() {
    int edad=25,*p_edad;
    p_edad = &edad;
    
    cout<<"Variable Edad:"<<edad<<endl;
    cout<<"Pumtero Edad:"<<*p_edad<<endl;
    
    cout<<"------ Cambiar valores -----"<<endl;
    *p_edad = 40;
    
    cout<<"Variable Edad:"<<edad<<endl;
    cout<<"Pumtero Edad:"<<*p_edad<<endl;
    
    cout<<"------ otra variable -----"<<endl;
    int edad2=100;
    p_edad = &edad2;
    edad=400;
    
    cout<<"Variable Edad:"<<edad<<endl;
    cout<<"Pumtero Edad:"<<*p_edad<<endl;
    cout<<"Variable Edad2:"<<edad2<<endl;

return 0;

}
