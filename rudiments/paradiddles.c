#include <stdio.h>

int
main()
{
	int	bar, c, i, l, p, w, mask, bitl, shift, pn, ln;

	for (w = 1; w <= 2; w++) {
		mask = (1<<4*w) - 1;
		shift = 4 * w;
		bitl = (8 * w) - 1;
		for (l = 0; l <= mask; l++) {
			p = (~l) & mask;
			bar = (l << shift) | p;
			pn = ln = 0;
			for (i = bitl; i >= 0; i--) {
				if ((1 << i) & bar) {
					c = 'P';
					pn++;
				} else {
					c = 'L';
					ln++;
				}
				if ((i+1) % 4 == 0) {
					putchar(' ');
				}
				putchar(c);
			}
			printf(" Pn:%d Ln:%d\n", pn, ln);
		}
	}
}
