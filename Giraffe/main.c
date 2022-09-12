#include <stdio.h>
#include <stdlib.h>

int main()
{
    char characterName[] = "John";
    int characterAge = 35;

    printf("There once was a man named %s\n", characterName);
    printf("%s had %d years at the time of our story.\n", characterName, characterAge);

    characterAge = 60;
    printf("%s was glad he was not %d years old.\n", characterName, characterAge);

    int diferenceInAge = characterAge - 35;
    printf("Because %s knew there is %d years between year of %d and his age.\n", characterName, diferenceInAge, characterAge);

    return 0;
}
