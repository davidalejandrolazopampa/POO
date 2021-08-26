#ifndef POO_PARTE_4_H
#define POO_PARTE_4_H
class Punto
{
private://Atributos
    int x,y;
public://Metodos
    Punto();
    //SET-dar o establecer.
    void setPunto(int,int);
    //GET mostrar dar la info
    int getPuntoX();
    int getPuntoY();
};

Punto::Punto()
{

}
//Establecemos valores a los atributos.
void Punto::setPunto(int _x, int _y)
{
    x = _x;
    y = _y;
}
//
int Punto::getPuntoX()
{
    return x;
}
int Punto::getPuntoY()
{
    return y;
}
void Parte4()
{
    Punto punto1;
    punto1.setPunto(15,10);
    cout << punto1.getPuntoX() << " " << punto1.getPuntoY() << endl;
}

#endif //POO_PARTE_4_H
