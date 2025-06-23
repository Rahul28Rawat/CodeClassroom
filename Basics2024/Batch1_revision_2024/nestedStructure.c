#include<stdio.h>

struct pokemon{
    int attack;
    int defense;
    int speed;
};

struct legendaryPokemon{ 
    struct pokemon p;
    int specialAttack;
    int specialDefense;
};


int main() {

    struct pokemon pikachu;
    pikachu.attack = 85;
    pikachu.defense = 60;
    pikachu.speed = 95;

    struct pokemon snorlax;
    snorlax.attack = 110;
    snorlax.defense = 90;
    snorlax.speed = 30;

    struct legendaryPokemon mewtwo;
    mewtwo.specialAttack=150;
    mewtwo.specialDefense=110;
    mewtwo.p.attack=100;
    mewtwo.p.defense=90;
    mewtwo.p.speed=140;

    return 0;
}