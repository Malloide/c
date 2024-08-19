 #include <stdio.h>

 int main ()  {
   int numero, original, invertido = 0, digito;

   printf("ingrese un numero cualquiera: \t");
   scanf("%d", &numero);

   original = numero; 

   while (numero > 0)
   {
      digito  = numero % 10;
      invertido = invertido * 10 + digito;
      numero = numero / 10;
   }
   
   if (numero == invertido)
   {
      printf("%d es un numero capicua\n", original);
   }else {
      printf("%d no es un numero capicua\n", original);
   }
   return 0;
 }