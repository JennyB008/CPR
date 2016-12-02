//
// Created by Patrick on 22.11.2016.
//

#ifndef __MATRIX_H__
#define __MATRIX_H__


class Matrix
{
public:
    Matrix(void);
    virtual ~Matrix();
    void ausgabe();
    static int getCounter();
protected:
    float m_Element[2];
    int m_Zeilen;
    int m_Spalten;

};

#endif
