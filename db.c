#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int col, col1, rows;
    char tname[30], colname[20], data[20];
    printf("Enter the Table Name >");
    scanf("%s", &tname);

    strcat(tname, ".txt");

    FILE * tablename =fopen(tname, "w");

    printf("Enter the number of colums: ");
    scanf("%d", &col);
    printf("\n");
    col1=col;
    while(col)
    {
        printf("Enter the column name >");
        scanf("%s", &colname);

        fprintf(tablename, "%15s", colname);
        col--;
    }
    fprintf(tablename,"\n");
    printf("\nTable Created Successfully...");

    printf("\n\nNow Insert the Data ");
   
    printf("\n\nHow many rows??");
    scanf("%d", &rows);
    while(rows)
    {
    	for(col=col1;col;col--)
    	{
        	printf("Enter the data > ");
	        scanf("%s", &data);
    	    // fprintf(tablename, "\n", stdin);
        	fprintf(tablename, "%15s\t", data);
		}
		fprintf(tablename, "\n", data);
        rows--;
    }
    printf("Your data was inserted successfully");

}
