typedef struct{
    char *name;
    int age;
    char *address;

} user;

int login(const char *username,  const char *userpassword);
int logout();
int createuser(user user);
void printcontent();
