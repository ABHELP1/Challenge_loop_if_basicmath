#include<stdio.h>
#include<math.h>
int first, second,n;
double root,sd,above,under,x2,allroot,half,x1;
int main() {
	printf("Input :");
	scanf("%d%d",&first,&second);
	if (first > second) {
		printf("Output :\n");
		for (first; first >= second; second++) {
			printf("%d ",second);
			n += 1;
			root = root + second;
			x1 = x1 + (first * first);
		}
		half = root / n;
		printf("\n");
		printf("Average = ");
			printf("%.1lf\n", half);
		x2 = pow(root, 2.0);
		above = (n * x1) - x2;
		under = n * (n - 1);
		allroot = sqrt(above / under);
		printf("S.D. = ");
			printf("%.2lf",allroot);
	}
	else if (first < second) {
		printf("Output :\n");
		for (first; first <= second; first++) {
			printf("%d ", first);
			n += 1;
			root = root + first;
			x1 = x1 + (first * first);
		}
		half = root / n;
		printf("\n");
		printf("Average = ");
		printf("%.1lf\n", half);
		x2 = pow(root, 2.0);
		above = (n * x1) - x2;
		under = n * (n - 1);
		allroot = sqrt(above / under);
		printf("S.D. = ");
		printf("%.2lf", allroot);
	}
	else {
		printf("Output :\n");
		printf("%d ", second);
		printf("\n");
		printf("Average = ");
		printf("%d ", second);
		printf("\n");
		printf("S.D. = 0");
	}
	return 0;
}