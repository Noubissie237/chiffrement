#include <stdio.h>
#include <string.h>

void decrypte(char *fich1, char *fich2)
{
    FILE *fichier1 , *fichier2;
    fichier1 = fopen(fich1, "r");
    fichier2 = fopen(fich2, "w");
    char pass[10];

    if (fichier1 == NULL)
    {
        printf("Erreur, le fichier %s est introuvable\n",fich1);
        return;
    }

    printf("Entrez le mot de passe du dechiffrement : ");
    scanf("%s",pass);

    char carac;
    char carac_crypte;
    int i = 0;

    while((carac = fgetc(fichier1)) != EOF)
    {
        carac_crypte = carac ^ pass[i];


        fprintf(fichier2, "%c",carac_crypte);

        if(i >= strlen(pass))
            i = 0;
        else
            i++;
    }
    
    fclose(fichier1);
    fclose(fichier2);

    printf("Dechiffrement Reussi !!!\n");
}

int main(int argc, char *argv[])
{

    int choix;

    printf("\n------------- PROGRAMME DE CRYPTOGRAPHIE -------------\n\n");

    printf("Etes vous sûr de vouloir decrypter le fichier %s ? \n",argv[1]);
    printf("\t1. Oui\n");
    printf("\t2. Annuler\n");
    printf("choix : ");
    scanf("%d",&choix);

    switch(choix)
    {
        case 1 : 

            decrypte(argv[1], argv[2]); break;
        
        case 2 : 

            printf("Dechiffrement annule !!! \n"); break;

        default : 
            printf("ERREUR : mauvaise valeur.\n");
            break;
        
    }

    printf("Sortie du programme...\n");

    return 0;
}