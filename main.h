#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
char **_fgetpath(void);
char *_fwhich(char **s1, char *s2);
//void ctrlc(int num);
#endif //MAIN_H
