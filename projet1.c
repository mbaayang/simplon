#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Fonction pour vérifier la reponse de l'utilisateur
int verif(char reponse[30])
{
    int compteur=0; /*Déclarations d'un compteur pour compter la longeur de la chaine 
    de caractère saisie par l'utilisateur*/
    for (int i = 0; i < strlen(reponse); i++) //Verifie pour chaque caractère saisie par l'utilisateur
    {
        if (reponse[i]>='0'&& reponse[i] <='9') //Si chaque caractère saisie par l'utilisateur est compris entre 0 et 9
        {
            compteur++; //On incrémente de 1 le compteur
        }
        
    }
        if (compteur == strlen(reponse))
        {
            return 1;  //vrai
        }
        else
        {
            return 0;  //faux
        }
}

int verif(char reponse[25]);


int main()
//Déclaration des variables
{
    int tab[3]={222,999,123};
    char reponse[30];
    int i=0;
    int cpt=0;


        printf("Veiller saisir votre code secret:\n ");
        scanf("%s", reponse);

        
        while (verif(reponse)==0)  //tant que la fonction verif(repose) est fausse demandé à saisir un nombre
        {
            if (i<3)
        {
            i++;
        }
        else{
            cpt++;
            i = 0;
            if (cpt == 3)
            {
                printf("Fin des tentatives\n");
                return 0;
            }
            if (cpt == 2)
            {
                printf("Veuillez saisir un nombre, il vous reste une tentative:\n ");
            }
            else
            {
                printf("Code incorrect, veillez saisir un nombre:\n ");
            }
            scanf("%s", reponse);
            
        }  
        }
        
    while (tab[i] != atoi(reponse)) //tant que tab[i] est different de la reponse convertit en nombre
    {
        if (i<3)
        {
            i++;
        }
        else{
            cpt++;
            i = 0;
            if (cpt == 3)
            {
                printf("Fin des tentatives\n");
                return 0;
            }
            if (cpt == 2)
            {
                printf("Code incorrect, il vous reste une tentative:\n ");
            }
            else
            {
                printf("Code incorrect, veillez reéssayer:\n ");
            }
            scanf("%s", reponse);
            
            while (verif(reponse)==0)
            {
                printf("Il vous reste une tentatives,veillez saisir un nombre:\n ");
                scanf("%s", reponse);
            }
            
        }  
    }
     printf("Code secret correct\n");
    return 0;
}