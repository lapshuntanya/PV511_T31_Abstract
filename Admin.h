//
// Created by Tetiana Perederii on 04.05.2026.
//

#ifndef PV511_T31_ABSTRACT_ADMIN_H
#define PV511_T31_ABSTRACT_ADMIN_H

#include "Free.h"
#include "Shareware.h"
#include  <vector>
#include <algorithm>

class Admin {

    vector<Soft* > admin; // STL container vector
public:
    Admin();
    ~Admin();

    void showList()const;
    void addSoft(Soft* obj);
};



#endif //PV511_T31_ABSTRACT_ADMIN_H
