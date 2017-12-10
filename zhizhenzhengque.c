#include <stdio.h>
int a[100][100];
char b[23];
int main() {
	int r,c;
	scanf("%d%d",&r,&c);
	for(int i = 1 ; i <= r ; ++i)
		for(int j = 1 ; j <= c ; ++j)
			scanf("%d",&a[i][j]);
	int T;
	scanf("%d",&T);
	while(T--) {
		scanf(" %s",b);
		if(b[0]=='S' && b[1]=='R') {
			int x1,x2;
			scanf("%d%d",&x1,&x2);
			for(int i = 1 ; i <= c ; ++i) {
				int t = a[x1][i];
				a[x1][i] = a[x2][i];
				a[x2][i] = t;
			}
		}
		if(b[0]=='S' && b[1]=='C') {
			int y1,y2;
			scanf("%d%d",&y1,&y2);
			for(int i = 1 ; i <= r ; ++i) {
				int t = a[i][y1];
				a[i][y1] = a[i][y2];
				a[i][y2] = t;
			}
		}
		if(b[0]=='D' && b[1]=='R') {
			int x;
			scanf("%d",&x);
			for(int i = x ; i < r ; ++i)
				for(int j = 1 ; j <= c ; ++j)
					a[i][j] = a[i+1][j];
			r--;
		}
		if(b[0]=='D' && b[1]=='C') {
			int y;
			scanf("%d",&y);
			for(int i = y ; i < c ; ++i)
				for(int j = 1 ; j <= r ; ++j)
					a[j][i] = a[j][i+1];
			c--;
		}
		if(b[0]=='I' && b[1]=='R') {
			int x;
			scanf("%d",&x);
			for(int i = r ; i >= x ; --i)
				for(int j = 1 ; j <= c ; ++j)
					a[i+1][j] = a[i][j];
			r++;
			for(int i = 1 ; i <= c ; ++i) a[x][i] = 0;
		}
		if(b[0]=='I' && b[1]=='C') {
			int y;
			scanf("%d",&y);
			for(int i = c ; i >= y ; --i)
				for(int j = 1 ; j <= r ; ++j)
					a[j][i+1] = a[j][i];
			c++;
			for(int i = 1 ; i <= r ; ++i) a[r][y] = 0;
		}
	}
	for(int i = 1 ; i <= r ; ++i) {
		for(int j = 1 ; j <= c ; ++j) {
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
