#include <iostream>
#include <vector>
using namespace std;
int main(){
  int  nombresdentiers;
  int tableau[nombresdentiers];
    int min , max,somme ;
    float moyenne;
    do {
        cout << "Saisir la taille du tableau " << endl;
        cin >> nombresdentiers ;
    } while ( nombresdentiers < 0 );
    for (int i = 1; i <nombresdentiers ; i++) {
        cout << "Donnez les valeurs du tableau " << i << ":" << endl;
        cin >> nombresdentiers;
    }
    min= tableau[0];
    max = tableau[0];
    somme=0; 
    for (int i = 1; i < nombresdentiers; ++i)
    {

        if (max< tableau[i])
       max = tableau[i];
        if(min > tableau[i])
            min = tableau[i];

    }


moyenne = somme/(nombresdentiers-1);
    cout << " Le maximal est :" << max <<  endl;
    cout << " Le minimal est :" << min<<  endl;
    cout << " La somme est :" << somme <<  endl;
    cout << " La moyenne est :" << moyenne <<  endl;



    return 0;
}