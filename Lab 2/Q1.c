// For loop:
#include <stdio.h>
int main() {
    int num, i;
    printf("Enter any Number:\t");
    scanf("%d",&num);
    for(i=1; i <= 2*num; i=i+2)
        printf("%d ",i);
    return 0;
}
// While loop:
#include <stdio.h>
int main() {
    int num, i=1;
    printf("Enter any Number:\t");
    scanf("%d",&num);
    while(i <= 2*num){
        printf("%d ",i);
        i=i+2;
    }
    return 0;
}
// Do-While loop:
#include <stdio.h>
int main() {
    int num, i=1;
    printf("Enter any Number:\t");
    scanf("%d",&num);
    do{
        printf("%d ",i);
        i=i+2;
    }while(i <= 2*num);
    return 0;
}
