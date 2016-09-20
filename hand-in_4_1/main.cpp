#include <iostream>
#include "list.h"

int main() {

    List<const int *> *l = new List<const int *>();
    //List::push_back(21);
    l->List::push_back(1);
    l->List::push_back(4);
    l->List::push_back(54);
    l->List::push_back(76);
    l->List::push_back(32);

    l->List::PrintList();

    return 0;




    /*List l;
    std::cout << "1. Add integer\n"
            "\n"
            "2. Show integer at position (ask for position)\n"
            "\n"
            "3. remove integer at position (ask for position)\n"
            "\n"
            "4. Add string\n"
            "\n"
            "5. Show string at position (ask for position)\n"
            "\n"
            "6. Remove string (ask for position)\n"
            "\n"
            "7. Print information (see below)\n"
            "\n"
            "8. Exit\n" << "pick a number" <<  std::endl;
    int input;
    int& r = input;
    std::cin >> r;
    std::cin.ignore();

    while(r != 0) {
        switch (r) {
            case 1:
                std::cout << "Type in value: ";
                int value;
                std::cin >> value;
                std::cin.ignore();
                l.push_back(value);
                break;
            case 2:
                l.PrintList();
                break;
            default:break;

        }
    }*/
}