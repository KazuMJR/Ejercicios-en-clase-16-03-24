#include <iostream>
#include <vector>

using namespace std;
int main() {

    cout << "Al ingresar una lista de numeros enteros, estos se ordenaran de menor a mayor" << endl;

    int n;
    cout << "Ingrese la cantidad de numeros enteros: ";
    cin >> n;

    vector<int> numeros(n);

    cout << "Ingrese los numeros enteros uno por uno" << endl;

    for(int i = 0; i < n; i++){
        cin >> numeros[i];
    }

    cout << "Los numeros ingresados son: ";
    for(int i = 0; i < n; i++){
        cout << numeros[i] << " ";
    }

    //Algortimo de ordenamiento
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(numeros[j] > numeros[j + 1]) {
                // Intercambiar los números
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    cout << "Los números ingresados ordenados de menor a mayor son: ";
    for(int i = 0; i < n; i++){
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}



