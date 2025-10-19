//WAP to add two complex numbers by passing a structure to a function.
#include<stdio.h>
struct complex{
    int real,img;
};

void add(struct complex c1, struct complex c2){
    struct complex result;
    result.real = c1.real + c2.real;
    result.img = c1.img + c2.img;
    printf("The sum of the complex numbers is: %d + (%d)i",result.real,result.img);
}

int main(){
    struct complex c1,c2;
    printf("Enter the real part of first complex number: ");
    scanf("%d",&c1.real);
    printf("Enter the imaginary part of the first complex number: ");
    scanf("%d",&c1.img);

    printf("Enter the real part of the second complex number: ");
    scanf("%d",&c2.real);
    printf("Enter the imaginary part of the second complex number: ");
    scanf("%d",&c2.img);

    add(c1,c2);

    return 0;
}