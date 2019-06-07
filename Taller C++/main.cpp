#include <iostream>

using namespace std;

class villano{
    private:
        int numero_de_vidas;
        string color;
        string forma;
        string nombre;
    public:
        villano();
        void setAtributos(int,string,string,string);
        int getvidas();
        string getcolor();
        void mostrar();
        void mostrarVidas();
        void morir();
};

class arma{
private:
    string nombreArma;
    int poderArma;
    int cantidad_municiones;
public:
    arma();
    void setAsignar(string,int,int);
    string getNom();
    int getPod();
    int getCant();
    void disparar();

};

villano::villano()
{
}

void villano::setAtributos(int _numero_de_vidas, string _color, string _forma, string _nombre)
{
    numero_de_vidas = _numero_de_vidas;
    color = _color;
    forma = _forma;
    nombre = _nombre;
}

int villano::getvidas()
{
    return numero_de_vidas;
}

string villano::getcolor()
{
    return color;
}

void villano::mostrar()
{
    cout<<"Mi nombre es " <<nombre <<", tengo una forma " <<forma <<" y soy de color " <<color <<endl;
}

void villano::mostrarVidas()
{
    cout<<"Tengo " <<numero_de_vidas <<" vidas" <<endl;
}

void villano::morir()
{
    int ps;

    ps = --numero_de_vidas;
    cout<<"El nuevo numero de vida es " << ps <<endl;
    if(ps==0)
    {
        cout<<"El villano "<<nombre<<" esta muerto"<<endl;
    }
}

arma::arma()
{
}
void arma::setAsignar(string _nombreArma,int _poderArma,int _cantidad_municiones)
{
    nombreArma = _nombreArma;
    poderArma = _poderArma;
    cantidad_municiones = _cantidad_municiones;
}

string arma::getNom()
{
    return nombreArma;
}

int arma::getPod()
{
    return poderArma;
}

int arma::getCant()
{
    return cantidad_municiones;
}

void arma::disparar()
{
    int cant;
    cant = --cantidad_municiones;
    cout<<"El villano utilizo el arma " <<nombreArma <<" y quedo con "<<cant<<" municiones"<<endl;
    if(cant==0)
        {
        cout<<"El arma " <<nombreArma <<" se quedo sin municiones"<<endl<<endl;
        }
}

int main()
{
    int numero_de_vidas,n,i,cantid,n1,n2,power;
    string color,forma,nombre,name;
    int op;

        cout<<"Nombre: ";
        cin>>nombre;

        cout<<"Cantidad de vida: ";
        cin>>numero_de_vidas;

        cout<<"Color: ";
        cin>>color;

        cout<<"Forma: ";
        cin>>forma;

        villano vec;
        vec.setAtributos(numero_de_vidas,color,forma,nombre);

    do
    {
    cout<<"/////////////////////////////////////////////////////////////////////////////////////////////";
    cout<<"\n\nQue opcion desea realizar" <<endl;
    cout<<"1.Cambiar de caracteristicas \n"<<"2.Presentacion del villano \n"<<"3.Cantidad de vida del villano\n"<<"4.Disminucion de vida\n"<<"5.Usar el arma\n"<<"6.Salir"<<endl<<endl;
    cin>>op;

    switch(op)
    {
        case 1:
            cout<<"\n----------Caracteristicas----------"<<endl;
            cout<<"Nuevo cantidad de vidas: ";
            cin>>numero_de_vidas;
            cout<<"Nuevo color: ";
            cin>>color;
            vec.setAtributos(numero_de_vidas,color,forma,nombre);
            cout<<endl;
            break;

        case 2:
            cout<<"\n----------Presentacion----------"<<endl;
            vec.mostrar();
            cout<<endl;
            break;

        case 3:
            cout<<"\n----------Cantidad de vida----------"<<endl;
            vec.mostrarVidas();
            cout<<endl;
            break;

        case 4:
            cout<<"\n----------Morir----------"<<endl;
            vec.morir();
            cout<<endl;
            break;

        case 5:
            cout<<"\n----------Arma----------"<<endl;
            arma mandar[15];
            for(int i=1;i<=3;i++)
            {
                cout<<"\nNombre del Arma ["<<i<<"]: ";
                cin>>name;
                cout<<"Ingrese Poder: " ;
                cin>>power;
                cout<<"Ingrese Cantidad: ";
                cin>>cantid;

                mandar[i].setAsignar(name,power,cantid);
            }
            cout<<"\n\nArma a disparar: ";
            cin>>n1;
            cout<<"Otra Arma a disparar: ";
            cin>>n2;

            mandar[n1].disparar();
            mandar[n2].disparar();
            break;
    };

    }while(op!=6);

    return 0;
}
