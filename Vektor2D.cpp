//
// Created by Patrick on 22.11.2016.
//

#include <iostream>
#include "Vektor2D.h"

Vektor2D::Vektor2D(void)
{
}

Vektor2D::~Vektor2D(void)
{
}

Vektor2D::Vektor2D(float x, float y)
{
    m_Element[0]=x;
    m_Element[1]=y;
}

void Vektor2D::kopiereIn(Vektor2D* vektor)
{
    vektor->m_Zeilen = m_Zeilen;
    vektor->m_Spalten = m_Spalten;
}

void Vektor2D::tausche(Vektor2D *a, Vektor2D *b)
{
    Vektor2D temp = *a;
    *a = *b;
    *b = temp;
}

void Vektor2D::ausgabe() {
    std::cout << "Vektor2D: ";
    Matrix::ausgabe();
}
