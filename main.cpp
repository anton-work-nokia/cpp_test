#include <iostream> 
#include "modules\Printable.h"
#include "modules\Entity.h"

void PrintObject(const Printable &p)
{
    std::cout << p.getName() << std::endl;
}

int main() 
{
    Entity e = Entity("Test12");
    PrintObject(e);
}