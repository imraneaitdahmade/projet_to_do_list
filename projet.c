#include <stdio.h>
#include <string.h>
#include <time.h>
//*les structures*//
typedef struct {
int id[100];
char titre[20];
char description[100];
char statut[20];
}taches;
 int i;
    taches c[100];
//*fonction d ajouter*//
void ajoute(){
    int y;

    do{  printf(" __________________________________________________________________________\n");
    printf("________________________________ajouter la tache ________________________\n");
    printf("entre le titre de tache ;");
    scanf("%s",&c[i].titre);
    printf("entre le description de tache :");
    scanf("%s",c[i].description);
    
printf("si tu veux entre un notre un autre tache click 1 ");
scanf("%d",&y);
}while(y==1);
}
  
int main(){
    //*declaration des variables 
    int x;
    //* 1 |menu principal*// 
    printf(" __________________________________________________________________________\n");
    printf(" _________________________________  to do list ____________________________\n");
    printf(" 1)ajouter des taches                           2)affichage des taches      \n \n ");
    printf("3)trier les taches                             4)recherche des taches      \n \n ");
    printf("5)modification des taches                       6)la suppression  des taches\n\n");
    printf(" __________________________________________________________________________\n");
    printf(" __________________________________________________________________________\n");
    //*finir le menu principal

    printf("boujour user entre le numero correspond a le service \n");
    printf("entre :");
    scanf("%d",&x);

    switch(x){
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
case 6:
break;
    }
}