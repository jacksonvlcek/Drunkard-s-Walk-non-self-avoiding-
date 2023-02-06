/*This program studies the Drunkard's Walk problem, which focuses on the relationship between 
 * the number of steps in a simulation and the displacement from the origin. Steps can either be
 * up, down, left, or right, all with an equal random chance of occuring. This program represents
 * the simple version of this problem, as self-avoidance of the moving object's pathway is not 
 * considered here.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
	
	int steps;
	printf("How many steps for this simulation?: ");
	scanf("%d",&steps);
	
	int hfinal = 0, vfinal = 0, num;
	
	srand(time(NULL));
	
	for (int i=0;i<steps;i++) {
		num = rand() % 100;
		//left
		if (num < 25) {
			hfinal = hfinal - 1;
		}
		//right
		if (num >= 25 && num < 50) {
			hfinal = hfinal + 1;
		}
		//up
		if (num >= 50 && num < 75) {
			vfinal = vfinal + 1;
		}
		//down
		if (num >=75 && num <= 100) {
			vfinal = vfinal - 1;
		}
	}
	
	float dpmt = sqrt(pow(hfinal,2) + pow(vfinal,2));
	
	printf("\n\nThe horizontal value was %d and the vertical value was %d",hfinal,vfinal);
	printf("\n\nThe displacement was %f",dpmt);
	
	return 0;
}

