#include <iostream>

using namespace std;

int main()
{
    int opc, Op;
    double mo, di, pe;

    cout << "---- ¿Que deseas convertir? ----" << endl<<endl<< "1._ Monedas"<<endl<<"2._ Distancias"<<endl<<"3._ Pesos" << endl;
    cin >> opc;

    switch (opc)
    {
    case 1:
    {

        cout << "Ingresa los pesos mexicanos que deseas convertir:  ";
        cin >> mo;
        cout << "¿A que moneda desea convertirlo? : "<< endl<<endl<<"1._ USD"<<endl<<"2._ Euros"<<endl<<"3._ BRL"<<endl<<"4._ COP"<<endl<<"5._ Soles" << endl;
        cin >> Op;

        switch (Op)
        {
        case 1:
            cout <<pe<< " pesos mexicanos equivalen a: " << pe * 0.052 << " USD" << endl;
            break;

        case 2:
            cout <<pe<< " pesos mexicanos equivalen a: " << pe * 0.048 << " Euros" << endl;
            break;

        case 3:
        	cout <<pe<< " pesos mexicanos equivalen a: " << pe * 0.28 << " BRL" << endl;
            break;

        case 4:
            cout <<pe<< " pesos mexicanos equivalen a: " << pe * 242.43 << " CAD" << endl;
            break;

        case 5:
            cout <<pe<< " pesos mexicanos equivalen a: " << pe * 0.203 << " Soles" << endl;
            break;
        }
        break;

    case 2:
    {
        cout << "Ingresa la distancia en Km a convertir: " << endl;
        cin >> di;

        cout << "Elige una opcion: "<<endl<<endl<<"1._ Pulgadas"<<endl<<"2._ Pies"<<endl<<"3._ Centimetros"<<endl<<"4._ Nanometros"<<endl<<"5._ Años luz"<<endl;
        cin >> Op;

        switch (Op)
        {
        case 1:
            cout <<di<< " km equivalen a: " << di * 39370.1 << " Pulgadas" << endl;
            break;

        case 2:
            cout <<di<< " km equivalen a: " << di * 3281.84 << " Pies" << endl;
            break;

        case 3:
            cout <<di<< " km equivalen a: " << di / 100000 << " Centimetros" << endl;
            break;

        case 4:
            cout <<di<< " km equivalen a: " << di * 1e+12 << " Nanómetros" << endl;
            break;

        case 5:
            cout <<di<< " km equivalen a: " << di / 9.461e+12 << " Años luz" << endl;
            break;
        }
        break;

    case 3:
    {

        cout << "Ingrese la cantidad de kilogramos a convertir: " << endl;
        cin >> pe;

        cout << "Elige una opcion"<<endl<<endl<<"1._ Toneladas"<<endl<<"2._ Onzas"<<endl<<"3._ Libras"<<endl<<"4._ Microgramos"<<endl<<"5._ Teragramos" << endl;
        cin >> Op;

        switch (Op)
        {
        case 1:
            cout <<pe<< " kg equivalen a: " << pe * 0.001 << " Toneladas" << endl;
            break;

        case 2:
            cout <<pe<< " kg equivalen a: " << pe * 35.274 << " Onzas" << endl;
            break;

        case 3:
            cout <<pe<< " kg equivalen a: " << pe * 2.20462 << " Libras" << endl;
            break;

        case 4:
            cout <<pe<< " kg equivalen a: " << pe * 1e+9 << " Microgramos" << endl;
            break;

        case 5:
            cout <<pe<< " kg equivalen a: " << pe / 1e+9 << " Teragramos" << endl;
            break;
        }
        break;
    }
    }
    }
    }
}
