// Alejandro sandoval
// 00625910
// Ing. Tecnologias de la informacion

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

string ideEmp, apeEmp, nomEmp;
double salBas, porBon, valBon, bonTot;
int tieSer;
int conEmp1, conEmp2, conEmp3, conEmp4, conEmp5, conEmp6, conEmp7;
char opc;

int main(){

    bonTot = 0;
    conEmp1 = conEmp2 = conEmp3 = conEmp4 = conEmp5 = conEmp6 = conEmp7 = 0;

    do {

        system("cls");

        cout << "Identificacion del empleado: ";
        cin >> ideEmp;

        cout << "Apellidos del empleado: ";
        cin >> apeEmp;

        cout << "Nombres del empleado: ";
        cin >> nomEmp;

        cout << "Salario basico: ";
        cin >> salBas;

        cout << "Anios de servicio: ";
        cin >> tieSer;


        if(tieSer < 5){
            porBon = 5;
            conEmp1++;
        }
        else if(tieSer < 10){
            porBon = 10;
            conEmp2++;
        }
        else if(tieSer < 15){
            porBon = 15;
            conEmp3++;
        }
        else if(tieSer < 20){
            porBon = 20;
            conEmp4++;
        }
        else if(tieSer < 25){
            porBon = 25;
            conEmp5++;
        }
        else if(tieSer < 30){
            porBon = 30;
            conEmp6++;
        }
        else{
            porBon = 35;
            conEmp7++;
        }


        valBon = (salBas * porBon) / 100;
        bonTot += valBon;


        cout << "Identificacion del empleado: " << ideEmp << endl;
        cout << "Nombres del empleado: " << nomEmp << endl;
        cout << "Apellidos del empleado: " << apeEmp << endl;
        cout << "Porcentaje de bonificacion: " << porBon << "%" << endl;
        cout << "Valor bonificacion: " << valBon << endl;


        cout << "Desea ingresar nuevos datos [S/N]? ";
        cin >> opc;

    } while(opc == 'S' || opc == 's');

    return 0;
}
