//
// Created by davla on 26/08/2021.
//

#ifndef POO_PARTE_1_H
#define POO_PARTE_1_H

class Persona
{
    //Atributos -> es privado
private:
    int edad;
    string nombre;
    //Metodos -> todos lo vean
public:
    //Metodos constructor -> ayuda a inicializar "Mismo nombre de la clase y mandar los parametros"
    Persona(int, string);//Constructor
    void leer();
    void correr();
};
//Constructor, nos sirve para inicializar los atributos
Persona::Persona(int _edad, string _nombre)
{
    edad = _edad;
    nombre = _nombre;
}
void Persona::leer()
{
    cout<<"Soy " << nombre << " y estoy leyendo un libro" << endl;
}
void Persona::correr()
{
    cout<<"Soy " << nombre << " y estoy corriendo una maraton y tengo " << edad << " años" << endl;
}

void Parte1(){
    //Inicializar el Objeto
    Persona p1 = Persona(20, "David");
    Persona p2(19,"Alejandro");//Desde el constructor.
    Persona p3(28,"Victor");
    p1.leer();
    p2.correr();
    p3.leer();
    p3.correr();
}

#endif //POO_PARTE_1_H
