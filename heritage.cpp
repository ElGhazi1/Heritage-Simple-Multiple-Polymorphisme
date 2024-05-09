#include "heritage.hpp"


Personne::Personne(const char* nom, const char* prenom,int age){
    strcpy(this->name , nom);
    strcpy(this->pre , prenom);
    this->age = age;

}

Personne::Personne(const Personne& p){
    strcpy(this->name,p.name);
    strcpy(this->pre,p.pre);
    this->age = p.age;
}

char* Personne::getname(){
    return this->name;
}

char* Personne::getprenom(){
    return this->pre;
}

void Personne::setname(const char* nom){
    strcpy(this->name,nom);
}

void Personne::setprenom(const char* prenom){
    strcpy(this->pre,prenom);
}

void Personne::setage(int age){
    this->age = age ;
}


// void Personne::afficher(){}

// Classe Etudiant:

Etudiant::Etudiant(const char* cne , const char* nom,const char* prenom,int ag): Personne(nom,prenom,ag){
    strcpy(this->CNE,cne);
}
Etudiant::Etudiant(const Etudiant& etudiant): Personne(etudiant){
    strcpy(this->CNE,etudiant.CNE);
}

char* Etudiant::getCNE(){
    return this->CNE;
}
void Etudiant::setCNE(const char* cne){
    strcpy(this->CNE,cne);
}

char* Etudiant::getprenom(){
    return this->pre;
}

void Etudiant::afficher(){
    cout << "Nom: " << this->getname() << endl;
    cout << "Prenom: " << this->getprenom() << endl;
    cout << "CNE: " << this->getCNE() << endl;
    cout << "----------------"<<endl;

}

// Classe Salaire:

Salarier::Salarier(float dirham ,const char* cne, const char* nom,const char* prenom,int ag): Personne(nom,prenom,ag) , Etudiant(cne,nom,prenom,ag){
    this->salary = dirham;
}
Salarier::Salarier(const Salarier& s): Personne(s),Etudiant(s){
    this->salary = s.salary;
}

float Salarier::getsalaire(){
    return this->salary;
}
void Salarier::setsalaire(float dirham){
    this->salary = dirham;
}

char* Salarier::getprenom(){
    return this->pre;
}

void Salarier::afficher(){
    cout << "Nom: " << this->getname() << endl;
    cout << "Prenom: " << this->getprenom() << endl;
    cout << "CNE: " << this->getCNE() << endl;
    cout << "Salaire: " << this->getsalaire() << endl;

    cout << "----------------"<<endl;

}