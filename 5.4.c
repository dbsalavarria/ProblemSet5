/* Create a file named ProblemSet5.4.c.
Create an enum that holds keywords: Ionian, Dorian, Lydian, Mixolydian, Aeolian, and Locrian.
Create a structure named Scale. The structure should hold an array of the Note structure from the class and 
an unsigned char named rootNote.
Prepare seven instances of the Scale data type, each corresponding to Ionian, Dorian, etc. 
with appropriate pitch intervals (i.e., for Ionian, it should be: 0,2,4,5,7,9,11,12, including the octave.).
Ask the users to input which scale mode they want. 
Since we are using enum constants, 
the input from the user should be in integer data type.
Ask the users also to input a root note in 
integer data type.
Once the scale and root note is chosen, 
iterate the appropriate array of Notes to print the result of root note + pitch value for each note.*/

#include <stdio.h>

enum Modes{Ionian, Dorian, Phrygian, Lydian, Mixolydian, Aeolian, Locrian};

struct Note
{
    unsigned char pitch;
    unsigned char velocity;
    unsigned char channel;
};
typedef struct Note Note;

struct Scale
{
    unsigned char rootNote;
    Note notes[8];
};
typedef struct Scale Scale;

int main()
{
    Scale ionian, dorian, phrygian, lydian, mixolydian, aeolian, locrian;
    ionian.notes[0].pitch = 0;
    ionian.notes[1].pitch = 2;
    ionian.notes[2].pitch = 4;
    ionian.notes[3].pitch = 5;
    ionian.notes[4].pitch = 7;
    ionian.notes[5].pitch = 9;
    ionian.notes[6].pitch = 11;
    ionian.notes[7].pitch = 12;

    dorian.notes[0].pitch = 0;
    dorian.notes[1].pitch = 2;
    dorian.notes[2].pitch = 3;
    dorian.notes[3].pitch = 5;
    dorian.notes[4].pitch = 7;
    dorian.notes[5].pitch = 9;
    dorian.notes[6].pitch = 10;
    dorian.notes[7].pitch = 12;

    phrygian.notes[0].pitch = 0;
    phrygian.notes[1].pitch = 1;
    phrygian.notes[2].pitch = 3;
    phrygian.notes[3].pitch = 5;
    phrygian.notes[4].pitch = 7;
    phrygian.notes[5].pitch = 8;
    phrygian.notes[6].pitch = 10;
    phrygian.notes[7].pitch = 12;

    lydian.notes[0].pitch = 0;
    lydian.notes[1].pitch = 2;
    lydian.notes[2].pitch = 4;
    lydian.notes[3].pitch = 6;
    lydian.notes[4].pitch = 7;
    lydian.notes[5].pitch = 9;
    lydian.notes[6].pitch = 11;
    lydian.notes[7].pitch = 12;

    mixolydian.notes[0].pitch = 0;
    mixolydian.notes[1].pitch = 2;
    mixolydian.notes[2].pitch = 4;
    mixolydian.notes[3].pitch = 5;
    mixolydian.notes[4].pitch = 7;
    mixolydian.notes[5].pitch = 9;
    mixolydian.notes[6].pitch = 10;
    mixolydian.notes[7].pitch = 12;

    aeolian.notes[0].pitch = 0;
    aeolian.notes[1].pitch = 2;
    aeolian.notes[2].pitch = 3;
    aeolian.notes[3].pitch = 5;
    aeolian.notes[4].pitch = 7;
    aeolian.notes[5].pitch = 8;
    aeolian.notes[6].pitch = 10;
    aeolian.notes[7].pitch = 12;

    locrian.notes[0].pitch = 0;
    locrian.notes[1].pitch = 1;
    locrian.notes[2].pitch = 3;
    locrian.notes[3].pitch = 5;
    locrian.notes[4].pitch = 6;
    locrian.notes[5].pitch = 8;
    locrian.notes[6].pitch = 10;
    locrian.notes[7].pitch = 12;

    int mode = 0;
    int rootNote = 0;
    printf("Choose a mode: ");
    scanf("%d", &mode);
    printf("Choose a root note: ");
    scanf("%d", &rootNote);

    switch (mode)
    {
    case Ionian:
        for (int i = 0; i < 8; i++)
        {
            int n = rootNote + ionian.notes[i].pitch;
            printf("%d ", n);
        }
        printf("\n");  
        break;

    case Dorian:
        for (int i = 0; i < 8; i++)
        {
            int n = rootNote + dorian.notes[i].pitch;
            printf("%d ", n);
        }
        printf("\n");
        break;

    case Phrygian:
        for (int i = 0; i < 8; i++)
        {
            int n = rootNote + phrygian.notes[i].pitch;
            printf("%d ", n);
        }
        printf("\n");
        break;

    case Lydian:
        for (int i = 0; i < 8; i++)
        {
            int n = rootNote + lydian.notes[i].pitch;
            printf("%d ", n);
        }
        printf("\n");
        break;

    case Mixolydian:
        for (int i = 0; i < 8; i++)
        {
            int n = rootNote + mixolydian.notes[i].pitch;
            printf("%d ", n);
        } 
        printf("\n");
        break;
    
    case Aeolian:
        for (int i = 0; i < 8; i++)
        {
            int n = rootNote + aeolian.notes[i].pitch;
            printf("%d ", n);
        } 
        printf("\n");
        break;
    
    case Locrian:
        for (int i = 0; i < 8; i++)
        {
            int n = rootNote + locrian.notes[i].pitch;
            printf("%d ", n);
        } 
        printf("\n");
        break;
      
    default:
        break;
    }
}

