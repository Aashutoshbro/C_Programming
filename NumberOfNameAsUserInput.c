//WAP to print Hello world as per user input number
//e.g if you replace Hello world in line:12 with Your name your name will get print the n time you enter number

#include <stdio.h>

int i,n;

int main() {
printf(" how many time you want to display\n"); 
scanf("%d",&n);
    for(i=1;i<=n;i++){
    printf("Hello world\n");
    }
    return 0;
}
