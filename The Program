#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    float mediavoti; // average grades choose by you
    float numerovoti; // total of grades to insert
    char materia[20]; // subject
    float voti; // grades
    float somma=0; // sum grades
    int a=0; // variable
    cout << "insert the subject of your grades : ";
    cin >> materia;
    cout << "insert the total number of your grades : ";
    cin >> numerovoti;
    while(a < numerovoti)
    {
        cout << "insert the grades : ";
        cin >> voti;
        somma += voti;
        a++;
    }
    float media= (somma/numerovoti); // the average grades by your grades
    cout << endl;
    cout << "subject : " << materia << endl;
    cout << "average grades :" << media << endl;
    cout << endl;
    cout << "which average do you want reach? ";
    cin >> mediavoti;
    cout << endl;
    int unodue;
    cout << "press 1 to know which a single grade which could reach the average want, or press 2 to know want to grade cound make you reach the average want . ";
    cin >> unodue;
    cout << endl;
    float x; // the number
    float y; // the number
    float z; // the number
    float sommax; // is the sum of sum + number x or y
    float mediax; // average grades with x or y
    float sommaxz; // is the sum of sum + number x or y and z
    float mediaxz; // average grades with x or y and z
    if(unodue == 1)
    {
        if(media < mediavoti)
        {
            float x = 0.0;
            float sommax;
            float mediax;
            do
            {
                sommax = somma + x;
                mediax = sommax / ( numerovoti+1);
                x = x + 0.1;
                if(mediax >= mediavoti)
                {
                    cout << "you have to get " << x << " to have the average grades greater to the average grades choose" << endl;
                    cout << endl;
                }
            }while(mediax <= mediavoti && x < 100.0);
            return 8;
        }
        if(media >= mediavoti);
        {
            float y = 10.0;
            float sommay;
            float mediay;
            do
            {
                y = y - 0.1;
                sommay = somma + y;
                mediay = sommay / (numerovoti+1);
                if(mediay <= mediavoti)
                {
                    cout << "you have not to get " << y << " otherwise your average grades go down the average grades choose" << endl;
                    cout << endl;
                }
            }while(mediay > mediavoti && y > -100.0);
        }
        return 6;
    }
    if(unodue == 2)
    {
        if(media < mediavoti)
        {
            float x = 0.0;
            float sommax;
            float mediax;
            do
            {
                sommax = somma + x;
                mediax = sommax / ( numerovoti + 1);
                x = x + 0.1;
                if(mediax >= mediavoti)
                {
                    if(x < 10)
                    {
                        cout << "you have to get " << x << " to have the average grades greater to the average grades choose" << endl;
                        cout << endl;
                    }
                    if(x > 10)
                    {
                        do
                        {
                            x = x - 0.1;
                        }while(x >= 10.1);
                        if(x <= 10.1)
                        {
                            float sommaxz;
                            float mediaxz;
                            float z = 0.0;
                            do
                            {
                                z = z + 0.1;
                                sommaxz = (somma + x ) + z;
                                mediaxz = sommaxz / ( numerovoti + 2);
                                if(mediaxz >= mediavoti)
                                {
                                    if(z > 10)
                                    {
                                        z = 10.0;
                                        cout << "you have to get "<< x << " and " << z << " and 1 more grade to have the average grades greater to the average grades choose"<< endl;
                                        cout << endl;
                                    }
                                    if(z < 10)
                                    {
                                        cout << "you have to get " << x << " and " << z << " to have the average grades greater to the average grades choose" << endl;
                                        cout << endl;
                                    }
                                }
                            }while(mediaxz <= mediavoti && z < 100.0);
                        }
                    }
                }
            }while(mediax <= mediavoti && x < 100.0 && z < 100.0);
            return 1;
        }
        if(media >= mediavoti);
        {
            float y = 10.0;
            float sommay;
            float mediay;
            do
            {
                y = y - 0.1;
                sommay = somma + y;
                mediay = sommay / (numerovoti+1);
                if(mediay <= mediavoti)
                {
                    if(y >= 0.0)
                    {
                        cout << "you have to get " << y << " to have the average grades greater to the average grades choose" << endl;
                        cout << endl;
                    }
                    if(y < 0.0)
                    {
                        do
                        {
                            y = y + 0.1;
                        }while(y <= 0.0);
                        if(y >= 0.0)
                        {
                            float sommayz;
                            float mediayz;
                            float z = 10.0;
                            do
                            {
                                z = z - 0.1;
                                sommayz = (somma + y ) + z;
                                mediayz = sommayz / ( numerovoti + 2);
                                if(mediayz <= mediavoti)
                                {
                                    if(z <= 0)
                                    {
                                        z = 0.0;
                                        cout << "you have not to get "<< y << " and " << z << " and 1 more grade to have the average grades greater to the average grades choose"<< endl;
                                        cout << endl;
                                    }
                                    if(z > 0)
                                    {
                                        cout << "you have not to get " << y << " and " << z << " to have the average grades greater to the average grades choose" << endl;
                                        cout << endl;
                                    }
                                }
                            }while(mediayz > mediavoti && y > -100.0 && z > -100.0);
                        }
                    }
                }
            }while(mediay > mediavoti && y > -100.0);
        }
    }
    return 0;
}
    int esci()
    {
        system("pause");
    }
