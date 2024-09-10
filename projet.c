#include <stdio.h>
#include <string.h>
#include <time.h>
//*les structures*//
typedef struct {
int id;
char titre[20];
char description[100];
char statut[20];
int status;
char deadline[10] ;
}taches;
//declaration des variables global
 int i;
    taches c[100];
   


//*fonction d ajouter*//
void ajoute(){
    i=0;
    int y;
    do{  printf(" __________________________________________________________________________\n");
    printf("________________________________ajouter la tache ________________________\n");
    printf("entre le titre de tache :");
    scanf(" ");
    fgets(c[i].titre,20,stdin);
    printf("entre le description de tache :");
    scanf(" ");
    fgets(c[i].description,100,stdin);   
    printf("entre le deadline :");
    scanf("%s",c[i].deadline);
    printf("le status de tache :\n");
    printf("si le tache a realiser click 1 |\n");
    printf("si le tache en cours de realisation click 2 |\n");
    printf("si le tache  finalisee click 3 |\n");
    printf("entre :");
    scanf("%d",&c[i].status);
     i++;
    c[i].id=i;
     printf(" __________________________________________________________________________\n");
printf("si tu veux entre un notre un autre tache click 1 si non click 0 ");
scanf("%d",&y);
 printf(" __________________________________________________________________________\n");
}while(y==1);
}
//*affichage//
void affichage(){
int w;
for(w=0;w<i;w++){
    printf("_________________________________________________________\n");
    printf("---------------le ID :%d :--------------------------------\n",w+1);
    printf("le titre :%s",c[w].titre);
    printf("le description :%s",c[w].description);
    printf("le  deadline :%S",c[w].deadline);
    if(c[w].status==1)
    printf("le statut à realiser  \n");
    else if(c[w].status==2)
    printf("le statut en cours de realisation \n");
    else if(c[w].status==3)
    printf("le statut  finalisee \n");
   
}
}
int main(){
    //*declaration des variables 
    int x,q;
     time_t now=time(NULL);
    char *string_now = ctime(&now);
    //* 1 |menu principal*// 
    menu:
    printf(" __________________________________________________%s\n",string_now);
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
ajoute();
printf(" __________________________________________________________________________\n");
 printf("pour retourne  au menu click 1 \n");
 printf("pour finir le programme click 0\n");
 printf("entre : ");
 scanf("%d",&q);
 if(q==1)
 goto menu;
 else 
 break;
case 2:
affichage();
printf(" __________________________________________________________________________\n");
 printf("pour retourne  au menu click 1 \n");
 printf("pour finir le programme click 0\n");
 printf("entre : ");
 scanf("%d",&q);
 if(q==1)
 goto menu;
 else 
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