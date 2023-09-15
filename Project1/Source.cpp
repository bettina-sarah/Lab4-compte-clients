#include <iostream>
#include <vector>
#include <string>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Client_s
{
	int NumeroCompte;
	string NomComplet;
	string MotPasse;
};

void CreationClient(vector<Client_s>&Client);
void AffichageClients(vector<Client_s>&Client);

void main(void)
{
	vector <Client_s>Clients; // conserve les clients
	int OptionMenu;
	do {
		cout << "1. Ajouter 1 client:"
			"\n2. Afficher les clients"
			"\n3. Quitter le menu";

		cin >> OptionMenu;

		switch (OptionMenu)
		{
		case 1: CreationClient(Clients);
			break;
		case 2: AffichageClients(Clients);
			break;
		case 3:
			_getch();
		}
	} while (OptionMenu != 3);

}

void CreationClient(vector<Client_s>&Client)
{
	Client_s Customer;

	system("cls");
	static int CompteDebut = 23000;
	cout << "Entrez le nom complet";
	cin >> Customer.NomComplet;
	cout << "\nEntrez un mot de passe";
	cin >> Customer.MotPasse;
	Customer.NumeroCompte = CompteDebut;
	CompteDebut++;
	Client.push_back(Customer);


}
void AffichageClients(vector<Client_s>&Client)
{	
	system("cls");
	cout << "*** CLIENTS ***\n";
	for (int i = 0; i < Client.size(); i++) // changer limite
	{
		cout << "Compte: " << Client[i].NumeroCompte;
		cout << "\nNom client: " << Client[i].NomComplet;
		cout << "\nMot de passe: " << Client[i].MotPasse;
		cout << "\n\n";
	}
}

