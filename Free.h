//
// Created by Tetiana Perederii on 04.05.2026.
//

#ifndef PV511_T31_ABSTRACT_FREE_H
#define PV511_T31_ABSTRACT_FREE_H
#include "Soft.h"

class Free:public Soft{
public:
    Free();
    Free(string name, string company);

    virtual void print()const override;
    virtual bool check() const override;
    virtual void save(ofstream& file)const override;
    virtual void load(ifstream& file) override;
    virtual string type()const override;
};



#endif //PV511_T31_ABSTRACT_FREE_H
