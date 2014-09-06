#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int
main(int argc, char *argv[])
{
  printf(1,"Hello world pid: %d\n", getpid());
  printf(1,"Add Num 1: %d\n", addnum(1));
  printf(1,"Add Num 3: %d\n", addnum(3));
  exit();
}
