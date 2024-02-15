#include <iostream>
#include <array>
#ifndef classes
#define classes

class player
{
    int health;
    std::array<std::string,5> inventory; 
    int arrows;
    std::array<std::string,10> key_items;

    void inventory_list()
    {
        std::cout << "backpack:";
        for (int i = 0; i < 5; i++){
            std::cout <<    i + 1 << inventory[i] << std::endl;
        }
        std::cout << "key items:";
        for (int i = 0; i < 10; i++){
            std::cout <<    i + 1 << key_items[i] << std::endl;
        }
    }

    void inventory_add(std::string item)
    {
        for (int i = 0; i < 5;i++)
        {
            if (inventory[i] == ""){
                inventory[i] = item;
            }
        }
    }

    void inventory_add_key(std::string item){
        for (int i = 0; i < 10;i++)
        {
            if (key_items[i] == ""){
                key_items[i] = item;
            }
        }
    }

};



#endif
