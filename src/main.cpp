#include <iostream>
using namespace std;

int main() {
  const float coutHoraire = 4.0;
  int velosDispos = 20;
  int capacite = 20;
  int choix;
  cin >> velosDispos;
  cin >> capacite;
  cout << "****** Gestion d'une station Vélô ******" << endl << endl;
  cout << "----------------------------------------" << endl;
  cout << "Vélôs disponibles : " << velosDispos << endl;
  cout << "Points d'attache disponibles : " << capacite - velosDispos << endl;
  cout << "----------------------------------------" << endl << endl;
  cout << "1. Emprunter un Vélô électrique" << endl;
  cout << "2. Restituer un Vélô électrique" << endl;
  cout << "3. Estimer le coût de la location" << endl;
  cout << "4. Quitter l'application" << endl << endl;

  cin >> choix;
  


  return 0;
}