/*
 *This program is made up to count the number of words in a string.
 *
 * Author: Soraya Maqueda
 * Date: 18.10.2018
 * Contact: soraya_maqueda@hotmail.com
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char string[250]; //Variable for saving the string
    int words = 0; //Counter of words (initialize at 0)

    //Here I get the string from the user
    printf("Write in here: ");
    fgets(string, sizeof(string),stdin);

    //Scanning of the string from left to right
    for (int w = 0; w <= strlen(string); w++){
        //As long as the character at 'w' position is not a space or a tab, the counter for words will increment by one.
        if (isspace(string[w]) && string[w] != '\t'){
            words++;
            //But if the loop where to continue, then the counter will increment by each character that is analyzed.
            //That is why we state that the value of 'w' (in control of the position) will only increment when a sapce
            //or a tab is found. This so the outer cycle will not make the word counter increment per char.
            while (isspace(string[w]) && string[w] != '\t'){
                w++;
            }
        }
    }

    //Here I let the user know the number of word in the string.
    printf("There are %i words on this string.", words);

    return 0;
}