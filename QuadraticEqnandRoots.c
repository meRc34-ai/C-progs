
//*** PROGRAM TO FIND ROOTS OF THE QUADRATIC EQUATION ***

#include<math.h>
#include<stdio.h>
int main(){
    double a, b, c, discrim, root_1, root_2, realP, imgP; //discrim is discriminant, realP is the real part of imaginary root, imgP is the imaginary part of imaginary root
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discrim = b*b - 4*a*c;

    //for real and distinct roots
    if(discrim > 0){
        root_1 = (-b + sqrt(discrim))/2*a;
        root_2 = (-b - sqrt(discrim))/2*a;
        printf("1st root is %.1f and 2nd root is %.1f", root_1, root_2); 
    }

    //for real and equal roots
    else if(discrim == 0){
        root_1 = root_2 = -b/(2*a);
        printf("root1 = root2 = %.1f", root_2);
    }

    //for imaginary roots
    else{
        realP = -b/(2*a);
        imgP = sqrt(-discrim)/(2*a);
        printf("1st root is %.1f + %.1f and 2nd root is %.1f - %.1f", realP, imgP, realP, imgP);
    }

    return 0;
}