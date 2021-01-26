#include <iostream>
#include "Scrivener.hpp"
#include "Graph.hpp"

using namespace std;

int main()
{
    Scrivener game;
    int counter = 0;

    cout << "WELLCOME TO SCRINEVER" << endl;
    cout << endl;

    cout << "ENTER \"START\" to begin the journey or \"QUIT\" to quit the game" << endl;
    string start;
    cin >> start;
    if(start != "START" && start != "QUIT")
    {
        cout << flush;
        system("cls");
        cout << "INVALID ENTERED COMMAND, PLEASE TRY AGAIN:D" << endl;
        cout << endl;
        cout << "ENTER \"START\" to begin the journey or \"QUIT\" to quit the game" << endl;
        cin >> start;
    }

    if(start == "START")
    {
        cout << flush;
        system("cls");
        cout << "PLEASE CHOOSE YOU HERO: " << endl;
        Mage mag;
        mag.info();
        cout << endl;

        Archer archer;
        archer.info();
        cout << endl;

        Knight knight;
        knight.info();
        cout << endl;

        cout << "ENTER \"knight\" or \"mag\" or \"archer\" " << endl;
        string t;
        cin >> t;
        if(t == "mag")
        {
            cout << "CHOOSE A NAME: ";
            string name;
            cin >> name;
            Mage* temp = new Mage(name);
            game.change_hero(temp);
        }
        else if(t == "archer")
        {
            cout << "CHOOSE A NAME: ";
            string name;
            cin >> name;
            Archer* temp = new Archer(name);
            game.change_hero(temp);
        }
        else
        {
            cout << "CHOOSE A NAME: ";
            string name;
            cin >> name;
            Knight* temp = new Knight(name);
            game.change_hero(temp);
        }
        string command;
        char commandHelp;
        bool exit = false;
        string str;
        do {
                counter++;
            cout<<flush;
            system("cls");
            cout << "WELLCOME TO STAGE: " << counter << endl;
            cout << "YOUR OPPONENT IS: " << endl;
            game.get_current_level_monster().info();
            cout << endl;
            cout << "HERE ARE YOUR STATS: " << endl;
            game.hero_info();
            cout << endl;

            cout << "ENTER \"attack\" to make your turn or quit to exit the game" << endl;
            cin >> str;

            if(str == "attack") commandHelp = 'A';
            if(str == "quit") commandHelp = 'E';

            switch (commandHelp) {
                case 'A':
                {
                    bool gameFlag = game.attactMonster();
                    if(!gameFlag) exit = true;

                }; break;

                case 'E': exit = true; break;

                default: cout<<"Invalid command! Try again!\n";
            }
        } while (!exit);
    }
    return 0;
}
