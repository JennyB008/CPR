//
// Created by Patrick on 22.11.2016.
//

#include <iostream>
#include "Matrix.h"



Matrix::Matrix(void) : m_Zeilen(2), m_Spalten(1) {
    std::cout << "Standardkonstruktor wird aufgerufen." << std::endl;
    for (int i = 0; i < m_Zeilen * m_Spalten; i++)
        m_Element[i] = 0;
}

Matrix::~Matrix() {
    std::cout << "Matrix " << std::endl;
    for (int i = 0; i < m_Zeilen + m_Spalten; ++i) {
        std::cout << m_Element[i] << std::endl;
    }
    std::cout << " wurde zerstört" << std::endl;
}

void Matrix::ausgabe() {
    for (int i = 0; i < m_Zeilen * m_Spalten; i++)
        std::cout << m_Element[i] << " ";
    std::cout << std::endl;
}
