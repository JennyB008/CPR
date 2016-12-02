#include "Vektor2D.h"
#include <iostream>


int main1() {
    /*Vektor2D a(3, 1), b(1, 2),*/
    Vektor2D z(-3, 1), w = Vektor2D();
    w.addiere(z);


/*    std::cout << std::endl;
    std::cout << std::endl;
    a.addiere(b);
    std::cout << a.betrag() << std::endl;
    a.ausgabe(); */
    std::cout << std::endl;
    std::cout << std::endl;
    /* Kopien werden zerstört (Parameterübergabe) */


    /* a.addiere(z);
    a.ausgabe();
    std::cout << std::endl;
    std::cout << std::endl;
    w.addiere(z);
    w.ausgabe();
    std::cout << std::endl;
    std::cout << std::endl;
    w.addiere(b);
    w.ausgabe();
    std::cout << std::endl;
    std::cout << std::endl;
*/
    std::cout << "Test" << std::endl;
    Vektor2D u(1, 2);
    std::cout << std::endl;
    std::cout << std::endl;
    u.ausgabe();
    std::cout << std::endl;
    std::cout << std::endl;
    Vektor2D::tausche(&u, &w);
    std::cout << std::endl;
    std::cout << std::endl;
    w.ausgabe();

}
