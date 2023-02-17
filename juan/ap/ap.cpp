


// POREYCTO --> JUAN ROMAN CUERO 9/2/23

#include <iostream>
#include <stdlib.h>

// LIBRERIA DE LOS APUNTADORES
#include <malloc.h>

using namespace std;

// FUNCIONES

// OPERACIONES BASICAS
void suma();
void resta();
void mul();
void division();

// TABLA DE UN NUMERO
void tabla_munero();

// LISTA
void lista();

// BARRA DE CARGA ANIMADA
void barra();

// AYUDA
void ayuda();

int op, op1;
int opcion, opcion1;

// ---------------------------------------------------------------------
struct paciente
{
    int documento;
    char nombre[30];
    paciente *siguiente;
};

int op, opc;
paciente *cabeza, *auxiliar, *auxiliar2;

void apuntadores();
void registrar();
void ver_Usuarios();
//--------------------------------------------------------------------

int main()
{

    do
    {

        cout << endl;
        cout << " BIENVENIDO AL MULTI-SISTEMA" << endl;
        cout << " ESCOJA UNA OPCION " << endl;
        cout << " " << endl;
        cout << " 1. OPERACIONES BASICAS " << endl;
        cout << " 2. TABLAS DE MULTIPLICAR DE UN NUMERO " << endl;
        cout << " 3. HACER UNA LISTA " << endl; // BUSCAR APLICARLE LOS ARCHIVOS Y LOS METODOS DE GUARDAR
        cout << " 4. BARRA DE CARGA ANIMADA " << endl;
        cout << " 5. AYUDA " << endl;
        cout << " 6. APUNTADORES " << endl; 
        cout << " 7. SALIR " << endl;
        cout << endl;
        cout << " ---> ";

        cin >> op;
        system("cls");

        switch (op)
        {

        case 1:

            cout << endl;
            cout << " MENU DE OPERACIONES " << endl;
            cout << " 1. SUMA " << endl;
            cout << " 2. RESTA " << endl;
            cout << " 3. MULTIPLICACION " << endl;
            cout << " 4. DIVISION " << endl;
            cout << " --->  ";

            cin >> opcion;
            system("cls");

            switch (opcion)
            {

            case 1:
                suma();

                break;

            case 2:
                resta();

                break;

            case 3:
                mul();

                break;

            case 4:
                division();

                break;

            default:
                cout << " " << endl;
                cout << " LA OPCION NO EXISTE " << endl;

                break;
            }

            break;

        case 2:
            tabla_munero();

            break;

        case 3:
            lista(); // PENDIENTE

            break;

        case 4:
            barra(); // PENDIENTE

            break;

        case 5:
            ayuda();

            break;

        case 6: // apuntadores();

            break;

        case 7:
            cout << " " << endl;
            cout << " " << endl;
            cout << " GRACIAS POR USAR EL  SISTEMA :) " << endl;
            cout << " " << endl;

            exit(0);

            break;

        default:
            cout << " " << endl;
            cout << " LA OPCION NO EXISTE " << endl;
        }

        cout << " " << endl;
        cout << " QUIERE VOLVER A USAR EL SISTEMA ? " << endl;
        cout << " 1. SI ";
        cout << " 2. NO " << endl;
        cout << " --->  ";

        cin >> op1;

    } while (op1 == 1);

    return 0;
}

// FUNCIONES OPERACIONES BASICAS

void suma()
{

    float n1, n2;
    int suma, s;

    do
    {

        cout << " " << endl;
        cout << " DIJITE EL PRIMER NUMERO: " << endl;
        cin >> n1;
        cout << " DIJITE EL SEGUNDO NUMERO:" << endl;
        cin >> n2;

        suma = n1 + n2;

        cout << " ";
        cout << " LA SUMA ES: " << suma;
        cout << " " << endl;

        system("pause");

        cout << " " << endl;
        cout << " VOLVER A SUMAR? " << endl;
        cout << " 1. SI " << endl;
        cout << " 2. NO " << endl;
        cout << " --->  ";

        cin >> s;
        system("cls");

    } while (s == 1);
}

void resta()
{

    float n1, n2;
    int resta, r;

    do
    {

        cout << " " << endl;
        cout << " DIJITE EL PRIMER NUMERO: " << endl;
        cin >> n1;
        cout << " DIJITE EL SEGUNDO NUMERO:" << endl;
        cin >> n2;

        resta = n1 - n2;

        cout << " ";
        cout << " LA RESTA DE LOS DOS NUMEROS ES: " << resta;
        cout << " " << endl;

        system("pause");

        cout << " " << endl;
        cout << " VOLVER A RESTAR? " << endl;
        cout << " 1. SI " << endl;
        cout << " 2. NO " << endl;
        cout << " --->  ";

        cin >> r;
        system("cls");

    } while (r == 2);
}

