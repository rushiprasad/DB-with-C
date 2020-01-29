#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int col, rows;
    char tname[30], colname[20], data[20];
    printf("Enter the Table Name >");
    scanf("%s", &tname);

    strcat(tname, ".txt");

    FILE * tablename =fopen(tname, "a");

    printf("Enter the number of colums: ");
    scanf("%d", &col);
    printf("\n");
    while(col)
    {
        printf("Enter the column name >");
        scanf("%s", &colname);

        fprintf(tablename, "%15s", colname);
        col--;
    }
    printf("\nTable Created Successfully...");

    printf("\n\nNow Insert the Data ");
   
    printf("\n\nHow many rows??");
    scanf("%d", &rows);
    while(rows+2)
    {
        printf("Enter the data > ");
        scanf("%s", &data);
        // fprintf(tablename, "\n", stdin);
        fprintf(tablename, "%10s\t", data);

        rows--;
    }
    printf("Your data was inserted successfully");

}

