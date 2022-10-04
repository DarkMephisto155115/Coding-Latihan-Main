#include <stdio.h>
/* card structure definition */
struct card
{
    int face; // define pointer face
}; // end structure card

typedef struct card Card ;

/* prototype */
void passByReference(Card *c) ;

int main(void)
{
    Card c ;
    c.face = 1 ;
    Card *cptr = &c ; // pointer to Card c

    printf("The value of c before function passing = %d\n", c.face);
    printf("The value of cptr before function = %d\n",cptr->face);

    passByReference(cptr);

    printf("The value of c after function passing = %d\n", c.face);

    return 0 ; // successfully ran program
}

void passByReference(Card *c)
{
    c->face = 4;
}