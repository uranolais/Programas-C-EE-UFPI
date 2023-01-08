//MessageBox(,"Hello","Caption",MB_OK);
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int matriz[3][3]={{1,2,3}, //ou {1,2,3,4,5,6,7,8,9}
					  {4,5,6},
					  {7,8,9}};
	for (int m=0;m<3;m+=1){
		for(int n=0;n<3;n+=1){
			printf("%i\n",matriz[m][n]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
