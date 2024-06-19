#include "main.h"

int main(void)
{
    print_gifts("Digimon v2 Xf", "Ripstik G", "Web Shooters", NULL);

    /** test NULL item in list ends print
     * REMEMBER: radioactive gifts are not safe for children
     */
    print_gifts("Golden Ticket", "Chocolate Coins", NULL, "Barrel of Radioactive waste");
    printf("Santa must have forgotten the radioactive waste on your list.\n\n");
    
    /** test NULL as first argument */
    print_gifts(NULL);

    /** test your willingness to continue */
    print_gifts("Glowing ORB", "A Literal Call to Adventure", "*the phone rings*", NULL);
    printf("\nMerry Christmas.\nYa filthy animal.\n");
    printf("\n         -Nathan\n\n");
   return 0;
}
