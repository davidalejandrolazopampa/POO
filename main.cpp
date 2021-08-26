#include <bits/stdc++.h>

#define F first;
#define S second;
#define PB push_back;
#define MP make_pair;
#define FOR(i,a,b) for(long long i=(a);i <= b;i++)
#define ROF(i,a,b) for(long long i=(a);i>=b;i--)
#define sz(x) (int)(x).size();

using namespace std;
//Todo typedef
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ull> vull;
typedef vector<char> vc;
typedef vector<bool> vb;
//Todo depende del cambio de N
const int N = 2e+5+10;
int arr[N] ;
/*********************************************/
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
int main()
{
    //Inicializar el Objeto
    Persona p1 = Persona(20, "David");
    Persona p2(19,"Alejandro");//Desde el constructor.
    Persona p3(28,"Victor");
    p1.leer();
    p2.correr();
    p3.leer();
    p3.correr();



    return 0;
}
