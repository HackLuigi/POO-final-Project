#include <time.h>
#include <string>
#include <iostream>
#include <windows.h>
#include <locale>
#include <cstdlib>

using namespace std;

class Player
{
    public:

        int HP;
        int Attack;
        int Defense;

        Player()
        {
            HP = 100;
            Attack = 20;
            Defense = 20;
            Luck = rand() % 40;
        }

        void show()
        {
            cout << "Vida: " << HP << " Ataque: " << Attack << " Defensa: " << Defense << endl;
        }

    private:

        int Luck;

};

class Inventory
{
    public:
        int Coins;
        int Food;

        Inventory()
        {
            Coins = 0;
            Food = 3;
        }

        void show()
        {
            cout << "Monedas: " << Coins << " Comida: " << Food << endl;
        }

        void setCoins(int ObtainedCoins) 
        {
            Coins = ObtainedCoins;
        }
        void setFood(int ObtainedFood)
        {
            Food = ObtainedFood;
        }
};

class Enemy
{
    public:
        int HP_enemy;
        int Attack_enemy;
        int Defense_enemy;
};

void battle()
{
    Player Player_side;
    Enemy Enemy_side;
    Inventory food;
    bool Fight = true;
    int  Battle_decisions;

    while (Fight == true)
    {
        cin >> Battle_decisions;
        switch (Battle_decisions)
        {
            
        }
    }
}

void battle_mechanics()
{
    Player Player_fighter;
    Enemy Enemy_fighter;
    
}

int main()
{
    Player stats_player;
    Inventory bag_player;
    int decisions;
    string player_name;
    bool area = false;
    bool obtcoin = false;
    bool obtobjc2 = false;
    bool obtobjc3 = false;
    bool obtobjc4 = false;
    bool obtobjc5 = false;
    bool obtobjc6 = false;
    bool obtobjc7 = false;
    bool obtobjc8 = false;
    bool obtobjc9 = false;
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
    cout << "Para hacer una accion o moverte de habitacion en habitacion, usa los numeros en tu teclado con las opciones que te aparezcan" << endl;
    system("pause");
    system("cls");
    while (area == false)
    {
        system("cls");
        cout << "Que te gustaria hacer?" << endl << "1. Revisar stats e inventario." << endl << "2. Salir de tu habitacion." << endl << "3. Revisar alrededor de la habitacion." << endl;
        cin >> decisions;
        switch (decisions)
        {
        case 1:
            system("cls");
            stats_player.show();
            bag_player.show();
            system("pause");
            break;

        case 2:

            area = true;
            system("cls");
            cout << "Decides salir de tu habitacion, abriendo la puerta hidraulica, la usual escena de las luces casi cegadoras y las paredes de colores muy esteriles te reciben." << endl;
            system("pause");

            break;

        case 3:
            if (obtcoin == false)
            {
                system("cls");
                cout << "No sabes porque se te vino a la mente, pero extrañamente tuviste el deseo de revisar alrededor de tu habitacion" << endl;
                system("pause");
                cout << "Y milagrosamente, encontraste una moneda, puede que afuera ya no signifique nada, pero dentro del bunker, tener una moneda puede signficar el que te den incluso el objeto mas caro de afuera" << endl;
                system("pause");
                cout << "Has conseguido una moneda" << endl;
                bag_player.setCoins(1);
                system("pause");
                obtcoin = true;
            }
            else
            {
                system("cls");
                cout << "Intentaste buscar otra vez para ver si tenias otra moneda escondida, pero solo encontraste una cucaracha muerta y pelusa debajo de tu cama..." << endl;
                system("pause");
            }
            break;
        }
    }
    system("cls");
    cout << "Llegas al comedor principal, podrias decir que es el punto para en el que ir a todas las habitaciones, el punto principal" << endl;
    area = false;
    while (area == false)
    {
        switch (decisions)
        {
            system("cls");
            cout << "Que te gustaria hacer? Adonde te gustaria ir?" << endl << "1. Ir con el viejo vendedor." << endl << "2. Ir con el padre de familia." << endl << "3. Ir con la señorita" << endl;

        }
    }
}