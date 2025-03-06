#include <string>
#include <vector>
#include <random>

enum whatTemper {
    ANGRY,
    SAD,
    HAPPY,
    REALLY_ANGRY,
    REALLY_SAD,
    REALLY_HAPPY,
    NEUTRAL,
};

enum whatMood{
    GOOD,
    BAD,
    OK,
    REALLY_GOOD,
    REALLY_BAD,

};


class InitialCondition {
    public:
    double valueHealth; // MAX: 100, MIN: 0. Init ?
    double valueHygiene; // MAX 100, MIN 0. Init ?
    double valueEnergy; // MAX 100, MIN 0. Init ?
    whatTemper temper; // Enum of different tempers;
    whatMood mood; // Enum of different moods; 
    double valueEgo; // MAX 100, MIN 0. Init ?
    double valueIntelligence; // MAX 100, MIN 0. Init ?

    InitialCondition() {

        valueHealth = 100; 
    

    }

};

const InitialCondition init;

class Kindle {       

    std::string kindle;
    Health health;
    Hygiene hygiene;
    Mood mood;
    Enegry energy;
    Temper temper;
    Ego ego;
    doubleelligence doubleelligence;
    BoundryCondition bound;


    public:
    // pass
    void Life(){
        while(health.value){

        }   
    }

};



// Awared Conditions 

class Health{ 
    public:
        double value;
        Health() : value(init.valueHealth) {}        

        void FRAMEUPDATEUPDATE(){

        }
};

class Hygiene{
    public:
        double value;
        Hygiene() : value(init.valueHygiene) {}

        void FRAMEUPDATE(){

        }
};

class Mood{
    public:
        whatMood value;
        Mood() : value(init.mood) {}

        void FRAMEUPDATE(){

        }
};

class Enegry{
    public:
        double value;
        Enegry() : value(init.valueEnergy) {}

        void FRAMEUPDATE(){

        }
};

class Temper{
    public:
        whatTemper value;
        Temper() : value(init.temper) {}

        void FRAMEUPDATE(){

        }
};

class Ego{
    public:
        double value;
        Ego() : value(init.valueEgo) {}

        void FRAMEUPDATE(){

        }
};

class doubleelligence{
    public:
        double value;
        doubleelligence() : value(init.valueIntelligence) {}
        void FRAMEUPDATE(){

        }
};

class BoundryCondition  {

};
