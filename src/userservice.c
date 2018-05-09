#include "userservice.h"
#include <string.h> 
#include <curl/curl.h>
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
    if(user.age>10){
        return 1;
    }
    return 0;
}

void printcontent(){
    CURL *curl;
    CURLcode res;
    /* In windows, this will init the winsock stuff */
    curl_global_init(CURL_GLOBAL_ALL);
    /* get a curl handle */
    curl = curl_easy_init();
    if (curl) {
        /* First set the URL that is about to receive our POST. This URL can
           just as well be a https:// URL if that is what should receive the
           data. */
        curl_easy_setopt(curl, CURLOPT_URL, "http://www.cnblogs.com/rongfengliang");
        /* Now specify the POST data */
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, "name=akagi201&project=curl");

        /* Perform the request, res will get the return code */
        res = curl_easy_perform(curl);
        /* Check for errors */
        if (res != CURLE_OK) {
            fprintf(stderr, "curl_easy_perform() failed: %s\n",
                    curl_easy_strerror(res));
        }

        /* always cleanup */
        curl_easy_cleanup(curl);
    }
    curl_global_cleanup();
}