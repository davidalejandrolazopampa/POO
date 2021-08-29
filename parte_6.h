#ifndef POO_PARTE_6_H
#define POO_PARTE_6_H

//Clase Persona : Padre
class Personaaa{
private:
    string nombre;
    int edad;
public:
    Personaaa(string, int);
    //Virtual solo va en la clase padre -> y "VIRTUAL" es lo que indica que usamos polimorfismo
    virtual void mostrar();
};
//Clase Hijo : que Hereda
class Alumnoo : public Personaaa
{
private:
            float notaFinal;
public:
            Alumnoo(string,int,float );
            void mostrar();
};
class Profesor : public Personaaa
{
private:
    string materia;
public:
    Profesor(string, int,string);
    void mostrar();
};
//////////////////////////////7
Personaaa::Personaaa(string _nombre, int _edad)
{
    nombre = _nombre;
    edad = _edad;
}
void Personaaa::mostrar()
{
    cout << "Nombre :" << nombre << endl;
    cout << "Edad :" << edad << endl;
}
//////////////////////////////
Alumnoo::Alumnoo(string _nombre, int _edad, float _notaFinal): Personaaa(_nombre,_edad)
{
    notaFinal = _notaFinal;
}
void Alumnoo::mostrar()
{
    Personaaa::mostrar();
    cout << "Nota final: " << notaFinal << endl;
}

Profesor::Profesor(string _nombre, int _edad, string _materia) : Personaaa(_nombre, _edad)
{
    materia = _materia;
}
void Profesor::mostrar()
{
    Personaaa::mostrar();
    cout << "Materia: " << materia << endl;
}
void Parte6()
{
    //Polimorfismo se trabaja con punteros y referencias
    Personaaa *vector[3];
    vector[0] =  new Alumnoo("David", 28, 20.0);
    vector[1] = new Alumnoo("Maria", 19, 17.5);
    vector[2] = new Profesor("Luis Talavera", 25, "Algoritmos");

    FOR(i,0,2)
    {
        cout << "DATO N-" << i+1 << endl;
        vector[i] -> mostrar();
    }
    /*
    vector[0] -> mostrar();
    vector[1] -> mostrar();
    vector[2] -> mostrar();
     */
}

#endif //POO_PARTE_6_H
