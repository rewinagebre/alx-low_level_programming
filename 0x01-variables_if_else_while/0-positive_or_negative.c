#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
<<<<<<< HEAD
   * main - Prints a random number and states whether
   *        it is positive, negative, or zero.

 * Return: Always 0.
 */
=======
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *        *
* Return: Always 0.
*/
>>>>>>> 183d1e17818a447a1aab408ec1f0f242c9a21c3b
int main(void)
{
	int n;

	srand(time(0));
<<<<<<< HEAD
n = rand() - RAND_MAX / 2;

if (n > 0)
printf("%d is positive\n", n);
=======
<<<<<<< HEAD
	n = rand() - RAND_MAX / 2;

if (n > 0)
	printf("%d is positive\n", n);
          else if (n < 0)
		  printf("%d is negative\n", n);
                                 	else						printf("%d is zero\n", n);

					return (0);
}






=======
        n = rand() - RAND_MAX / 2;
       
	if (n > 0)
                printf("%d is positive\n", n);
>>>>>>> aed1988209ae977a016a457114c0ccb7b39bf656
	else if (n < 0)
		printf("%d is negative\n", n);
	else
	printf("%d is zero\n", n);

	return (0);
}
>>>>>>> 183d1e17818a447a1aab408ec1f0f242c9a21c3b
