#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
	FILE *fp;
	FILE *fp1;

	fp = fopen(argv[1], "r");
	fp1 = fopen("list.txt","w");

	for(int i=0;i<700000;i++){
		char H[100];
		fgets(H,100,fp);
		char *h;
		strtok(H,",");
		h =strtok(NULL,",");
		printf("%s\n",h);
		fputs(h,fp1);
	}
	fclose(fp);
	fclose(fp1);
}
