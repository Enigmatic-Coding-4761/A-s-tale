#include <iostream>

#ifndef choices
#define choices

string choice;
string choice1(){
    cout << "a." << "Go deeper" << endl;
    cout << "b." << "look around" << endl;
    cout << "c." << "try find an exit" << endl;
    cout << "inv to veiw inventory" << endl;
    cin >> choice;
    if (choice == "inv"){
        return "inv";
    } else if (choice == "a" ){
        return "a";
    } else if (choice == "b"){
        return "b";
    }else if (choice == "c"){
        return "c";
    } else{
        return "rep";
    }
}




#endif