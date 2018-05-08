#include "userservice.h"
#include <string.h> 
int login(const char *username, const char *userpassword){
    if (strcmp(username,"dalong")==0&&strcmp(userpassword,"dalong")==0){
        return 11111;
    }
    return 0;
}
int logout(){
    return 1;
}
int createuser(user user){
    return 1;
}