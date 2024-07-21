#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
  int child1_pid = fork();
  if (child1_pid == 0) {
    sleep(100);
    getsiblings();
    exit(0);
  }

  int child2_pid = fork();
  if (child2_pid == 0) {
    sleep(100);
    // getsiblings();
    exit(0);
  }

  int child3_pid = fork();
  if (child3_pid == 0) {
    sleep(100);
    // getsiblings();
    exit(0);
  }

  int waitstatus;
  int waitpid;

  waitpid = wait(&waitstatus);
  waitpid = wait(&waitstatus);
  waitpid = wait(&waitstatus);

  (void)waitpid;
  
  exit(0);
}