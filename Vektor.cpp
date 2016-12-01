//
// Created by Patrick on 22.11.2016.
//



#include <cmath>
#include "Vektor.h"

Vektor::Vektor() {
}

Vektor::~Vektor() {
}

float Vektor::betrag() {
    float b = 0;
    for (int i = 0; i < m_Zeilen * m_Spalten; i++)
        b += m_Element[i] * m_Element[i];;
    return sqrt(b);
}

void Vektor::addiere(Vektor v) {
    for (int i = 0; i < m_Zeilen * m_Spalten; i++) {
        m_Element[i] += v.m_Element[i];
    }
}
