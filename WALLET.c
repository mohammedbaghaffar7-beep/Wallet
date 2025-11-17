#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



///......
// hello world
    void manage(){
    int choice;
    printf("1-Insert income\n2-insert expense\n");
    scanf("\n%d",&choice);
    if(choice==1){

        int CateNum=3;
        int cate;
        char Category[20][20]={"Household","Salary","Settings"};
    while(1){
        for(int i=0 ; i<CateNum ; i++){
            printf("%d-%s\n", i+1 , Category[i]);

        }
            printf("Or enter -1 to exit");

        scanf("%d",&cate);

    if(cate==-1){
        break;
    }
    if(cate==3){
            int set;
            while(1){
            printf("1-Add new category\n2-Save category\n3-Load category\n4-Exit to category menu");
                   scanf("%d",&set);
    if(set==-1){
        break;
}
    if(set==1){
        printf("Insert the new category:\n");
        char newcate[22];
        scanf("\%s", newcate);
        strcpy(Category[CateNum],newcate);
        CateNum++;
              }
    else if(set==2){
        FILE *file = fopen("wallet.txt" , "w");
        if(file==NULL){
            printf("Error could not open the file\n");
            break;
        }
        else {
            for(int i =0 ;i< CateNum ; i++){
                fprintf(file, "%s", Category[i]);
            }
        }
        fclose(file);
        printf("Wallet was saved successfully\n");
    }

                          }
                    }
            }
    }
    }



   int main(){
   int choice;
   printf("1-MANAGE WALLET\n2-LOAD DATA FROM THE WALLET\n");
   scanf("%d",&choice);
   if(choice==1){
    manage();
   }
//   if(choice==2){
////   Load-Data();
//   }

   return 0 ;
   }
