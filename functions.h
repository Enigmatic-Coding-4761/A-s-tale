#include<iostream>
#include <string>
#include"player.h"
#include <unistd.h> 
#ifndef functions
#define functions
using namespace std;



void press_to_continue(){
  std::cout << std::endl << "press anything to continue: " ;
  std::cin.ignore();
}

void wait(float time){
  usleep(time * 1000000);
}

void credits(){

}



#endif
