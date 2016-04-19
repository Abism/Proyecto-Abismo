#include "Parry.h"

int main(){
    setlocale(LC_ALL, "spanish");
    srand(time(NULL));
    int n=0, r, pv_m=50, pv_pm=100, pv_p, pm_pm=50, pm_p, dmg;
    pv_p=pv_pm;pm_p=pm_pm;
    do{
    system("cls");
    printf("1.- Jugar\n2.- Como jugar\n3.- Salir\n");
    scanf("%d", &r);
    r=validar(3, r);
    }while(r==0);
    switch(r){
    case 1:
        break;
    case 2:
        do{
			do{
            system("cls");
            printf("1.-Ejemplo de Combate\n2.-Ejemplo de interaccion.\n3.-Salir\n");
            scanf("%d", &r);
			r=validar(3, r);
			}while(r==0);
            switch(r){
            case 1:
				do{
                system("cls");
                if(n==0){
                    do{
                    system("cls");
                    printf("Inicia un combate con una babosa para empezar.\n");
                    printf("Al iniciar el combate comienzas con %d de PV(Puntos de vida)\n", pv_p);
                    printf("ademas de %d de PM(Puntos de mana)\n", pm_p);
                    printf("Primero debes elegir una accion.\n");
                    printf("Personalmente recomendaria un ataque basico.\n\n");
                    printf("1.-Ataque basico\n2.-Habilidades\n3.-Objetos\n4.-Salir\n");
                    scanf("%d", &r);
                    if(r!=1){
                    printf("Oops, opcion incorrecta, elige correctamente.\n");
                    system("pause");
                    }
                    }while(r!=1);
                }
                else
                    if(n==1){
                        do{
                        system("cls");
                        hud(pv_p, pm_p);
                        printf("Parece ser que no fue muy efectivo, tal vez deberias intentar con una\n de tus habilidades.\n");
                        printf("1.-Ataque basico\n2.-Habilidades\n3.-Objetos\n4.-Salir\n");
                        scanf("%d", &r);
                        if(r!=2)
                        printf("Oops, opcion incorrecta, elige correctamente.\n");
                        }while(r!=2);
                        }
                    else
                        if(n==3){
                            do{
                            system("cls");
                            printf("Excelente, al parecer ahora si que haces daño, sin embargo creo que seria bueno curarte las heridas, utiliza uno de tus objetos.\n");
                            printf("1.-Ataque basico\n2.-Habilidades\n3.-Objetos\n4.-Salir\n");
                            scanf("%d", &r);
                            if(r!=3)
                            printf("Oops, opcion incorrecta, elige correctamente.\n");
                            }while(r!=3);
                            }
                        else
                            if(n>=4){
                                printf("Creo que con eso sera suficiente, deberias finiquitarlo ahora");
                                printf("1.-Ataque basico\n2.-Habilidades\n3.-Objetos\n4.-Salir\n");
                                scanf("%d", &r);
                            }
                switch(r){
                case 1:
                    pv_m-=attack(1,3,0,0);
                    pv_p-=attack(0,0,5,10);
                    break;
                case 2:
                    do{
                    system("cls");
                    hud(pv_p,pm_p);
                    printf("Aqui se encuentran las habilidades que podras escojer en un combate, para el tutorial solo tenemos una.\n");
                    printf("Las habilidades gastan el recurso de PM, asi que usalas con cautela.\n");
                    printf("1.-Cabezaso....2 PM\n\n2.-Salir\n");
                    scanf("%d", &r);
                    if(r!=1)
                    printf("Oops, opcion incorrecta, elige correctamente.\n");
                    }while(r!=1);
                    //te quedaste aqui
                    break;
                case 3:
                    break;
                case 4:
                    break;
                }
                n++;
                }while(pv_m>0);
				}
                break;
        }while(r==3);
        break;
    case 3:
        printf("Adios.\n");
        break;
    }
    system("pause>null");
    return 0;
}
