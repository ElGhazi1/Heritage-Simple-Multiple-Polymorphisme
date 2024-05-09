#include <iostream>
#include <cstring>

using namespace std;

class Personne {

    protected:
        char name[30];
        char pre[30];
        int age;

    public:
        Personne(const char*,const char*,int);
        Personne(const Personne&);

        char* getname();
        virtual char* getprenom()=0;
        void setname(const char*);
        void setprenom(const char*);
        void setage(int);
        virtual void afficher()=0;
};

class Etudiant: virtual public Personne {

    private:
        char CNE[20];

    public:
        Etudiant(const char* , const char*,const char*,int );
        Etudiant(const Etudiant&);
        char* getprenom() override;
        char* getCNE();
        void setCNE(const char*);
        void afficher() override;
};

class Salarier: virtual public Personne, virtual public Etudiant {

    private:
        float salary;

    public:
        Salarier(float, const char*,const char*,const char*,int );
        Salarier(const Salarier&);
        char* getprenom() override;
        float getsalaire();
        void setsalaire(float);
        void afficher() override;
};