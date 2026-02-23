#include "Persona.cpp"
#include <iostream>
#include <string>
using namespace std;

class Estudiante : public Persona {
    private:
        string carnet;

    public:
        Estudiante() {}
        Estudiante(string cui, string nombres, string apellidos, string direccion, int telefono, string fecha_nacimiento, bool genero,
                   string carnet)
            : Persona(cui, nombres, apellidos, direccion, telefono, fecha_nacimiento, genero) {
            this->carnet = carnet;
        }

        void setCarnet(string carnet) { this->carnet = carnet; }

        string getCarnet() { return carnet; }

        void leer() {
            Persona::leer();
            cout << "Carnet: " << carnet << endl;
        }
};
