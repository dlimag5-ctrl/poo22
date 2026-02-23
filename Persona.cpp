#include <iostream>
#include <string>
using namespace std;

class Persona {
    protected:
        string cui;
        string nombres;
        string apellidos;
        string direccion;
        int telefono;
        string fecha_nacimiento;
        bool genero;

    protected:
        Persona() {}
        Persona(string cui, string nombres, string apellidos, string direccion, int telefono, string fecha_nacimiento, bool genero) {
        }

        void crear() {
            cout << "Persona creada" << endl;
        }

        void leer() {
            cout << "CUI: " << cui << endl;
            cout << "Nombres: " << nombres << endl;
            cout << "Apellidos: " << apellidos << endl;
            cout << "Direccion: " << direccion << endl;
            cout << "Telefono: " << telefono << endl;
            cout << "Fecha nacimiento: " << fecha_nacimiento << endl;
            cout << "Genero: " << genero << endl;
        }

        void actualizar() {
            cout << "Persona actualizada" << endl;
        }

        void borrar() {
            cout << "Persona borrada" << endl;
        }
};

