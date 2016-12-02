//
// Created by Patrick on 02.12.2016.
//

#include <iostream>
#include "../Vektor2D.h"


int main() {{
    Vektor2D v(1, 2), w(3, 4);
    Matrix M;
    Matrix *Mpointer;

    M = v;
    Mpointer = &v;

    std::cout << "Ausgabe von M und über Mpointer" << std::endl;
    M.ausgabe();
    Mpointer->ausgabe();

    v.addiere(w);
    std::cout << "Ausgabe von v nach Addieren" << std::endl;
    v.ausgabe();

    std::cout << "Ausgabe von M/Mpointer nach Add." << std::endl;
    M.ausgabe();
    Mpointer->ausgabe();

}
    std::cout << Matrix::getCounter() << std::endl;
    return 0;
}