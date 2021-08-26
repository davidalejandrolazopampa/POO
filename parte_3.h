#ifndef POO_PARTE_3_H
#define POO_PARTE_3_H

class Perro
{
private:
    string nombre, raza;
public:
    Perro(string, string);//Constructor
    ~Perro(); //Destructor

    void mostrarDatos();
    void jugar();
};
//Constructor
Perro::Perro(string _nombre, string _raza)
{
    nombre = _nombre;
    raza = _raza;
}
//Destructor
Perro::~Perro(){}

void Perro::mostrarDatos()
{
    cout << "Nombre: " << nombre <<endl;
    cout << "Raza: " << raza <<endl;
}

void Perro::jugar()
{
    cout << "El perro " << nombre << " esta jugando" << endl;
}
void Parte3()
{
    Perro perro1("Fido", "Doberman");
    perro1.mostrarDatos();
    perro1.jugar();

    perro1.~Perro();//se esta destruyendo "No es necesario porque apenas acabe el destructor empieza a borrar todo el objeto"
    cout<<"\n";
}

#endif //POO_PARTE_3_H
