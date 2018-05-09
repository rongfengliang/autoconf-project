#include <stdio.h>
#include "userservice.h"
int main(){
  int result =login("dalong","dalong");
  printf("userlogin result %d \n",result);
  user insertuser;
  insertuser.address="beijing";
  insertuser.age=33;
  insertuser.name="dalong";
  int createresult = createuser(insertuser);
  printf("usercreate result %d\n",createresult);
  printcontent();
  return 0;
}
