#include <iostream>
#include <string>
#include <unistd.h>
#include "player.h"
#include "functions.h"
#include "choices.h"

using namespace std;

int main()
{
    player Maxwell;
    string path; 
    cout << "you wake up in a forrest" << endl <<  "(hint type 'inv' to view your inventory)" << endl;
    // choice_{num} is for the variable names, choice{num} is for the function names
    string choice_1 = choice1();
    if (choice_1 == "a"){
      cout << "You go deeper and find an abbandonned village" << "\n";
      wait(2);
      cout << "You decide to explore some of the houses" << "\n";
      wait(2);
      cout << "You explore the old market in search for food and shelter" << "\n";
      wait(3);
      cout << "You find a tin of \'Enigmatic Beanz\'" << "\n";
      Maxwell.inventory_add("Enigmatic Beanz");
      cout << "As you pick it up you notice a string attatched that opens a trapdoor" << "\n";
      wait (1.5);
      cout << "You fall down the trapdoor" << "\n";
      wait(2.4);
      cout << "You are trapped." << "\n";
      wait(3);
      system("clear");
      cout << "GAME END" << "\n";
      credits();
      
    }

    
}
