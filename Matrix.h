//
// Created by Patrick on 22.11.2016.
//

#ifndef __MATRIX_H__
#define __MATRIX_H__

class Matrix
{
protected:
    float m_Element[2];
    int m_Zeilen;
    int m_Spalten;
public:
    Matrix(void);
    virtual ~Matrix();
    void ausgabe();
};

#endif
