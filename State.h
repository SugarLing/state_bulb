#include<iostream>

using std::cin;
using std::cout;
using std::endl;


class State;

class BulbState{
    public:
        virtual void change(State *target);
        virtual ~BulbState(){}
};

class BulbOn:public BulbState{
    public:
        void change(State *target);
        static BulbOn* getinstance(){
            if(instance)
                instance=new BulbOn();
            return instance;
        }
    private:
        BulbOn(){}
        static BulbOn* instance;
};

class BulbOff:public BulbState{
    public:
        void change(State *target);
        static BulbOff* getinstance(){
            if(instance)
                instance=new BulbOff();
            return instance;
        }
    private:
        BulbOff(){}
        static BulbOff* instance;
};

class State{
    public:
        State();
        void change_t();
        void setState(BulbState* newstate);
    private:
        BulbState* cur_state;
};