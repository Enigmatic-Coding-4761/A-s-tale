#include<iostream>
#include<string>
#include "classes.h"
#ifndef choices
#define choices

int choose(std::string choice1,std::string choice2,std::string choice3,std::string choice4)
{
    char chosen;
    std::cout << "1.    " <<choice1 << std::endl << "2.    " << choice2 << std::endl << "3.    " << choice3 << std::endl << "4.    " << choice4 << std::endl << "or type 5 to view your inventory";
    std::cout << "choose one:";
    std::cin >> chosen;
    if (chosen == 5){
        
    }
    return chosen;
}





#endif 