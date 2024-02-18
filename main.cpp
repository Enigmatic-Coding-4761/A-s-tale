#include <iostream>
#include "choices.h"
#include "classes.h"

using namespace std;

int main()
{
    player alex;
    alex.inventory_add("bow");
    alex.inventory_add_key("key");
    alex.inventory_list();
}