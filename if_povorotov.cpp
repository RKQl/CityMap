#pragma once

#include "TXLib.h"

int massiv[100][100];

void if_povorot_na_pravo(int x, int y, HDC pic)
{
    //������ �� ���� ������
    /*
    1
   111
    1
    */
    if (x > 0 and y > 0 and
        massiv[x][y] == 1 and
        massiv[x][y + 1] == 1 and
        massiv[x + 1][y] == 1 and
        massiv[x - 1][y] == 1 and
        massiv[x][y - 1] == 1)
    {
        txBitBlt (txDC(), 30 * x, 30 * y, 30, 30, pic, 1, 91);
    }
    /*
    1
   011
    1
    */
    else if (x >= 0 and y > 0 and
        massiv[x][y] == 1 and
        massiv[x][y - 1] == 1 and
        massiv[x][y + 1] == 1 and
        massiv[x + 1][y] == 1/* and
        massiv[x - 1][y] == 0*/)
    {
        txBitBlt (txDC(), 30 * x, 30 * y, 30, 30, pic, 1, 31);
    }
    /*
    0
   111
    1
    */
     else if (x > 0 and y >= 0 and
        massiv[x][y] == 1 and
        //massiv[x][y - 1] == 0 and
        massiv[x][y + 1] == 1 and
        massiv[x + 1][y] == 1 and
        massiv[x - 1][y] == 1)
    {
        txBitBlt (txDC(), 30 * x, 30 * y, 30, 30, pic, 91, 31);
    }
    /*
    1
   110
    1
    */
     else if (x > 0 and y > 0 and
        massiv[x][y] == 1 and
        massiv[x][y - 1] == 1 and
        massiv[x][y + 1] == 1 and
        //massiv[x + 1][y] == 0 and
        massiv[x - 1][y] == 1)
    {
        txBitBlt (txDC(), 30 * x, 30 * y, 30, 30, pic, 31, 31);
    }
    /*
    1
   111
    0
    */
     else if (x > 0 and y > 0 and
        massiv[x][y] == 1 and
        massiv[x][y - 1] == 1 and
        //massiv[x][y + 1] == 0 and
        massiv[x + 1][y] == 1 and
        massiv[x - 1][y] == 1)
    {
        txBitBlt (txDC(), 30 * x, 30 * y, 30, 30, pic, 61, 31);
    }
    /*
    1
   011
    0
    */
     else if (x >= 0 and y > 0 and
        massiv[x][y] == 1 and
        massiv[x][y - 1] == 1 and
        //massiv[x][y + 1] == 0 and
        massiv[x + 1][y] == 1/* and
        massiv[x - 1][y] == 0*/)
    {
        txBitBlt (txDC(), 30 * x, 30 * y, 30, 30, pic, 61, 1);
    }
    /*
    0
   011
    1
    */
     else if (x >= 0 and y >= 0 and
        massiv[x][y] == 1 and
        //massiv[x][y - 1] == 0 and
        massiv[x][y + 1] == 1 and
        massiv[x + 1][y] == 1/* and
        massiv[x - 1][y] == 0*/)
    {
        txBitBlt (txDC(), 30 * x, 30 * y, 30, 30, pic, 1, 1);
    }
    /*
    0
   110
    1
    */
     else if (x > 0 and y >= 0 and
        massiv[x][y] == 1 and
        //massiv[x][y - 1] == 0 and
        massiv[x][y + 1] == 1 and
        //massiv[x + 1][y] == 0 and
        massiv[x - 1][y] == 1)
    {
        txBitBlt (txDC(), 30 * x, 30 * y, 30, 30, pic, 91, 1);
    }
    /*
    1
   110
    0
    */
     else if (x > 0 and y > 0 and
        massiv[x][y] == 1 and
        massiv[x][y - 1] == 1 and
        //massiv[x][y + 1] == 0 and
        //massiv[x + 1][y] == 0 and
        massiv[x - 1][y] == 1)
    {
        txBitBlt (txDC(), 30 * x, 30 * y, 30, 30, pic, 31, 1);
    }
    /*
    0
   111
    0
    */
     else if (x > 0 and y >= 0 and
        massiv[x][y] == 1 and
        //massiv[x][y - 1] == 0 and
        //massiv[x][y + 1] == 0 and
        massiv[x + 1][y] == 1 and
        massiv[x - 1][y] == 1)
    {
        txBitBlt (txDC(), 30 * x, 30 * y, 30, 30, pic, 31, 91);
    }
    /*
    1
   010
    1
    */
     else if (x >= 0 and y > 0 and
        massiv[x][y] == 1 and
        massiv[x][y - 1] == 1 and
        massiv[x][y + 1] == 1/* and
        massiv[x + 1][y] == 0 and
        massiv[x - 1][y] == 0*/)
    {
        txBitBlt (txDC(), 30 * x, 30 * y, 30, 30, pic, 61, 91);
    }

    /*
    0
   110
    0
    */
     else if (x > 0 and y >= 0 and
        massiv[x][y] == 1 and/*
        massiv[x][y - 1] == 0 and
        massiv[x][y + 1] == 0 and
        massiv[x + 1][y] == 0 and */
        massiv[x - 1][y] == 1)
    {
        txBitBlt (txDC(), 30 * x, 30 * y, 30, 30, pic, 31, 61);
    }
    /*
    1
   010
    0
    */
     else if (x >= 0 and y > 0 and
        massiv[x][y] == 1 and
        massiv[x][y - 1] == 1/* and
        massiv[x][y + 1] == 0 and
        massiv[x + 1][y] == 0 and
        massiv[x - 1][y] == 0*/)
    {
        txBitBlt (txDC(), 30 * x, 30 * y, 30, 30, pic, 91, 61);
    }
    /*
    0
   011
    0
    */
     else if (x >= 0 and y >= 0 and
        massiv[x][y] == 1 and
        //massiv[x][y - 1] == 0 and
        //massiv[x][y + 1] == 0 and
        massiv[x + 1][y] == 1/* and
        massiv[x - 1][y] == 0*/)
    {
        txBitBlt (txDC(), 30 * x, 30 * y, 30, 30, pic, 61, 61);
    }
    /*
    0
   010
    1
    */
     else if (x >= 0 and y >= 0 and
        massiv[x][y] == 1 and
        //massiv[x][y - 1] == 0 and
        massiv[x][y + 1] == 1/* and
        massiv[x + 1][y] == 0 and
        massiv[x - 1][y] == 0*/)
    {
        txBitBlt (txDC(), 30 * x, 30 * y, 30, 30, pic, 1, 61);
    }


    /*
     0
    010
     0 */
     else if (x >= 0 and y >= 0 and
        massiv[x][y] == 1/* and
        massiv[x][y - 1] == 0 and
        massiv[x][y + 1] == 0 and
        massiv[x + 1][y] == 0 and
        massiv[x - 1][y] == 0*/)
    {
        txBitBlt (txDC(), 30 * x, 30 * y, 30, 30, pic, 91, 91);
    }
}

int main()
{
    srand(time(NULL));
    int elementov = 12;
    txCreateWindow(800, 600);

    HDC  pic = txLoadImage ("doroga(doroga).bmp");

    //zapolnenie
    for (int stroka = 0; stroka < elementov; stroka++)
    {
        for (int stolbec = 0; stolbec < elementov; stolbec++)
        {
            massiv[stroka][stolbec] = rand() % 2;
        }
    }

    //vyvod na ekran
    char stroka_elementov[100];
    for (int stroka = 0; stroka < elementov; stroka++)
    {
        strcpy(stroka_elementov, "");
        for (int stolbec = 0; stolbec < elementov; stolbec++)
        {
            if (massiv[stolbec][stroka] == 0)
            {
                strcat(stroka_elementov, "0");
            }
            else
            {
                strcat(stroka_elementov, "1");
            }
        }

        txTextOut(100, 400 + 20 * stroka, stroka_elementov);
    }


    //kartinki
    for (int stroka = 0; stroka < elementov; stroka++)
    {
        for (int stolbec = 0; stolbec < elementov; stolbec++)
        {
            if_povorot_na_pravo(stolbec, stroka, pic);
        }
    }

    txDeleteDC (pic);

    return 0;
}
