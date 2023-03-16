
//Roots-Quadratic Eqn Another Method

#include <stdio.h>
#include <math.h>

int main()
{
    int flag;
    float a, b, c, root1, root2, imaginary, discriminant;

    printf("Enter values of a, b, c of quadratic equation (aX^2 + bX + c): ");
    scanf("%f%f%f", &a, &b, &c);

    discriminant = (b * b) - (4 * a * c);
    if(discriminant>0){
        flag=0;
    }
    else if(discriminant==0){
        flag=1;
    }
    else{
        flag=2;
    }
    switch(flag)
    {
        case 0:
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Two distinct and real roots exists: %.2f and %.2f", 
                    root1, root2);
            break;
        case 1:
            root1 = root2 = -b / (2 * a);
            printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);
            break;
        case 2:
            root1 = root2 = -b / (2 * a);
            imaginary = sqrt(-discriminant) / (2 * a);
            printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f", root1, imaginary, root2, imaginary);
            break;
    }

    return 0;
}