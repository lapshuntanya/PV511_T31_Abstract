//
// Created by Tetiana Perederii on 04.05.2026.
//

#ifndef PV511_T31_ABSTRACT_SHAREWARE_H
#define PV511_T31_ABSTRACT_SHAREWARE_H

#include "Soft.h"
#include "Date.h"

class Shareware:public Soft {
protected:
    Date install;
    int days;
public:
    Shareware();
    Shareware(string name, string company, Date install, int days);

    Date getInstall()const;
    int getDays()const;

    virtual void print()const override;
    virtual bool check()const override;
    virtual void save(ofstream&file)const override;
    virtual void load(ifstream&file) override;
    virtual string type()const override;

};



#endif //PV511_T31_ABSTRACT_SHAREWARE_H
