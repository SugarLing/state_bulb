#include <iostream>

#include "State.h"

using namespace std;

int main(){
    State* try_tes =new State();
    try_tes->change_t();
    try_tes->change_t();
    try_tes->change_t();

    delete try_tes; 

    return 0;
}