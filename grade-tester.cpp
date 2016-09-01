#include <iostream>

using namespace std;

int main()
{
    int push,choose;
    char exit = 'n';
    while ((exit!='n') || (exit!='N') || (exit!='No') || (exit!='no'))
    {
        float x,y,z,sommax,mediax,sommay,mediay,sommaxz,mediaxz,sommayz,mediayz,mediavoti,numerovoti,voti,somma=0;
        char materia[20];
        int a=0;
        cout << "\n\n\t\t\tPROGRAM CREATED BY APT-GET ROOT\t\t\t";
        cout <<"\n\n\t\t\t******************************";
        cout << "\n\t\t\t*        GRADE TESTER        *";
        cout <<"\n\t\t\t******************************";
        cout << "\n\n\nInsert the subject of your grades: ";
        cin >> materia;
        cout << "\nInsert the total number of your grades: ";
        cin >> numerovoti;
        cout << endl;
        while(a < numerovoti)
        {
            cout << "Insert the grades : ";
            cin >> voti;
            somma += voti;
            a++;
        }
        float media = (somma/numerovoti);
        cout << endl;
        cout << "Subject : " << materia << endl;
        cout << "Average grades :" << media << endl;
        cout << endl;
        cout << "Which average do you want reach? ";
        cin >> mediavoti;
        cout << endl;
        cout << "1. to know which a single grade which could reach the average want.\n2. to know more number grade could make you reach the average want. ";
        cout <<"\n\nDigit your choice: ";
        cin >> choose;
        cout << endl<< endl;
        switch(choose)
        {
            case 1:
            {
                if(media < mediavoti)
                {
                    float x = 0.0;
                    do
                    {
                        sommax = somma + x;
                        mediax = sommax / ( numerovoti+1);
                        x = x + 0.1;
                        if(mediax >= mediavoti)
                        {
                            cout << "You have to get " << x << " to have the average grades greater to the average grades choose" << endl;
                            cout << endl;
                            cout << "\n\n1. to return menu \n0. to exit\nDigit your choice: ";
                            cin >> push;
                            if(push ==1)
                            {
                                cout << string(20, '\n');
                                break;
                            }
                            if(push == 0)
                            {
                                return 0;
                            }
                        }
                    }while(mediax <= mediavoti && x < 100.0);
                }
                if(media >= mediavoti);
                {
                    float y = 10.0;
                    do
                    {
                        y = y - 0.1;
                        sommay = somma + y;
                        mediay = sommay / (numerovoti+1);
                        if(mediay <= mediavoti)
                        {
                            cout << "You have not to get " << y << " otherwise your average grades go down the average grades choose" << endl;
                            cout << endl;
                            cout << "\n\n1. to return menu \n0. to exit\nDigit your choice: ";
                            cin >> push;
                            if(push ==1)
                            {
                                cout << string(20, '\n');
                                break;
                            }
                            if(push == 0)
                            {
                                return 0;
                            }
                        }
                    }while(mediay > mediavoti && y > -100.0);
                }
                break;
            }
            case 2:
            {
                if(media < mediavoti)
                {
                    float x = 0.0;
                    float z = 0.0;
                    do
                    {
                        sommax = somma + x;
                        mediax = sommax / ( numerovoti + 1);
                        x = x + 0.1;
                        if(mediax >= mediavoti)
                        {
                            if(x <= 10)
                            {
                                cout << "You have to get " << x << " to have the average grades greater to the average grades choose" << endl;
                                cout << endl;
                                cout << "\n\n1. to return menu \n0. to exit\nDigit your choice: ";
                                cin >> push;
                                if(push ==1)
                                {
                                    cout << string(20, '\n');
                                    break;
                                }
                                if(push == 0)
                                {
                                    return 0;
                                }
                            }
                            if(x > 10)
                            {
                                do
                                {
                                    x = x - 0.1;
                                }while(x >= 10.1);
                                if(x <= 10.1)
                                {
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
                                                cout << "You have to get "<< x << " and " << z << " and 1 more grade to have the average grades greater to the average grades choose"<< endl;
                                                cout << endl;
                                                cout << "\n\n1. to return menu \n0. to exit\nDigit your choice: ";
                                                cin >> push;
                                                if(push ==1)
                                                {
                                                    cout << string(20, '\n');
                                                    break;
                                                }
                                                if(push == 0)
                                                {
                                                    return 0;
                                                }
                                            }
                                            if(z < 10)
                                            {
                                                cout << "You have to get " << x << " and " << z << " to have the average grades greater to the average grades choose" << endl;
                                                cout << endl;
                                                cout << "\n\n1. to return menu \n0. to exit\nDigit your choice: ";
                                                cin >> push;
                                                if(push ==1)
                                                {
                                                    cout << string(20, '\n');
                                                    break;
                                                }
                                                if(push == 0)
                                                {
                                                    return 0;
                                                }
                                            }
                                        }
                                    }while(mediaxz <= mediavoti && z < 100.0);
                                }
                            }
                        }
                    }while(mediax <= mediavoti && x < 100.0 && z < 100.0);
                    break;
                }
                if(media >= mediavoti);
                {
                    float y = 10.0;
                    do
                    {
                        y = y - 0.1;
                        sommay = somma + y;
                        mediay = sommay / (numerovoti+1);
                        if(mediay <= mediavoti)
                        {
                            if(y >= 0.0)
                            {
                                cout << "You have to get " << y << " to have the average grades greater to the average grades choose" << endl;
                                cout << endl;
                                cout << "\n\n1. to return menu \n0. to exit\nDigit your choice: ";
                                cin >> push;
                                if(push ==1)
                                {
                                    cout << string(20, '\n');
                                    break;
                                }
                                if(push == 0)
                                {
                                    return 0;
                                }
                            }
                            if(y < 0.0)
                            {
                                do
                                {
                                    y = y + 0.1;
                                }while(y <= 0.0);
                                if(y >= 0.0)
                                {
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
                                                cout << "You have not to get "<< y << " and " << z << " and one more grade to have the average grades greater to the average grades choose"<< endl;
                                                cout << endl;
                                                cout << "\n\n1. to return menu \n0. to exit\nDigit your choice: ";
                                                cin >> push;
                                                if(push ==1)
                                                {
                                                    cout << string(20, '\n');
                                                    break;
                                                }
                                                if(push == 0)
                                                {
                                                    return 0;
                                                }
                                            }
                                            if(z > 0)
                                            {
                                                cout << "You have not to get " << y << " and " << z << " to have the average grades greater to the average grades choose" << endl;
                                                cout << endl;
                                                cout << "\n\n1. to return menu \n0. to exit\nDigit your choice: ";
                                                cin >> push;
                                                if(push ==1)
                                                {
                                                    cout << string(20, '\n');
                                                    break;
                                                }
                                                if(push == 0)
                                                {
                                                    return 0;
                                                }
                                            }
                                        }
                                    }while(mediayz > mediavoti && y > -100.0 && z > -100.0);
                                }
                            }
                        }
                    }while(mediay > mediavoti && y > -100.0);
                }
                break;
            }
        }
    }
    return 0;
}
