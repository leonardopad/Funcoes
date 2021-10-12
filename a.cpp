#include <stdio.h>
#include <time.h>

int dado();

int main()
{
    int num1=0, num2=0, num3=0, num4=0, num5=0, num6=0,
        count;

    for(count=0 ; count < 1000000 ; count++)
        switch( dado() )
        {
            case 1:
                num1++;
                break;
            case 2:
                num2++;
                break;
            case 3:
                num3++;
                break;
            case 4:
                num4++;
                break;
            case 5:
                num5++;
                break;
            case 6:
                num6++;
        }

    printf("Numero 1: %d -> %.2f\%%\n", num1, (num1/1000000.0)*100);
    printf("Numero 2: %d -> %.2f\%%\n", num2, (num2/1000000.0)*100);
    printf("Numero 3: %d -> %.2f\%%\n", num3, (num3/1000000.0)*100);
    printf("Numero 4: %d -> %.2f\%%\n", num4, (num4/1000000.0)*100);
    printf("Numero 5: %d -> %.2f\%%\n", num5, (num5/1000000.0)*100);
    printf("Numero 6: %d -> %.2f\%%\n", num6, (num6/1000000.0)*100);

    printf("\nTotal: %d -> %.2f\%%\n", num1+num2+num3+num4+num5+num6,
                                       (num1/1000000.0)*100+(num2/1000000.0)*100+
                                       (num3/1000000.0)*100+(num4/1000000.0)*100+
                                       (num5/1000000.0)*100+(num6/1000000.0)*100);

}

int dado()
{
    return (1 + rand()%6);
}
