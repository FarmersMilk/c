#include <stdio.h>
#define LEN 256
float addThem();
float subtractThem();
float num1, num2, sum, sum2;
int main () {
   FILE * fp;
   int i;
   char text [254];
   fp = fopen ("c:\\temp\\1.txt","w");
    for(i = 0; i < 3;i++) {
        puts("Enter text");
        fgets(text, 254, stdin);
        fprintf (fp, "%d. %s\n",i + 1, text);
}
        puts("Enter a number");
        scanf("%f", &num1);      
        puts("Enter a second number");
        scanf("%f", &num2);          
        addThem();
        subtractThem();
   fclose (fp);
   return 0;
}
float addThem() {
    FILE * fp;
    fp = fopen ("c:\\temp\\1.txt", "ab");
    sum = num1 + num2;
    fprintf (fp, "%.2f plus %.2f is %.2f\n", num1, num2, sum);   
    return sum;
}
float subtractThem() {
    FILE * fp;
    fp = fopen ("c:\\temp\\1.txt", "ab");
    sum = num1 - num2;
    fprintf (fp, "%.2f minus %.2f is %.2f\n", num1, num2, sum);   
    return sum;
}