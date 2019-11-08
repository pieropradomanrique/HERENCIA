#include <iostream>
#include <string.h>

using namespace std;

class animal{
protected:
    int edad;
    string nombre;
public:
    animal(int e,string n){
        edad = e;
        nombre = n;
    }

    void set_edad(int e){edad=e;}
    void set_nombre(string n){nombre=n;}

    int get_edad(){return edad;}
    string get_nombre(){return nombre;}
};

class perro : public animal{
protected:
    string raza;
    string tamano;
public:
    perro(int e,string n,string r,string t):animal(e,n){
        raza = r;
        tamano = t;
    }
    void set_raza(string r){raza=r;}
    void set_tamano(string t){tamano=t;}

    string get_raza(){return raza;}
    string get_tamano(){return tamano;}
} ;

class universidad {
protected:
    string nombre;
    string distrito;
public:
    universidad(string n,string d){
        nombre = n;
        distrito = d;
    }
    void set_nombre(string n){nombre=n;}
    void set_distrito(string d){distrito=d;}

    string get_nombre(){return nombre;}
    string get_distrito(){return distrito;}
};

class clase : public universidad{
protected:
    int piso;
    int clas;
public:
    clase(string n,string d,int p,int c ):universidad(n,d){
        piso = p;
        clas = c;
    }
    void set_piso(int p){piso=p;}
    void set_clas(int c){clas=c;}

    int get_piso(){return piso;}
    int get_clas(){return clas;}
} ;

class carne{
protected:
    string nombre;
    int precio;
public:
    carne(string n,int p){
        nombre=n;
        precio=p;
    }
    void set_nombre(string n){nombre=n;}
    void set_precio(int p){precio=p;}

    string get_nombre(){return nombre;}
    int get_precio(){return precio;}
};

class pescado: public carne{
protected:
    string tipo;
public:
    pescado(string n,int p,string t):carne(n,p){
        tipo=t;
    }
    void set_tipo(string n){tipo=n;}

    string get_tipo(){return tipo;}
};



int main()
{


    perro p(8,"FIDO","Dalmata","mediano");
    clase a("SanPablo","CERCADO",2,405);
    pescado b("bonito",20,"pescado");
    cout<<p.get_edad()<<" years"<<endl;
    cout<<p.get_nombre()<<endl;
    cout<<p.get_raza()<<endl;
    cout<<p.get_tamano()<<endl;
    cout<<endl;
    cout<<a.get_nombre()<<endl;
    cout<<a.get_distrito()<<endl;
    cout<<a.get_piso()<<endl;
    cout<<a.get_clas()<<endl;
    cout<<endl;
    cout<<b.get_nombre()<<endl;
    cout<<b.get_precio()<<endl;
    cout<<b.get_tipo()<<endl;
}
