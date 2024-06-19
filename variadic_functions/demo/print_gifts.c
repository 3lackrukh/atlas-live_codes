#include "main.h"
/** 
 * REMEMBER: anything already included in main.h
 * is now accessible to the functions in this file.
 * no need to add include statements for them here.
 */

/**
 * print_gifts- prints all args one at a time
 * until a NULL argument is seen
 * All args are assumed to be of char* type.
 * 
 * @gift1: the first char* argument to print.
 * 
 * Return: nothing.
 */

void print_gifts(const char *gift1,...)
{
    /** 
     * declare va_list variable
     * REMEMBER: this is memory allocation to
     * store all arguments passed in.
     */
    va_list santa_bag;
    /** 
     * declare a const char pointer variable.
     * REMEMBER: we're assuming const char pointers
     * are the only arguments being handed in.
     */
    const char *current_gift;

    /** 
     * use va_start macro to set start position for
     * your va_list santa_bag
     * to the first argument passed in, gift1.
     */
    va_start(santa_bag, gift1);

    /** check gift1 is not NULL */
    if (gift1 != NULL)
    {
        printf("Gifts under the tree:\n%s", gift1);
        
        /** 
         * loop logic initializes current_gift
         * to the next argument by calling the
         * va_arg macro.
         * REMEMBER: each call to va_arg iterates
         * to the NEXT argument stored in the va_list
         */
        while ((current_gift = va_arg(santa_bag, const char *))!= NULL)
        {
            printf(", %s", current_gift);
        }

        /** 
        * use the macro va_end to free memory.
        * REMEMBER: va_list santa_bag has been allocated memory.
        */
        va_end(santa_bag);
        printf("\n\n");
    }
}
