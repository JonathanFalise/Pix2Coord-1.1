#include <iostream>
#include <fstream>
#include <cstdlib>//librairie pour les string

using namespace std;

//Prototypes
void shutdown(string message, ifstream &f_in, ofstream &f_out);

//Définition des fonctions
void Shutdown(string message, ifstream &f_in, ofstream &f_out){
    cerr<<message<<endl;
    f_in.close();
    f_out.close();
    exit(EXIT_FAILURE); // Arrete le fichier si la fonction shutdown est appele
}
int main(){
    ifstream f_in("Pixmap1.txt");
    ofstream f_out;

    if(f_in.fail()){ //test de l'ouvertutre du fichier
        string errOuv = "Erreur lors de l'ouverture du fichier pixmap.txt";
        Shutdown(errOuv, f_in, f_out);
    }
    else{
        if(f_in.fail()){ //test de la lecture du fichier
            string errLect = "Erreur lors de la lecture du fichier";
            Shutdown(errLect, f_in, f_out);
        }
        else{
            int largeur(0), hauteur(0), nbCoul(0), nbTraces(0);
            f_in >> largeur; // Récupération de la largeur dans un int
            if(largeur<10){
                //cout<<"Largeur= "<<largeur<<endl;
                string errDim = "La largeur est trop petite (<10)!";
                Shutdown(errDim, f_in, f_out);
            }
            else if(largeur>1000){
                //cout<<"Largeur= "<<largeur<<endl;
                string errDim = "La largeur est trop grande (>1000)!";
                Shutdown(errDim, f_in, f_out);
            }
            
            f_in >> hauteur; // Récupération de la hauteur
            if(hauteur<10){
                string errDim = "La hauteur est trop petite (<10)!";
                Shutdown(errDim, f_in, f_out);
            }
            else if(hauteur>1000){
                string errDim = "La hauteur est trop grande (>1000)!";
                Shutdown(errDim, f_in, f_out);
            }
            
            cout<<largeur<<": largeur"<<endl;
            cout<<hauteur<<": hauteur"<<endl;
            
            f_in >> nbCoul;
            nbTraces = nbCoul - 4;
            
            for(int i(0); i < 4; i++){ //Couleurs des points référence dans un vecteur
                
            }
            
            for(int j(0); j < nbTraces; j++){  //Couleurs des différentes traces
                
            }
        }
    }
}
