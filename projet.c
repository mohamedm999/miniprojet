// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 
struct contact {
        char nom[200] ;
        char email[200];
        char phone[200];
};


int main() {
    
    struct contact cont[40] ;
    int n ;
    printf("entre le nombre des contacts :");
    scanf("%d",&n);

    for(int i=0 ; i<n ; i++){
         printf("entre les information du contact %d :\n",i);
         printf("sisair le nom :");
         scanf("%s",cont[i].nom);
         printf("sisair le nombre de telephone :");
         scanf("%s",cont[i].phone);
         printf("sisair l'email :");
         scanf("%s",cont[i].email);
    };
    
    char modifycont[100] ;
    
    printf("Voulez-vous modifier un contact? \n  si vous souhaitez modifier entre le nom de un contact:");
    scanf("%s",modifycont);
    
    int found = 0;
    while(!found){
        
        for (int i = 0; i < n; i++) {
         if(strcmp(cont[i].nom, modifycont) == 0){
             
             found = 1 ;
        
            printf("Modifier les informations pour %s:\n", cont[i].nom);
            printf("Saisir le nouveau nom: ");
            scanf("%s", cont[i].nom);
            printf("Saisir le nouveau numéro de téléphone: ");
            scanf("%s", cont[i].phone);
            printf("Saisir le nouvel email: ");
            scanf("%s", cont[i].email);
            
            printf("your data modified succeffuly");
         }else{
             printf("contact not found pleas try again :");
             scanf("%s",modifycont);
         }
        }
}

    // printf("votre contacts est :");
    // for(int i=0 ; i<n ; i++){
    //      printf("le nom : %s",cont[i].nom);
    //      printf("le nombre de telephone est : %s",cont[i].phone);
    //      printf("le email est : %s",cont[i].nom);
    // };
    

    return 0;
}