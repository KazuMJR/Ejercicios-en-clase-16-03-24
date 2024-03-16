#include <iostream>
#include <vector>

using namespace std;

int main() {

    cout<<"Al ingresar un numero se le dara a conocer si se encuentra en el vector"<<endl;

    vector<int> numeros ={15, 20, 40, 8, 5, 8};

    int numero_buscado;
    cout<<"Ingrese un numero para buscarlo en el vector"<<endl;
    cin >> numero_buscado;


    //Aqui se busca el numero dentro del vector
    bool encontrado = false;
        for (int numero : numeros){
            if (numero == numero_buscado){
                encontrado = true;
                break;
            }
        }

        if(encontrado){
            cout <<"El numero: "<<numero_buscado<<" Esta dentro del vector."<<endl;
        }else
            cout <<"El numero: "<<numero_buscado<<" No esta dentro del vector."<<endl;


    return 0;
}
