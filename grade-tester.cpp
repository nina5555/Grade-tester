#include <iostream>
#include <fstream>
#include <string>
#define N 100

using namespace std;

ofstream output("Summary.txt");

int main()
{
	int push, choose;
	char exit = 'n';
	while ((exit != 'n') || (exit != 'N') || (exit != 'No') || (exit != 'no'))
	{
		float voti[N], somma = 0, media = 0, media_raggiungere = 0, numero_voti = 0;
		char materia[1024];
		cout << "\n\n\t\t\tPROGRAM CREATED BY APT-GET ROOT\t\t\t";
		cout << "\n\n\t\t\t******************************";
		cout << "\n\t\t\t*        GRADE TESTER        *";
		cout << "\n\t\t\t******************************";
		
		cout << "\n\n\nInsert the subject of your grades: ";
		cin >> materia;
		output << "Subject : " << materia << endl;
		cout << "\nInsert the total number of your grades: ";
		cin >> numero_voti;
		cout << endl;
		output << "\nGrades : " << endl;
		for (int a = 0; a < numero_voti; a++)
		{
			cout << "Insert the grades : ";
			cin >> voti[a];
			output << "Grade " << a + 1 << " : " << voti[a] << endl;
			somma += voti[a];
		}
		media = (somma / numero_voti);
		cout << "\nAverage grades :" << media << endl << endl;
		output << "\nAverage grades : " << media << endl << endl;
		cout << "Which average do you want reach [more or less than " << media << "] ? ";
		cin >> media_raggiungere;
		cout << endl;

		if (media <= media_raggiungere)
		{
			cout << "\nYou have to get ";
			output << "\nYou have to get ";
			float numero_aggiunto = 1, nuova_media = 0, x = 12;
			int a = 1;
			while (x > 10.0)
			{
				x = 0.01;
				nuova_media = 0;
				for (float sommax = 0; media_raggiungere > nuova_media; x += 0.01)
				{
					sommax = somma + x;
					nuova_media = (sommax / (numero_voti + numero_aggiunto));
				}
				if (a != 1)
				{
					cout << "10 e ";
					output << "10 e ";
				}
				a++;
				somma += 10.0;
				numero_aggiunto++;
			}
			cout << x << " to have " << media_raggiungere << " \n" << endl;
			output << x << " to have " << media_raggiungere << " \n" << endl;
			cout << "\n\nSee the file \"Summary\" inside the directory to a review of all your subject\n\n1. To return menu \n0. To exit\nDigit your choice [ 1 or 0 ]: ";
			cin >> push;
			output << "\n\n";
			if (push == 1)
				cout << string(20, '\n');
			if (push == 0)
			{
				output.close();
				return 0;
			}
		}

		if (media > media_raggiungere)
		{
			cout << "\nYou have to get ";
			output << "\nYou have to get ";
			float numero_aggiunto = 1, nuova_media = 10, x = -1.0;
			int a = 1;
			while (x < 0.0)
			{
				x = 10;
				nuova_media = 10;
				for (float sommax = 0; media_raggiungere < nuova_media; x -= 0.01)
				{
					sommax = somma + x;
					nuova_media = (sommax / (numero_voti + numero_aggiunto));				
				}
				if (a != 1)
				{
					cout << "0 and ";
					output << "0 and ";
				}
				a++;
				numero_aggiunto++;
			}
			cout << x << " to have "<< media_raggiungere << " \n" << endl;
			output << x << " to have " << media_raggiungere << " \n" << endl;
			cout << "\n\nSee the file \"Summary\" inside the directory to a review of all your subject\n\n1. To return menu \n0. To exit\nDigit your choice [ 1 or 0 ]: ";
			cin >> push;
			output << "\n\n";
			if (push == 1)
				cout << string(20, '\n');
			if (push == 0)
			{
				output.close();
				return 0;
			}
		}
	}
	output.close();
	return 0;
}
