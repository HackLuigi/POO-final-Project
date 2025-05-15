#include <time.h>
#include <string>
#include <iostream>
#include <windows.h>
#include <locale>

using namespace std;

class Player
{
    public:

        int Vida;
        int Ataque;
        int Defensa;

    private:

        int Suerte;

        Player()
        {
            Vida = 100;
            Ataque = 20;
            Defensa = 30;
            Suerte = rand() % 40;
        }
};

class Inventory
{
    public:
        int monedas;
        int comida;

    private:

        Inventory()
        {
            monedas = 0;
            comida = 3;
        }
};

int main()
{
    int decisiones;
    string player_name;
    const char* soundPath = "C:Users\ALUMNO\Desktop\Proyecto final\Nuclear_explosion.wav";

    setlocale(LC_ALL, "es_MX.UTF-8");
    cout << "Un año, paso un maldito y entero año..." << endl;
    system("pause");
    system("cls");
    cout << "Desde que la vida de todo el planeta cambio por completo..." << endl;
    system("pause");
    system("cls");
    cout << "No recuerdo mucho, no creo incluso recordar nada sobre mi, solo recuerdo mi nombre con mucha dificultad, el cual es..." << endl;
    cin >> player_name;
    cin.ignore();
    system("cls");
    cout << "Si... " << player_name << "..." << endl;
    system("pause");
    system("cls");
    cout << "Es increible que todavia lo recuerde... Hoy en dia todos me llaman 020" << endl;
    system("pause");
    system("cls");
    cout << "Todos tenemos esa clase de nombres por numeros, fuimos maldecidos por tener el 'privilegio' de poder meternos al bunker" << endl;
    system("pause");
    system("cls");
    cout << "Solo me pregunto que sera del mundo afuera... Habra alguien vivo...? Me pongo triste de solo pensarlo..." << endl;
    system("pause");
    system("cls");
    cout << "Hay veces en las que escucho disparos y pisadas gigantes de afuera, siempre me mata la curiosidad de saber que son..." << endl;
    system("pause");
    system("cls");
    cout << "La comida en este pequeño lugar esta empezando a escacear, todos parecen estar mas territoriales que nunca..." << endl;
    cout << "Y yo ya estoy harto de este lugar, es mi momento, ahora que todos estan en un drama serio, voy a salir de aqui de una u otra manera" << endl;
    system("pause");
    system("cls");
    system("pause");
    system("cls");
    cout << "Despues de una larga mañana, despiertas, preparado para empezar tu plan" << endl;
    system("pause");
    system("cls");
    cout << "Que te gustaria hacer?" << endl << "1. Revisar stats e inventario." << endl << "2. Salir de tu habitacion." << endl << "3. Revisar alrededor de la habitacion." << endl;
    cin >> decisiones;
    switch (decisiones)
    {
    case 1:
        cout << "Hola" << endl;
    
    break;

    case 2:
        cout << "B" << endl;

    break;
    
    case 3:
        cout << "C" << endl;

    break;
    }
}