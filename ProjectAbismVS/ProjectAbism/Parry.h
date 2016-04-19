#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int validar(int, int);//Funcion para validar respuestas.
int attack(int, int, int, int);//Funcion de ataque basico
/*int ability_mp(int, int, int);//Funcion que retorna el mana restante.
int ability_dmg(int, int, int);//funcion que retorna el daño de la habilidad.
void ability_txt(int, int, int);//Funcion que narra el resultado de la habilidad.*/
void hud(int, int);

int validar(int op, int r){
    switch(op){
    case 2:
        switch(r){
    case 1:
        break;
    case 2:
        break;
    default:
        r=0;
        }
    break;
    case 3:
        switch(r){
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    default:
        r=0;
        }
    break;
    case 4:
        switch(r){
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    default:
        r=0;
        }
    break;
    case 5:
        switch(r){
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    default:
        r=0;
        }
    break;
    }
    if(r==0){
        printf("Oops, opcion incorrecta, elige correctamente.\n");
        system("pause");
    }
        return r;
}

int attack(int pom, int str, int ev, int rd){//pom es "personaje o monstruo", p=1, m=0
    int dmg, x;
    dmg=rand()%20+11;
    x=dmg*str/10;//str=fuerza
    dmg+=x;
    rd/=100;//rd=resistencia al daño (armadura)
    x=dmg*rd;
    dmg-=x;
    x=rand()%50+ev;//ev=evasion
    if(pom==1){
        if(x>=50){
            printf("Increible, la criatura fue capaz de esquivar tu ataque,\nno le hiciste ningun tipo de daño.\n");
            dmg=0;
        }
        else
            printf("Tu golpe le ha causado %d de daño en la criatura.\n", dmg);
    }
    else
        if(x>=50){
            printf("Que agilidad!, la criatura no fue capaz de asestar el golpe,\nno recibiste ningun tipo de daño.\n");
            dmg=0;
        }
        else
            printf("El golpe del enemigo te ha causado %d de daño.\n", dmg);
    system("pause");
    return dmg;
}

/*
int ability_mp(int pj, int ab, int pm){
    switch(pj){
case 1:
    switch(ab){
case 1:
    break;
case 2:
    break;
case 3:
    break;
case 4:
    break;
case 5:
    break;
    }
    break;
case 2:
    switch(ab){
case 1:
    break;
case 2:
    break;
case 3:
    break;
case 4:
    break;
case 5:
    break;
    }
    break;
case 3:
    switch(ab){
case 1:
    break;
case 2:
    break;
case 3:
    break;
case 4:
    break;
case 5:
    break;
    }
    break;
default:
    pm-=2;
    }
    return pm;
}

int ability_dmg(int pj, int ab, int ){
      switch(pj){
case 1:
    switch(ab){
case 1:
    break;
case 2:
    break;
case 3:
    break;
case 4:
    break;
case 5:
    break;
    }
    break;
case 2:
    switch(ab){
case 1:
    break;
case 2:
    break;
case 3:
    break;
case 4:
    break;
case 5:
    break;
    }
    break;
case 3:
    switch(ab){
case 1:
    break;
case 2:
    break;
case 3:
    break;
case 4:
    break;
case 5:
    break;
    }
    break;
default:
    pm-=2;
    }
    return pm;
}

int ability_txt(int, int, int){
}*/

void hud(int hp, int mp){
    printf ("\t\tPV: %d\t\tPM: %d\n", hp, mp);
}