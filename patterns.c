

//? all paterns funtion
#include<stdio.h>
#include "patterns.h"

#ifdef _WIN32
    #include<windows.h>
     #define SLEEP_MS(ms)  Sleep(ms)
#else
    #include<unistd.h>
    #define SLEEP_MS(ms)  usleep((ms), 10000)
#endif

void triangle(){ 

    int n = 0;
    printf("Enter the height of triangle: ");
    scanf("%d", &n);

    for (int  i = 0; i < n ; i++){

        printf("        "); //left se thodha spce dene ke liye

        for (int j = 0; j <=i; j++){

            printf("* ");
            
        }

        printf("\n");
    } 
   
}

void  reverse_triangle(){

    int n = 0;
    printf("Enter the height of reverse triangle: ");
    scanf("%d", &n);

    for (int  i = n ; i > 0 ; i--){

        printf("        "); //left se thodha spce dene ke liye
        

        for (int j = 0; j <i; j++){

            printf("*  ");
           
        }

        printf("\n");
    } 

    SLEEP_MS(500);

}

void pascaltriangle(){


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

        
            value = value * (i - j) / (j + 1);
        }

        printf("\n");
    }

    SLEEP_MS(500);

    
}

void pyramid(){
   
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
        
        }

        printf("\n");
    }

    SLEEP_MS(500);

}

 void diamond(){


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
           
        } 

        printf("\n");
    }

    SLEEP_MS(500);

 }


 void butterfly(){

    int n = 0;
    printf("Enter height of butterfly: ");
    scanf("%d", &n);
    
    for (int  i = 1; i < n; i++)
    {
        printf("        "); //left se thodha spce dene ke liye
        
        for (int j = 1; j <=i; j++)
        {
            printf("*");
        }

        for (int sp = i; sp <  n - 1; sp++){
            printf("  ");
            
        }

       for (int j = 1; j <=i; j++)
        {
            printf("*");
           
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
                    }

        for (int sp = i; sp <  n - 1; sp++){
            printf("  ");
        }

       for (int j = 1; j <=i; j++)
        {
            printf("*");
          
        }

        printf("\n");
    
    }
    SLEEP_MS(500);
    
 }

void circle(){
  

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
        }
        printf("\n");
    }

    SLEEP_MS(500);
   
}
void square(){

    int n = 0;
    printf("Enter side of square: ");
    scanf("%d", &n);

    for (int  i = 0; i < n; i++)
    {
        printf("        "); //left se thodha spce dene ke liye
        
        for (int j = 0; j < n; j++)
        {
            printf("*  ");
        }

        printf("\n");
    } 

    SLEEP_MS(500);
}


