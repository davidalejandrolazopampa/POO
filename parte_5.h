#ifndef POO_PARTE_5_H
#define POO_PARTE_5_H

//CLASE PADRE
class Personaa
{
private://Atributos
    string nombre;
    int edad;
public://Metodos
    Personaa(string,int);//Constructor
    void mostrarPersonaa();
};

Personaa::Personaa(string _nombre, int _edad)
{
    nombre = _nombre;
    edad = _edad;
}

void Personaa::mostrarPersonaa()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}
///////////////////////////////////////////////
//El publico es a lo que yo voy a poder acceder a la clase Personaa
class Alumno : public Personaa //Se indica que Hereda
{
private: //Atributos
    string codigoAlumno;
    float notaFinal;
public: //Metodos
    //1ro los atributos de la clase PERSONA (string int)
    //2do los atributos de la clase Alumno (strint float)
    Alumno(string, int, string, float);//Constructor
    void mostrarAlumno();
};

Alumno::Alumno(string _nombre, int _edad, string _codigoAlumno, float _notaFinal)  : Personaa(_nombre , _edad)
{
    codigoAlumno = _codigoAlumno;
    notaFinal = _notaFinal;
}

void Alumno::mostrarAlumno()
{
    mostrarPersonaa();
    cout << "Codigo: " <<  codigoAlumno << endl;
    cout << "Nota Final: " << notaFinal << endl;
}
void Parte5()
{
    Alumno alumno1("David", 28 , "201810010" , 20);
    alumno1.mostrarAlumno();

}
#endif //POO_PARTE_5_H
