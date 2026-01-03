#include <stdio.h>

int main() {
	int a, b, c, d;
	
	printf("Enter number : ");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	int m1 (a > b ? a : b );
	int m2 (m1 > c ? m1 : c ); 
	int max (m2 > d	? m2 : d );
	
	int V1 = (a == max ? -88888:a);
	int V2 = (b == max ? -88888:b);
	int V3 = (c == max ? -88888:c);
	int V4 = (d == max ? -88888:d);
	
	int s1 = (V1 > V2 ? V3 : V4);
    int s2 = (s1 > V3 ? s1 : V3);
    int secondMax = (s2 > V4 ? s2 : V4);
    
    printf("Second max: %d\n", secondMax);

    return 0;
}