void mul()
{

    float n1, n2;
    int mul, m;

    do
    {

        cout << " " << endl;
        cout << " DIJITE EL PRIMER NUMERO: " << endl;
        cin >> n1;
        cout << " DIJITE EL SEGUNDO NUMERO:" << endl;
        cin >> n2;

        mul = n1 * n2;

        cout << " ";
        cout << " LA MULTIPLICACION DE LOS DOS NUMEROS ES: " << mul;
        cout << " " << endl;

        system("pause");

        cout << " " << endl;
        cout << " volver a multiplicar? " << endl;
        cout << " 1. SI " << endl;
        cout << " 2. NO " << endl;
        cout << " --->  ";

        cin >> m;
        system("cls");

    } while (m == 1);
}

void division()
{

    float n1, n2;
    int divi, d;

    do
    {

        cout << " " << endl;
        cout << " DIJITE EL PRIMER NUMERO: " << endl;
        cin >> n1;
        cout << " DIJITE EL SEGUNDO NUMERO:" << endl;
        cin >> n2;

        divi = n1 / n2;

        cout << " ";
        cout << " LA DIVISION DE LOS DOS NUMEROS ES: " << divi;
        cout << " " << endl;

        system("pause");

        cout << " " << endl;
        cout << "ELEJIR OTRO NUMERO? " << endl
             << endl;
        cout << " 1. SI " << endl;
        cout << " 2. NO " << endl;
        cout << " --->  ";

        cin >> d;
        system("cls");

    } while (d == 1);
}

// FUNCION DE TABLA DE MULTIPLICAR

void tabla_munero()
{

    int numero, ta;

    cout << " " << endl;
    cout << " SISTEMA DE TABLAS " << endl
         << endl;
    cout << " DIJITE UN NUMERO " << endl;
    cout << " --->  ";

    cin >> numero;

    for (int i = i; i <= 20; i++)
    {

        cout << numero << " * " << i << " = " << numero * i << endl;
    }

    system("pause");
}

// FUNCION DE LISTA

void lista()
{

    cout << endl;
    cout << " DISPONIBLE EN PROXIMAS ACTUALIZACIONES :)" << endl;
    cout << " " << endl;
}

// FUNCION DE BARRA DE CARGA

void barra()
{

    cout << " " << endl;
    cout << " DISPONIBLE EN PROXIMAS ACTUALIZACIONES :) " << endl;
    cout << " " << endl;
}

// FUNCION DE AYUDA

void ayuda()
{

    int opx, a;

    do
    {

        cout << endl;
        cout << " 1. EMOCIONAL " << endl;
        cout << " 2. PERSONAL " << endl;
        cout << " 3. COMO GANAR DINERO FACIL " << endl;
        cout << " --->  ";

        cin >> opx;

        switch (opx)
        {
        case 1:
            cout << " " << endl;
            cout << " No te conozco pero recuerda que por mas mal que te sientas, no dejes que te afecte :) " << endl;

            break;

        case 2:

            cout << " " << endl;
            cout << " Ah pues, busca un psicologo mejor, sorry :) " << endl;

            break;

        case 3:
            cout << "  " << endl;
            cout << " VE A TRABAJAR  EN UN CIBERCAFE " << endl;

            break;

        default:
            cout << " " << endl;
            cout << " LA OPCION NO EXISTE " << endl;
            cout << " " << endl;
            break;
        }

        system("pause");

        cout << " " << endl;
        cout << "ELEJIR OTRA OPCION? " << endl
             << endl;
        cout << " 1. SI " << endl;
        cout << " 2. NO " << endl;
        cout << " --->  ";

        cin >> a;
        system("cls");

    } while (a == 1);
}

void apuntadores ()
{
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
 }

 

void registrar ()
{

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
    }
    else
    {
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

void ver_Usuarios()
{

    for (auxiliar = cabeza; auxiliar != NULL; auxiliar = auxiliar->siguiente)
    {
        cout << endl;
        cout << " EL DOCUMENTO DEL PACIENTE ES: " << auxiliar->documento << endl;
        cout << " EL NOMBRE DEL PACIENTE ES: " << auxiliar->nombre << endl;
        cout << " ----------------------- ";
    }
}
