#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "es_MX.UTF-8");

    string respuesta;
    bool jugar = true;

    cout << "Esta es la lista de personas famosas:" << endl;
    cout << "Mujeres famosas:" << endl;
    cout << "  - Frida Kahlo (artista mexicana)" << endl;
    cout << "  - Marilyn Monroe (actriz estadounidense)" << endl;
    cout << "  - Oprah Winfrey (presentadora de televisión y empresaria estadounidense)" << endl;
    cout << "  - Beyoncé (cantante y actriz estadounidense)" << endl;
    cout << "  - Malala Yousafzai (activista pakistaní por la educación)" << endl;
    cout << "Hombres famosos:" << endl;
    cout << "  - Albert Einstein (físico alemán)" << endl;
    cout << "  - Elvis Presley (músico y cantante estadounidense)" << endl;
    cout << "  - Leonardo DiCaprio (actor estadounidense)" << endl;
    cout << "  - Cristiano Ronaldo (futbolista portugués)" << endl;
    cout << "  - Dwayne \"The Rock\" Johnson (actor y luchador profesional estadounidense)" << endl;
    cout << "Esta es la lista, ¿empezamos? (s/n) ";
    cin >> respuesta;
    if (respuesta == "n") {
        cout << "Adiós!" << endl;
        return 0;
    }

    do {
        cout << "Responde con 's' para sí o 'n' para no" << endl;

        // Pregunta 1: ¿Es mujer?
        cout << "¿La persona famosa es una mujer? ";
        cin >> respuesta;
        if (respuesta == "s") {
            // Pregunta 2: ¿Es una artista?
            cout << "¿La persona famosa es una artista (actriz, cantante, etc.)? ";
            cin >> respuesta;
            if (respuesta == "s") {
                // Pregunta 3: ¿Es una persona viva?
                cout << "¿La persona famosa está viva? ";
                cin >> respuesta;
                if (respuesta == "s") {
                    cout << "Creo que la persona famosa es Beyoncé!" << endl;
                }
                else {
                    // Pregunta 4: ¿Es una actriz de Hollywood?
                    cout << "¿La persona famosa es una actriz de Hollywood? ";
                    cin >> respuesta;
                    if (respuesta == "s") {
                        cout << "Creo que la persona famosa es Marilyn Monroe!" << endl;
                    }
                    else {
                        cout << "Creo que la persona famosa es Frida Kahlo!" << endl;
                    }
                }
            }
            else {
                // Pregunta 3: ¿Es una persona viva?
                cout << "¿La persona famosa está viva? ";
                cin >> respuesta;
                if (respuesta == "s") {
                    // Pregunta 4: ¿Es una activista?
                    cout << "¿La persona famosa es una activista? ";
                    cin >> respuesta;
                    if (respuesta == "s") {
                        cout << "Creo que la persona famosa es Malala Yousafzai!" << endl;
                    }
                    else {
                        cout << "Creo que la persona famosa es Oprah Winfrey!" << endl;
                    }
                }
                else {
                    cout << "Creo que la persona famosa es Marilyn Monroe!" << endl;
                }
            }
        }
        else {
            // Pregunta 2: ¿Es un deportista?
            cout << "¿La persona famosa es un deportista? ";
            cin >> respuesta;
            if (respuesta == "s") {
                // Pregunta 3: ¿Es un futbolista?
                cout << "¿La persona famosa es un futbolista? ";
                cin >> respuesta;
                if (respuesta == "s") {
                    cout << "Creo que la persona famosa es Cristiano Ronaldo!" << endl;
                }
                else {
                    // Pregunta 4: ¿Es un luchador profesional?
                    cout << "¿La persona famosa es un luchador profesional? ";
                    cin >> respuesta;
                    if (respuesta == "s") {
                        cout << "Creo que la persona famosa es Dwayne \"The Rock\" Johnson!" << endl;
                    }
                    else {
                        // Pregunta 5: ¿Es un músico?
                        cout << "¿La persona famosa es un músico? ";
                        cin >> respuesta;
                        if (respuesta == "s") {
                            cout << "Creo que la persona famosa es Elvis Presley!" << endl;
                        }
                        else {
                            cout << "Creo que la persona famosa es Albert Einstein!" << endl;
                        }
                    }
                }
            }
            else {
                // Pregunta 3: ¿Es un actor vivo?
                cout << "¿La persona famosa es un actor vivo? ";
                cin >> respuesta;
                if (respuesta == "s") {
                    // Pregunta 4: ¿Ha ganado un premio Óscar?
                    cout << "¿La persona famosa ha ganado un premio Óscar? ";
                    cin >> respuesta;
                    if (respuesta == "s") {
                        cout << "Creo que la persona famosa es Leonardo DiCaprio!" << endl;
                    }
                    else {
                        cout << "Creo que la persona famosa es Dwayne \"The Rock\" Johnson!" << endl;
                    }
                }
                else {
                    // Pregunta 4: ¿Es un científico?
                    cout << "¿La persona famosa es un científico? ";
                    cin >> respuesta;
                    if (respuesta == "s") {
                        cout << "Creo que la persona famosa es Albert Einstein!" << endl;
                    }
                    else {
                        // Pregunta 5: ¿Es un músico?
                        cout << "¿La persona famosa es un músico? ";
                        cin >> respuesta;
                        if (respuesta == "s") {
                            cout << "Creo que la persona famosa es Elvis Presley!" << endl;
                        }
                        else {
                            cout << "No sé quién es la persona famosa..." << endl;
                        }
                    }
                }
            }
        }

        cout << "¿Quieres jugar de nuevo? (s/n) ";
        cin >> respuesta;
        if (respuesta == "n") {
            jugar = false;
        }
    } while (jugar);

    return 0;
}
