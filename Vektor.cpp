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
    float result = 0;
    for (int i = 0; i < m_Zeilen * m_Spalten; i++)
        result += m_Element[i] * m_Element[i];;
    return sqrt(result);
}

void Vektor::addiere(Vektor v) {
    for (int i = 0; i < m_Zeilen * m_Spalten; i++) {
        m_Element[i] += v.m_Element[i];
    }
}

int Vektor::skalarprodukt(Vektor v) {
    int result = 0;
    if (m_Spalten == v.m_Spalten && m_Zeilen == v.m_Zeilen)
        for (int i = 0; i < m_Zeilen * m_Spalten; i++)
            result += m_Element[i] * v.m_Element[i];
    else
        return nan("NAN");

    return result;
}
