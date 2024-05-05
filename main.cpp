#include <iostream>
#include <string>
#include <unistd.h>
#include "player.h"
#include "functions.h"
#include "choices.h"

using namespace std;

int main()
{
    cout << "you wake up in a forrest" << endl <<  "(hint type 'inv' to view your inventory)" << endl;
    // choice_{num} is for the variable names, choice{num} is for the function names
    string choice_1 = choice1();
    if (choice_1 == "a"){
        cout << "You go deeper and find an abbandonned village" << "\n";
        usleep(1000000);
        cout << "You decide to explore some of the houses" << "\n";
    }

    
}