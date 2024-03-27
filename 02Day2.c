#include <stdio.h>

int main(){
    int num;

    printf("Hi There! I have ten jokes with me. Which one would you like to hear?\n Choose a number from 1 to 10\n");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        printf("What do you call a guy who is really loud? Mike.\n");
        break;
    case 2:
        printf("Why do birds fly south in the winter? It is faster than walking\n");
        break; 
    case 3:
        printf("What did the lava say to his girlfriend? I lava you!\n");
        break; 
    case 4:
        printf("Today a man knocked on my door and asked for a small donation toward the local swimming pool. I gave him a glass of water.");
        break;
    case 5:
        printf("How do you stop a bull from charging? Cancel its credit card");
        break;
    case 6:
        printf("I told my doctor that I broke my arm in two places. He told me to stop going to those place");
        break;
    case 7:
        printf("This is your captain speaking, AND THIS IS YOUR CAPTAIN SHOUTING");
        break;
    case 8:
        printf("Evening news is where they begin with “Good evening,” and then proceed to tell you why it is not.");
        break;
    case 9:
        printf("I know they say that money talks, but all mine says is Goodbye.");
        break;
    case 10:
        printf("Most people are shocked when they find out how bad I am as an electrician");
        break;    
    default:
        printf("Enter the number between 1 to 10");
        break;
    }

    return 0;
}