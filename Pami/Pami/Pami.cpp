#include <iostream>
#include <string>
using namespace std;

int main() {

    string palabra = "COMPUTADORA";
    string oculta = "___________";

    int errores = 0;
    char letra;

    cout << "===== JUEGO DEL AHORCADO =====\n";

    while (errores < 6 && oculta != palabra) {

        cout << "\nPalabra: ";

        for (int i = 0; i < oculta.length(); i++) {
            cout << oculta[i] << " ";
        }

        cout << "\nIngresa una letra: ";
        cin >> letra;

        bool encontrada = false;

        // Buscar la letra
        for (int i = 0; i < palabra.length(); i++) {

            if (palabra[i] == letra) {
                oculta[i] = letra;
                encontrada = true;
            }
        }

        // Si no encontro la letra
        if (!encontrada) {
            errores++;

            cout << "Te equivocaste!\n";
            cout << "Errores: " << errores << "/6\n";
        }
        else {
            cout << "¡Correcto!\n";
        }

        // Dibujar ahorcado
        cout << "\n";

        if (errores >= 1)
            cout << "  O\n";

        if (errores >= 2)
            cout << "  O\n  |\n";

        if (errores >= 3)
            cout << "  O\n /|\n";

        if (errores >= 4)
            cout << "  O\n /|\\\n";

        if (errores >= 5)
            cout << "  O\n /|\\\n / \n";

        if (errores >= 6)
            cout << "  O\n /|\\\n / \\\n";
    }

    if (oculta == palabra) {
        cout << "\n🎉 ¡GANASTE!\n";
        cout << "La palabra era: " << palabra << endl;
    }
    else {
        cout << "\n💀 ¡PERDISTE!\n";
        cout << "La palabra era: " << palabra << endl;
    }

    return 0;
}