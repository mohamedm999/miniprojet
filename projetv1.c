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
         printf("entre les information du contact %d :\n",i+1);
         printf("sisair le nom :");
         scanf("%s",cont[i].nom);
         printf("sisair le nombre de telephone :");
         scanf("%s",cont[i].phone);
         printf("sisair l'email :");
         scanf("%s",cont[i].email);
    };
    
    
    
    int found = 0;
    
    char modifycont[100] ;
    
    printf("Voulez-vous modifier un contact? \n  si vous souhaitez modifier entre le nom de un contact:");
    scanf("%s",modifycont);
    
    while(!found){
        
        for (int i = 0; i < n; i++) {
         if(strcmp(cont[i].nom, modifycont) == 0){
             
             found = 1 ;
        
            printf("Modifier les informations pour %s:\n", cont[i].nom);
            printf("Saisir le nouveau nom de contact %d: ",i+1);
            scanf("%s", cont[i].nom);
            printf("Saisir le nouveau numéro de téléphone d'un contact %d: ",i+1);
            scanf("%s", cont[i].phone);
            printf("Saisir le nouvel email de contact %d: ",i+1);
            scanf("%s", cont[i].email);
            
            printf("your data modified succeffuly \n");
         }
          
         }
          if(!found){
              printf("contact not found pleas try again :");
              scanf("%s",modifycont);
          }
          
}
char deletecont[100] ;
    
    printf("Voulez-vous suprimer un contact? \n  si vous souhaitez suprimer entre le nom de un contact:");
    scanf("%s",deletecont);
    
    found = 0 ;
    
    while(!found){
        
        for(int i=0 ; i<n ;i++){
            if(strcmp(cont[i].nom,deletecont)==0){
                found=1;
                 for(int j=i ; j<n-1 ; j++){
                     cont[j]=cont[j+1];
                 }
                 
                  printf("your data deleted succeffuly \n");
                 n-- ;

            }
            
        }
        if(!found){
            printf("contact not found pleas try again :");
            scanf("%s",deletecont);
        }
    }
    printf("la nouvelle liste de votre contacts est :\n");
    for(int i=0 ; i<n ; i++){
         printf("le nom de contact %d est : %s \n",i+1,cont[i].nom);
         printf("le nombre de telephone d'un  contact %d est : %s \n",i+1,cont[i].phone);
         printf("le email de contact %d est : %s \n",i+1,cont[i].email);
    };
    
    char findcont[100] ;
    
    printf("Voulez-vous rechercher un contact? \n  si vous souhaitez rechercher entre le nom de un contact:");
    scanf("%s \n",findcont);
    
    found = 0 ;
    
    
    while(!found){
        for(int i=0 ; i<n ; i++){
            if(strcmp(cont[i].nom,findcont)==0){
                found=1 ;
                
                printf("le nom de votre contact est %s:\n",cont[i].nom);
                printf("le numero de telephone  de votre contact est %s:\n",cont[i].phone);
                printf("le email de votre contact est %s:",cont[i].email);
                
            }
        }
        if(!found){
            printf("contact not found please try again :");
            scanf("%s \n",findcont);
            
        }
    }

    return 0;
}