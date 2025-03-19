#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define M 1000

int main(){
FILE *file = fopen("list.txt", "r");
if (file == NULL){
	printf("Cannot open file.\n");
	return 1;
}

char line[M];
char command[M];
while (fgets(line, M, file)){
    printf(line);
	strcpy(command, "C:\\Users\\amine\\Downloads\\platform-tools-latest-windows\\platform-tools\\adb.exe shell pm uninstall --user 0 ");
	strcat(command, line);
	system(command);
}

fclose(file);
return 0;
}
