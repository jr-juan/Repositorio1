

// JUAN ROMAN CUERO ORDOÑEZ |||  PRIMER TALLER DE ESTRUCTURA DE DATOS


#include <iostream>
#include <stdlib.h>
#include <malloc.h>

using namespace std;

// ---------------------------------------------------------------------
struct paciente {
    int documento;
    char nombre[30];
    paciente *siguiente;
}; 

int op, opc;
paciente *cabeza, *auxiliar, *auxiliar2;

void registrar();
void ver_Usuarios();
//--------------------------------------------------------------------


int main(){

   do{ 
    cout << endl;
    cout << " MENU PRINCIPAL " << endl;
    cout << endl;
    cout << " 1. REGISTRAR PACIENTE " << endl;
    cout << " 2. VER LISTA DE PACIENTES " << endl;
    cout << " 3. SALIR " << endl;
    cout << " --->  ";

    cin >> opc;
    system("cls");

    switch (opc)
    {

    case 1:
        registrar();

        break;

    case 2:
        ver_Usuarios();

        break;

    case 3:

        cout << " " << endl;
        cout << " GRACIAS POR USAR EL  SISTEMA :) " << endl;
        cout << " " << endl;

        exit(0);

        break;

    default:
        cout << " " << endl;
        cout << " LA OPCION NO EXISTE " << endl;
        cout << endl;

        break;
    }

    cout << endl;
    cout << " QUIERE VOLVER Al MENU PRINCIPAL ? " << endl<<endl;
    cout << " 1. SI "<<endl;
    cout << " 2. NO " << endl<<endl;
    cout << " DIGITE UN NUMERO "<<endl;
    cout << " --->  ";

    cin >> op;
    system("cls");

   } while (op == 1);

   return 0; 
}




void registrar() {

    if (cabeza == NULL)
    {
    cout << endl;
    cout << " RECOMENDACIONES: " << endl;
    cout << " 1. SOLO SE ACEPTAN NUMEROS ENTEROS, EJEMPLO: (1234567890) Y NO (123.4567.89) " << endl;
    cout << " 2. ESCRIBIR UN SOLO NOMBRE SIN ESPACIOS " << endl;

    cabeza = (struct paciente *)malloc(sizeof(struct paciente));
    cout << endl;
    cout << " INGRESE EL NUMERO DE DCOUMENTO " << endl;
    cout << " --->  ";
    cin >> cabeza->documento;
    cout << endl;
    cout << " INGRESE EL NOMBRE DEL PACIENTE " << endl;
    cout << " --->  ";
    cin >> cabeza->nombre;

    cabeza->siguiente = NULL;
        
    } else {
    cout << endl;
    cout << " RECOMENDACIONES: " << endl;
    cout << " 1. SOLO SE ACEPTAN NUMEROS ENTEROS, EJEMPLO: (1234567890) Y NO (123.4567.890) " << endl;
    cout << " 2. ESCRIBIR UN SOLO NOMBRE SIN ESPACIOS " << endl;

    auxiliar = (struct paciente *)malloc(sizeof(struct paciente));
    cout << endl;
    cout << " INGRESE EL NUMERO DE DCOUMENTO " << endl;
    cout << " --->  ";
    cin >> auxiliar->documento;

    cout << endl;
    cout << " INGRESE EL NOMBRE DEL PACIENTE " << endl;
    cout << " --->  ";
    cin >> auxiliar->nombre;

    auxiliar->siguiente = NULL;
    auxiliar2 = cabeza;

    while (auxiliar2->siguiente != NULL)

    auxiliar2 = auxiliar2->siguiente;
    auxiliar2->siguiente = auxiliar;
    auxiliar2 = auxiliar = NULL;

    free(auxiliar);
    free(auxiliar2);
        
    }
    
}


void ver_Usuarios() {

    for (auxiliar = cabeza; auxiliar != NULL; auxiliar = auxiliar->siguiente)
    {
        cout << endl;
        cout << " EL DOCUMENTO DEL PACIENTE ES: " << auxiliar->documento<<endl;
        cout << " EL NOMBRE DEL PACIENTE ES: " << auxiliar->nombre<<endl; 
        cout << " ----------------------- ";
    }
    
}
