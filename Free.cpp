//
// Created by Tetiana Perederii on 04.05.2026.
//

#include "Free.h"


 Free::Free() {
}

Free::Free(string name, string company) :Soft(name, company){
}

 void Free::print() const{
  cout << type() << endl;  //Free
  cout << "Name:    " << name << endl;
  cout << "Company: " << company << endl << endl;
}

 bool Free::check() const{
  return true;
}

void Free::save(ofstream &file)const {  //write to file
  file << type() << endl; //Free
  file << name << endl;
  file << company << endl;
}

void Free::load(ifstream &file) {
     //Free
     getline(file, name);
     getline(file, company);
}

string Free::type()const {
     return "Free";
}