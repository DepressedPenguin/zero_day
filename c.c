#include <stdio.h>

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

int main(){

    char commit[200];


system("COLOR 0A");
printf("\n\t\t\t\t\t%sBY : https://github.com/DepressedPenguin \n",KYEL);
printf("\n\t\t\t\t\t      %sCOMMIT TIME SCRIPT BETA V.0 -h \n",KGRN);
printf("\n\t\t\t\t\t%sCOMMIT This tool replaces 3 cmd in one cmd \n",KGRN);

//Commit >

printf("\n\n%s |Commit : ",KWHT);
scanf(" %[^\n]s", commit);




char command[200];
sprintf(command, "git add .");
system(command);
sprintf(command, "git commit -m \"%s\"", commit);
system(command);
sprintf(command, "git push");
system(command);
printf("\nDone!");



}

