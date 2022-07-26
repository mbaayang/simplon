#include <stdio.h>

int main()
{
    int const Coef_Math=4, Coef_PC=4, Coef_SVT=3;
    float Notes_Math[2] , Notes_PC[2],  Notes_SVT[2];
    int i=0;
    float Som_Math=0,Moy_Math=0, Som_Pc=0,Moy_Pc=0, Som_Svt=0,Moy_Svt=0;
    char nomEleve[30];
    float moyenne=0;

    printf("Saisissez votre nom\n");
    fgets(nomEleve, 30, stdin);
   


    for ( i = 0; i <2; i++)
    {
        printf("Entrez la note Math %d\n",i+1);
        if (scanf("%f",&Notes_Math[i]) == 0 || Notes_Math[i]>20 || Notes_Math[i]<0){
            printf("La note doit être un entier compris entre 0 et 20");
            return 0;
        }
        
        Som_Math=Som_Math+Notes_Math[i];
    } 
        
    Moy_Math = (Som_Math*Coef_Math)/2;


    for (i = 0; i < 2; i++)
    {
        printf("Entrez la note SVT %d\n",i+1);
        if (scanf("%f",&Notes_SVT[i]) == 0 || Notes_SVT[i]>20 || Notes_SVT[i]<0){
            printf("La note doit être un entier compris entre 0 et 20");
            return 0;
        }


        Som_Svt=Som_Svt+Notes_SVT[i];
    }

    Moy_Svt = (Som_Svt*Coef_SVT)/2;

        
    for ( i = 0; i < 2; i++)
    {
        printf("Entrez la note PC %d\n",i+1);
        if (scanf("%f",&Notes_PC[i]) == 0 || Notes_PC[i]>20 || Notes_PC[i]<0){
            printf("La note doit être un entier compris entre 0 et 20");
            return 0;
        }

        Som_Pc=Som_Pc+Notes_PC[i];
    }
   
    Moy_Pc = (Som_Pc*Coef_PC)/2;


    moyenne = (Moy_Math+Moy_Pc+Moy_Svt)/11;
    printf("%s votre moyenne est: %2.lf\n", nomEleve,moyenne);


    if (moyenne<10)
    {
        printf("Mediocre\n\n");
    } else if (moyenne==10)
    {
        printf("Passable\n\n");
    }else if (moyenne>=12 && moyenne<=14)
    {
        printf("Très bien\n\n");

    }else
        printf("Excellent\n\n");
 
    return 0;
}