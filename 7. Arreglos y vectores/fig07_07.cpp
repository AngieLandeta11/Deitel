//Una vraiable consyante se debe inicializar
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    const int x; //Error x se debe inicializar

    x=7; //Error no se puede modificar una variable const

    return 0;
}