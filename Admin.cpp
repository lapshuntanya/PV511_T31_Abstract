//
// Created by Tetiana Perederii on 04.05.2026.
//

#include "Admin.h"


void Admin::savetoFile() const {
    ofstream file("info-soft.txt");
    if (file.is_open()) {
        for (auto item:admin)
            item->save(file);

        file.close();
    }
}

void Admin::loadfromFile() {
    ifstream file("info-soft.txt");
    if (file.is_open()) {

        Soft* p = nullptr;
        string type = "";

        while (!file.eof()) {
            getline(file, type);

            if (type.empty()) continue;
            else if (type == "Free") {
                p = new Free();
                p->load(file);
                admin.push_back(p);
            }
            else if (type == "Shareware") {
                p = new Shareware();
                p->load(file);
                admin.push_back(p);
            }
        }
        file.close();
    }
}

Admin::Admin() {
    loadfromFile();
}

Admin::~Admin() {
    savetoFile();
//-------------------------------------

    for (auto item:admin)
        delete item;
}

void Admin::showList() const {
    for (auto item:admin)
        item->print();
}

void Admin::addSoft(Soft *obj) {
    if (obj != nullptr) {
        admin.push_back(obj);
    }
}