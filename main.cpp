#include "Soft.h"
#include "Free.h"
#include "Shareware.h"
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
#include "Admin.h"

int main() {

   // Soft a;

    // Free b("paint", "Microsoft");
    // b.print();
    //
    // Shareware d("VS", "Microsoft", Date(), 365);
    // d.print();

    Admin itStep; //load
    itStep.addSoft( new Shareware("CLion", "JBrains", Date() -1, 3));

    itStep.showList();


    return 0;
}