#include <stdio.h>
#include <string.h>
#include <stdint.h>

void print_array(char *arr[], int8_t cnt);
void print_array(char *arr[], int8_t cnt)
{
    int8_t i;
    printf("Number of elements is: %d\n", cnt);
    for (i = 0; i < cnt; i++)
    {
        printf("Elements of array: %s\n", arr[i]);
    }
}

void print_len(char *arr, int8_t cnt);

void print_len(char *arr, int8_t cnt)
{
    char i, l = strlen(arr);
    for (i = 0; i < cnt; i++)
    {
        printf("%d\n", strlen(arr));
    }
}

int main()
{
    char array_1[] = {1, 2, 3, 4, 5, 6, 7, 8};
    char array_2[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G'};
    char *array_3[] = {"1st", "2nd", "3rd", "4th", "5th", "6th"};
    char *array_4[] = {"Many of the designations used by manufacturers"};
    char *array_5[] = {"mm", "End of Multiple Strings Array", "simple bluetooth connection",
                       "datalogging purposes and accessing recorded data", "THE OPERATING ENVIRONMENT"};
    // int8_t *array_pointer[3]=(char*){&array_1,&array_2,&array_3};
    int8_t cnt1 = sizeof(array_1) / sizeof(array_1[0]);
    int8_t cnt2 = sizeof(array_2) / sizeof(array_2[0]);
    int8_t cnt3 = sizeof(array_3) / sizeof(array_3[0]);
    int8_t cnt4 = sizeof(array_4) / sizeof(array_4[0]);
    int8_t cnt5 = sizeof(array_5) / sizeof(array_5[0]);
    int8_t len1, len2, len3, len4, len5, i, t = 0, x = 0;
    // print_len(*array_3,cnt3);
    // print_len(*array_5,cnt5);
    // printf("Number of chars int the string#%d is: %d\n",i,t);

    /*for (i=0;i<cnt5;i++)
    {
        printf ("%s\n",array_5[i]);
    }*/

    // print_array(array_pointer[0],cnt1);
    // print_array(array_1,cnt1);
    // print_array(array_2,cnt2);
    // print_array(*array_3,cnt3);
    // print_array(*array_4,cnt4);
    print_array(array_5, cnt5);
    return 0;
}