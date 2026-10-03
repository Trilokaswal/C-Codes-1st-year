#include <stdio.h> 
int main (){
    int Total;
    
    printf (" Enter number of seconds: " );
    scanf  ("%d", &Total);
    
    printf (" Clock is %02d : %02d : %02d \n",
    Total/3600,
   (Total%3600)/60,
    Total%60 ) ;
    return 0;
}
