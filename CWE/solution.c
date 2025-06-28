#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void get_pwd(long param_1)

{
  int local_c;
  
  local_c = -1;
  while (local_c = local_c + 1, *(char *)(param_1 + local_c) != '\0') {
    *(char *)(local_c + param_1) = *(char *)(param_1 + local_c) ^ 0x24;
  }
  return;
}

int main(){
    long param_1 = 0x7b175614497b5d49;
    get_pwd(param_1);
    printf("%ld", param_1);

    return 0;
}