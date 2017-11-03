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
  while(entry = readdir(d)){
    if(entry->d_type = DT_DIR){
      printf("%s\n", entry->d_name);

    }
  }
  closedir(d);
}

void print_regular_files(char * filename){
  DIR * d = opendir(filename);
  struct dirent *entry;
  printf("Regular Files: \n");
  while(entry = readdir(d)){
    if(entry->d_type = DT_REG){
      printf("%s\n", entry->d_name);
    }
  }
  closedir(d);
}

void print_size(char *filename){
  struct stat buffer;
  stat(filename, &buffer);
  printf("Size of Directory: %ld bytes\n", buffer.st_size);
}

int main(){
  print_size(".");
  print_directories(".");
  print_regular_files(".");

}
