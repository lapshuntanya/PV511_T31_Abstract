//
// Created by Tetiana Perederii on 04.05.2026.
//

#include "Shareware.h"


Shareware::Shareware() {
    //install -> current date
    install = Date();
    days = 0;
}

 Shareware::Shareware(string name, string company, Date install, int days)
     :Soft(name, company)
{
    this->install = install;
    this->days = days;
}

Date Shareware::getInstall() const { return install; }
int Shareware::getDays() const { return days; }

void Shareware::print() const {
    cout << type() << endl; //Shareware
    cout << "Name:    " << name << endl;
    cout << "Company: " << company << endl;
    cout << "Install: " << install << endl;
    cout << "Term:    " << days << endl;
    cout << "Finish:  " << days + install << endl << endl;
}

bool Shareware::check() const {
    return days + install >= Date();
}

void Shareware::save(ofstream &file) const {
    file << type() << endl; //Shareware
    file << name << endl;
    file << company << endl;
    //file << install << endl;   01.01.2000
    file << install.getDay() << " " << install.getMonth() << " " << install.getYear() << endl;
    file << days << endl;
}

void Shareware::load(ifstream &file) {
    //Shareware
    getline(file, name);
    getline(file, company);
    int d, m, y;
    file >> d >> m >> y;
    install = Date(y, m, d);
    file >> days;
}

string Shareware::type() const {
    return "Shareware";
}