//
// Created by davla on 26/08/2021.
//

#ifndef POO_PARTE_2_H
#define POO_PARTE_2_H

class Fecha
{
private: //Atributos
    int dia;
    int mes;
    int anio;
public: //Metodos
    Fecha(int,int,int); //Constructor_1
    Fecha(long);//Constructor_2
    void mostrarFecha();
};

Fecha::Fecha(int _dia, int _mes, int _anio)
{
    dia = _dia;
    mes = _mes;
    anio = _anio;
}
Fecha::Fecha(long fecha)
{
    //Fecha == 20200828
    anio = int(fecha/10000);              //Extraer el año
    mes = int((fecha-anio*10000)/100);    //Extraer el mes
    dia = int(fecha-anio*10000-mes*100);  //Extraer el dia
}
void Fecha::mostrarFecha()
{
    cout << "La Fecha es: " << dia << "/" << mes << "/" << anio << endl;
}
void Parte2()
{
    Fecha hoy(26,8,2021);
    Fecha ayer(20200825);
    hoy.mostrarFecha();
    ayer.mostrarFecha();
}
#endif //POO_PARTE_2_H
