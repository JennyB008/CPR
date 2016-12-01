//
// Created by Patrick on 22.11.2016.
//
#ifndef __VEKTOR_H__
#define __VEKTOR_H__

#include "Matrix.h"

class Vektor : public Matrix
{
public:
    Vektor();
    virtual ~Vektor();
    float betrag(void);
    void addiere(Vektor v);
};

#endif
