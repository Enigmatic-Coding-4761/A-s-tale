#include<iostream>
#include<string>
#ifndef choices
#define choices
class choice{
    int choose(std::string choice1,std::string choice2,std::string choice3,std::string choice4)
    {
        int chosen;
        std::cout << "1.    " <<choice1 << std::endl << "2.    " << choice2 << std::endl << "3.    " << choice3 << std::endl << "4.    " << choice4;
        std::cout << "choose one:";
        std::cin >> chosen;
        return chosen;
    }
};




#endif 