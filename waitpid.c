#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
  int childpid = fork();

  if (!childpid) {
    printf(1, "in child process\n");
  }
  if (childpid) {
    printf(1, "in parent process\n");
    waitpid(childpid, 0, 0);
  }

  exit(0);
}