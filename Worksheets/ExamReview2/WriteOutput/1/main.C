/*  Exam Review 2 - Question WO-1: Aes and Things
 *      
 */
#include "class.h"
int main() {
    A *a = new A();
    
    f1(*a);
    f2(*a);
    A b;
    b = f3(*a);
    b = f4(b);
    delete a;
    A c = f5(b);
}
