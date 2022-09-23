#include <stdio.h>
#include <stdlib.h>

int main()
{
    char characterName[] = "John";
    int characterAge = 35;
    const int CONSTANT_VAR = 1;

    printf("There once was a man named %s\n", characterName);
    printf("%s had %d years at the time of our story.\n", characterName, characterAge);

    characterAge = 60;
    printf("%s was glad he was not %d years old.\n", characterName, characterAge);

    int diferenceInAge = characterAge - 35;
    printf("Because %s knew there is %d years between year of %d and his age.\n", characterName, diferenceInAge, characterAge);
    printf("%s was wise in the ways of science so he also knew %d years has little over %d days he has at his disposal.\n", characterName, diferenceInAge, diferenceInAge * 365);

    /* This is my coment  */
    /* This is my coment  */
    return 0;
}
