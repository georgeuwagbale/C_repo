#include <stdio.h>
#include <string.h>

void track_finder(char search_for[]);
char tracks[][80] = {
        "I left my heart in Harvard Med School",
        "Newark, Newark - a wonderful town",
        "Dancing with a Dork",
        "From here to maternity",
        "The girl from Iwo Jima"
};

int main(){
    char user_input[80];
    printf("Enter the track your searching for: ");
    fgets(user_input, 80, stdin);
    track_finder(user_input);

    return 0;
}

void track_finder(char search_for[]){
    int i;
    //int size_of_str = strlen(search_for);
    for (i=0;i<5;i++){
        if (strstr(tracks[i], search_for)){
            printf("Track %i: '%s'\n", i, tracks[i]);
        }
    }

}
