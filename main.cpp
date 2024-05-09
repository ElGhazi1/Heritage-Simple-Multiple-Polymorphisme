#include "heritage.hpp"

int main(){

    Etudiant *etudiant[3];
    etudiant[0] = new Salarier(5000,"F136033487","elghazi","mohamed",20);
    etudiant[1] = new Salarier(4000,"G136033487","elghazi","aissa",17);
    etudiant[2] = new Etudiant("H136033487","elghazi","makak",13);


    Salarier s1(5000,"F136033487","elghazi","mohamed",20);
    Etudiant etu("F136033487","elghazi","mohamed",20);

    etu.afficher();
    s1.afficher();

    for(int i=0;i<3;i++){
        etudiant[i]->afficher();
    }


    return 0;
}