#include <stdio.h>
int main()
//program that converts meters to cm, in,feet, km
{
    float cm,m,in,feet,km;
    printf ("Enter a value in meters: \n");
    scanf ("%f",&m);
    cm=100*m;
    in=39.3701*m;
    feet=3.28084*m;
    km=0.001*m;
    printf ("The given value in centimeters is: %.4f\n",cm);
    printf ("The given value in inches is: %.4f\n",in);
    printf ("The given value in feet is: %.4f\n",feet);
    printf ("The given value in kilometers is: %.4f\n",km);
	return 0;
}