#include <stdio.h>
int main (){
    float score1, score2, score3;

    printf ("First subject Score: ")  ; scanf  ("%f", &score1);
    printf ("Second subject Score: ") ; scanf  ("%f", &score2);
    printf ("third subject Score: ")  ; scanf  ("%f", &score3);

if ((score1 >= score2 && score1 >= score3) && (score2 >= score3))
     printf ("average of the best two is %.2f", (score1 + score2)/2 ); 
     
else if ((score2 >= score3 && score2 >= score1) && (score3 >= score1))
     printf ("average of the best two is %.2f", (score2 + score3)/2 );

else 
     printf ("average of the best two is %.2f", (score1 + score3)/2);
     
return 0;  }
