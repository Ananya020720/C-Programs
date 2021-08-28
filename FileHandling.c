#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp, *fp1;
    char ch, fname[30], newch[500];
    int i=0, j, COUNT=0;
    printf("Enter the filename with extension: ");
    gets(fname);
    fp = fopen(fname, "r");
    if(!fp)
    {
        printf("Error in opening the file...\nExiting...");
        getch();
        return 0;
    }
    printf("\nThe original content is:\n\n");
    ch = getc(fp);
    while(ch != EOF)
    {
        COUNT++;
        putchar(ch);
        newch[i] = ch;
        i++;
        ch = getc(fp);
    }
    printf("\n\n\n");
    printf("The content in reverse order is:\n\n");
    for(j=(COUNT-1); j>=0; j--)
    {
        ch = newch[j];
        printf("%c", ch);
    }
    printf("\n");
    printf("Enter the filename to open for writing \n");
    scanf("%s", fname);

    // Open another file for writing

    fp1 = fopen(fname, "w");
    if (fp1 == NULL)
    {
        printf("Cannot open file %s \n", fname);
        exit(0);
    }

    ch = fgetc(fp);
    while (ch != EOF)
    {
        fputc(ch, fp1);
        ch = fgetc(fp);
    }

    printf("\nContents copied to %s", fname);

    getch();
    return 0;
}
