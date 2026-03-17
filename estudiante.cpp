// Alejandro Sandoval
// 00625910
// Ing. Tecnologias de la inforamcion

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){

    string idEst, nombreEst, apellidoEst;
    string idEstTop, nombreEstTop, apellidoEstTop;
    string codigoMat;

    char opc, seguir;

    double nota1, nota2, nota3, notaFinal;
    double sumaNotas, promedioEst;
    double sumaPromedios, promedioGrupo, promedioMayor;

    int materias, estudiantes;

    estudiantes = 0;
    sumaPromedios = 0;
    promedioMayor = 0;
    seguir = 'S';

    while(seguir == 'S'){

        system("cls");

        cout << "Identificacion del estudiante: ";
        cin >> idEst;

        cout << "Apellidos del estudiante: ";
        cin >> apellidoEst;

        cout << "Nombres del estudiante: ";
        cin >> nombreEst;

        materias = 0;
        sumaNotas = 0;

        opc = 'S';

        while(opc == 'S'){

            cout << "Codigo de la materia: ";
            cin >> codigoMat;

            cout << "Nota 1 (30%): ";
            cin >> nota1;

            cout << "Nota 2 (30%): ";
            cin >> nota2;

            cout << "Nota 3 (40%): ";
            cin >> nota3;

            notaFinal = (nota1*0.3) + (nota2*0.3) + (nota3*0.4);

            materias++;
            sumaNotas += notaFinal;

            cout << "Nota definitiva: " << round(notaFinal*100)/100 << endl;

            cout << "Ingresar otra materia [S/N]? ";
            cin >> opc;
        }

        promedioEst = sumaNotas / materias;

        sumaPromedios += promedioEst;
        estudiantes++;

        if(promedioEst > promedioMayor){
            idEstTop = idEst;
            apellidoEstTop = apellidoEst;
            nombreEstTop = nombreEst;
            promedioMayor = promedioEst;
        }

        cout << endl;
        cout << "Promedio del estudiante: " << round(promedioEst*100)/100 << endl;

        cout << "Ingresar otro estudiante [S/N]? ";
        cin >> seguir;
    }

    promedioGrupo = sumaPromedios / estudiantes;

    cout << endl;
    cout << "Numero de estudiantes: " << estudiantes << endl;
    cout << "Promedio del grupo: " << round(promedioGrupo*100)/100 << endl;

    cout << endl;
    cout << "Estudiante con mejor promedio" << endl;
    cout << idEstTop << " " << apellidoEstTop << " " << nombreEstTop << " "
         << round(promedioMayor*100)/100 << endl;

    return 0;
}
