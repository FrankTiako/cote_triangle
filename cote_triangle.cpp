#include <iostream>
#include <cmath>

int main(int argc,char** argv){
    float x_a,y_a;
    float x_b,y_b;
    float x_c,y_c;
    float ab,ac,bc ;

    std::cout << "Vous allez trouver la longueur des differents cotes de votre triangle par les coordonnees de vos sommets " <<std::endl ;
    std::cout << "entrez l'abcisse du cote A: ";
    std::cin >> x_a;
    std::cout << "entrez l'ordonnee du cote A:  ";
    std::cin >> y_a;

    std::cout <<std::endl << "entrez l'abcisse du cote B: ";
    std::cin >> x_b;
    std::cout << "entrez l'ordonnee du cote B:  ";
    std::cin >> y_b;

    std::cout <<std::endl<< "entrez l'abcisse du cote C: ";
    std::cin >> x_c;
    std::cout << "entrez l'ordonnee du cote C:  ";
    std::cin >> y_c;

    ab = sqrt(((x_b - x_a)*(x_b - x_a)) + ((y_b - y_a)*(y_b - y_a)));
    ac = sqrt(((x_c - x_a)*(x_c - x_a)) + ((y_c - y_a)*(y_c - y_a)));
    bc = sqrt(((x_c - x_b)*(x_c - x_b)) + ((y_c - y_b)*(y_c - y_b)));
    std::cout <<std::endl << "La longueur du cote AB est de: " << ab ;
    std::cout <<std::endl <<"celle du cote AB est de: "<< ac;
    std::cout <<std::endl <<"et celle du cote BC est: "<< bc;
    return 0;
}
