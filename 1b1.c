#include <stdio.h>
#include <math.h>

   int main() 
{
  double nota1, nota2, nota3, media;

  scanf("%lf %lf %lf", &nota1, &nota2, &nota3);

  media = (nota1 + nota2 + nota3) / 3.0;

  if (media >= 6.0){
   printf("MEDIA = %.2f",media);
   printf("APROVADO \n");
}
   else if (media < 6.00){
   printf("MEDIA = %.2f\n", media);
   printf("REPROVADO \n");
}
return 0;
}  