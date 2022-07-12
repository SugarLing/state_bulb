#include "State.h"

State::State(){
    cur_state=BulbOff::getinstance();
}

void State::change_t(){
    cur_state->change(this);
}

void State::setState(BulbState* newstate){
    cur_state=newstate;
}


void BulbOn::change(State* target){
    target->setState(BulbOff::getinstance());
    cout<<"this bulb should turn off now"<<endl;
}

void BulbOff::change(State* target){
    target->setState(BulbOn::getinstance());
    cout<<"this bulb should turn on now"<<endl;
}