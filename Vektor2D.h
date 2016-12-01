//
// Created by Patrick on 22.11.2016.
//

#ifndef __VEKTOR2D_H__
#define __VEKTOR2D_H__


#include "Vektor.h"

class Vektor2D : public Vektor
{
public:
    Vektor2D();
    Vektor2D(float x, float y);
    void kopiereIn(Vektor2D vektor);
    virtual ~Vektor2D();
    static void tausche(Vektor2D *a, Vektor2D* b);
};

#endif
