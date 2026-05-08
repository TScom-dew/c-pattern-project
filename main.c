
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>
// #include<windows.h>
#include "patterns.h"

/*
! How to run
firs command: gcc main.c patterns.c -o program
second command : .\program
*/


int main(){

    system("cls"); // clear the previous input
     
    int choice = 0;
    bool isexit = false;
    bool iscorrectInput = true;

    printf("=================================\n");
    printf("   Welcome to Pattern Program\n");
    printf("     Let's Generate Patterns\n");
    printf("=================================\n\n");

   
    while (!isexit){

        printf("   Pattern's name:\n1.Triangle\n2.Reverse triangle.\n3.Pascal Triangle\n4.Pyramid\n5.Diamond\n6.Butterfly\n7.Circle\n8.Square\n ");

        while(iscorrectInput){
            printf("Enter your choice: ");
            scanf("%d", &choice);
            if (choice >=1 && choice<=8) {
                iscorrectInput = false;
            }else{
                printf("\nInvalid choice. please try again!\n");
                iscorrectInput = true;
                choice = 0;
            }
            
        }

       switch (choice)
       {
       case 1:
        
           triangle();
           break;
        case 2:
          
           reverse_triangle();
           break;
        case 3:
          
           pascaltriangle();
           break;
        case 4:

            pyramid();
            break;
        case 5:

           diamond();
            break;
        case 6:

            butterfly();
            break;
        case 7:
       
            circle();
            break;
        case 8:

            square();
            break;
       
       }
       
       iscorrectInput = true;
       int n = 0;
      
       bool iscontinue = false;
       while (!iscontinue){
        printf("Do you want next pattern.\nif yes then enter 1 or no then enter 0: ");
        scanf("%d", &n);
    
        if (n == 1) {
            printf("choose Your Next pattern :\n");
            isexit = false;
            iscontinue = true;
        }
        else if (n == 0){
            printf("\n=======================================\n");
            printf("   Thanks for using the patterns program\n");
            printf("==========================================\n\n");
            isexit = true;
            iscontinue = true;   // loop stop

        }
        else{
            printf("Please enter 1 or 0 !\n");
        }
    }
        
       
    }



    return 0;
}
