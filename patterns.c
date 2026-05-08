

//? all paterns funtion
#include<stdio.h>
#include<windows.h>
#include "patterns.h"



void triangle(){ 

    // system("cls");
    int n = 0;
    printf("Enter the height of triangle: ");
    scanf("%d", &n);

    for (int  i = 0; i < n ; i++){

        printf("        "); //left se thodha spce dene ke liye

        for (int j = 0; j <=i; j++){

            printf("* ");
            // Sleep(300);// to slow the process
        }

        printf("\n");
    } 
   
}

void  reverse_triangle(){

    // system("cls");
    int n = 0;
    printf("Enter the height of reverse triangle: ");
    scanf("%d", &n);

    for (int  i = n ; i > 0 ; i--){

        printf("        "); //left se thodha spce dene ke liye
        

        for (int j = 0; j <i; j++){

            printf("*  ");
            // Sleep(300);// to slow the process
        }

        printf("\n");
    } 

    Sleep(500);

}

void pascaltriangle(){

    // system("cls");

    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);

    for(int i=0;i<=n;i++){

        printf("        "); //left se thodha spce dene ke liye
        
        for(int sp=i; sp<n; sp++){
            printf("   ");
        }

        long long value = 1;

        for(int j=0;j<=i;j++){

            printf("%6lld",value);

            // Sleep(300);// to slow the process
            value = value * (i - j) / (j + 1);
        }

        printf("\n");
    }

    Sleep(500);

    
}

void pyramid(){
   
    // system("cls");

    int n = 0;
    printf("Enter the height of pyramid : ");
    scanf("%d", &n);
    
    for (int  i = 1; i <= n; i++)
    {
        printf("        "); //left se thodha spce dene ke liye
        
        for (int sp = i; sp <= n - 1; sp++)
        {
            printf("   ");
        }

        for (int j = 1; j <=i; j++)
        {
            printf("*     ");
            // Sleep(300);// to slow the process
        }

        printf("\n");
    }

    Sleep(500);

}

 void diamond(){

    // system("cls");

    int n = 0;
    printf("Enter the height of diamond : ");
    scanf("%d", &n);
    
    for (int  i = 1; i <= n; i++)
    {
        printf("        "); //left se thodha spce dene ke liye
        
        for (int sp = i; sp <= n - 1; sp++)
        {
            printf("   ");
        }

        for (int j = 1; j <=i; j++)
        {
            printf("*     ");
            // Sleep(300);// to slow the process
        } 

        printf("\n");
    }


    for (int  i = n-1; i>=1; i--)
    {
        
        printf("        "); //left se thodha spce dene ke liye
        
        for (int sp = n; sp > i; sp--)
        {
            printf("   ");
        }

        for (int j = i; j >=1; j--)
        {
            printf("*     ");
            // Sleep(300);// to slow the process
        } 

        printf("\n");
    }

    Sleep(500);

 }


 void butterfly(){
    // system("cls");

    int n = 0;
    printf("Enter height of butterfly: ");
    scanf("%d", &n);
    
    for (int  i = 1; i < n; i++)
    {
        printf("        "); //left se thodha spce dene ke liye
        
        for (int j = 1; j <=i; j++)
        {
            printf("*");
            // Sleep(300);// to slow the process

        }

        for (int sp = i; sp <  n - 1; sp++){
            printf("  ");
            
        }

       for (int j = 1; j <=i; j++)
        {
            printf("*");
            // Sleep(300);// to slow the process

        }

        printf("\n");
    
    }

    // printf("\n");
    for (int  i = n-2; i >=1; i--)
    {
       
        printf("        "); //left se thodha spce dene ke liye

        for (int j = 1; j <=i; j++)
        {
            printf("*");
            // Sleep(300);// to slow the process

        }

        for (int sp = i; sp <  n - 1; sp++){
            printf("  ");
        }

       for (int j = 1; j <=i; j++)
        {
            printf("*");
            // Sleep(300);// to slow the process

        }

        printf("\n");
    
    }
    Sleep(500);
    
 }

void circle(){
  
    // system("cls");

    int radius = 0;
    printf("Enter the radius: ");
    scanf("%d", &radius);
    int center = radius;
    int size = radius * 2 + 1;
    for (int x = 0; x < size ; x++){

        printf("        "); //left se thodha spce dene ke liye

        for (int  y = 0; y < size ; y++)
        {
            int distance = (x-center)*(x-center) + (y-center)*(y-center);

             if(distance <= radius*radius){
                printf("*  ");
            }else{
                printf("   ");
            }
            // Sleep(300);// to slow the process

        }
        printf("\n");
    }

    Sleep(500);
   
}
void square(){

    // system("cls");
    int n = 0;
    printf("Enter side of square: ");
    scanf("%d", &n);

    for (int  i = 0; i < n; i++)
    {
        printf("        "); //left se thodha spce dene ke liye
        
        for (int j = 0; j < n; j++)
        {
            printf("*  ");
            // Sleep(300);// to slow the process
        }

        printf("\n");
    } 

    Sleep(500);
}


