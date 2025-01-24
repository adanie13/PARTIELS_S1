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

  cout << "Quel est votre choix ?: ";
  cin >> choix;
  cout << choix << endl;

 switch (choix) {
    case 1: 
      if (velosDispos > 0) {
        velosDispos--;
        cout << "Vous avez emprunté un vélô." << endl;
      } else {
        cout << "Désolé, aucun vélô n'est disponible actuellement." << endl;
      }
      break;
    case 2: 
      if (velosDispos < capacite) {
        velosDispos++;
        cout << "Merci d'avoir restitué un vélô." << endl;
      } else {
        cout << "Désolé, aucun point d'attache n'est disponible." << endl;
      }
      break;
    case 3: 
      int duree;
      cout << "Entrez la durée en minutes de la location : ";
      cin >> duree;
      cout << "Le coût estimé de votre location est de "
           << (coutHoraire * duree / 60) << " euros." << endl;
      break;
    case 4: 
      cout << "Au-revoir" << endl;
      break;
    default:
      cout << "Choix invalide. Veuillez réessayer." << endl;
    }



  return 0;
}