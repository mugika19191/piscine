/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <unistd.h>
int write_number(char *number_str, char *numbers[][2]) {
    // Iterate through the numbers array to find the matching number
    int i;
    
    i = 0;
    while (numbers[i])
    {
        if (strcmp(number_str, numbers[i][0]) == 0)
        {
            printf("%s ", numbers[i][1]);
            return 1;
        }
        i++;
    }
    return 0;
}

void split(char *a,char *numbers[][2])
{
    int i;
    int j;
    int trio;
    int rest;
    char string[3];
    
    i = 0;
    j = 0;
    while (a[i])
    {
        i++;
    }
    trio = i/3;
    rest = i%3;
    if (rest>0)
    {
        while(j<rest)
        {
            string[rest - j] = a[rest-j-1];
            j++;
        }
        a = a + rest;
        write_number(&string[3-rest],numbers);
    }
    j = 0;
    i -= rest;
    while (j < i){
        string[0]=a[j];
        string[1]=a[j + 1];
        string[2]=a[j + 2];
        if (!write_number(&string[0],numbers))
        {
               
        }
        write (1,"\n",1);
        j += 3;
    }
}


int main(int argc, char *args[]) {
    char *numbers[][2] = {
        {"0", "zero"},
        {"1", "one"},
        {"2", "two"},
        {"3", "three"},
        {"4", "four"},
        {"5", "five"},
        {"6", "six"},
        {"7", "seven"},
        {"8", "eight"},
        {"9", "nine"},
        {"10", "ten"},
        {"11", "eleven"},
        {"12", "twelve"},
        {"13", "thirteen"},
        {"14", "fourteen"},
        {"15", "fifteen"},
        {"16", "sixteen"},
        {"17", "seventeen"},
        {"18", "eighteen"},
        {"19", "nineteen"},
        {"20", "twenty"},
        {"30", "thirty"},
        {"40", "forty"},
        {"50", "fifty"},
        {"60", "sixty"},
        {"70", "seventy"},
        {"80", "eighty"},
        {"90", "ninety"},
        {"100", "hundred"},
        {"1000", "thousand"},
        {"1000000", "million"},
        {"1000000000", "billion"},
        {"1000000000000", "trillion"},
        {"1000000000000000", "quadrillion"},
        {"1000000000000000000", "quintillion"},
        {"1000000000000000000000", "sextillion"},
        {"1000000000000000000000000", "septillion"},
        {"1000000000000000000000000000", "octillion"},
        {"1000000000000000000000000000000", "nonillion"},
        {"1000000000000000000000000000000000", "decillion"},
        {"1000000000000000000000000000000000000", "undecillion"}
    };
    
    split(args[1],numbers);
    if (argc > 1) {
        
    } else {
        printf("Please provide a number as an argument.\n");
    }

    return 0;
}
