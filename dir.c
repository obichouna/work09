#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <unistd.h>


void print_directories(char * filename){
  DIR * d = opendir(filename);
  struct dirent *entry;
  printf("Directories: \n");
  while((entry = readdir(d))){
    if(entry->d_type == DT_DIR){
      printf("%s\n", entry->d_name);

    }
  }
  closedir(d);
}

void print_regular_files(char * filename){
  DIR * d = opendir(filename);
  struct dirent *entry;
  printf("Regular Files: \n");
  while((entry = readdir(d))){
    if(entry->d_type == DT_REG){
      printf("%s\n", entry->d_name);
    }
  }
  closedir(d);
}

void print_size(char *filename){
  int size = 0;
  DIR *d = opendir(filename);
  struct dirent *entry;
  while((entry = readdir(d))){
    if(entry->d_type == DT_REG){
      struct stat buffer;
      stat(entry->d_name, &buffer);
      size += buffer.st_size;
    }
  }
  closedir(d);
  printf("Size of Directory: %d bytes\n", size);
}

int main(){
  print_size(".");
  print_directories(".");
  print_regular_files(".");
  
}
