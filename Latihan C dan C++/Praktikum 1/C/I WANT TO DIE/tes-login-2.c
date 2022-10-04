#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define FIELD_SIZE 25
#define length(array) ( sizeof (array) / sizeof (array)[i] )

struct account {
  char *id;
  char *password;
};

static struct account accounts[] = {
  { "11user1", "Pwd1" },
  { "12user2", "Pwd2" },
  { "13user3", "Pwd3" }
};

int is_authorized ( const char *uid, const char *pwd )
{
  int i;

  for ( i = 0; i < length ( accounts ); i++ ) {
    if ( stricmp ( uid, accounts[i].id ) == 0 && 
         strcmp ( pwd, accounts[i].password ) ==0 ) 
    {
      return 1;
    }
  }

  return 0;
}

void get_password ( char *pwd, int size )
{
  int i = 0;
  int ch;

  while ( i < size - 1 && ( ch = getch() ) != '\r' ) {
    if ( ch == '\b' ) {
      /* Don't run off the front end of the array */
      if ( i != 0 ) {
        printf ( "\b%c\b", ' ' );
        --i;
      }
    }
    else {
      putchar ( '*' );
      pwd[i++] = (char)ch;
    }
  }

  pwd[i] = '\0';
}

int main ( void )
{
  char uid[FIELD_SIZE];
  char pwd[FIELD_SIZE];

  printf ( "User ID: " );
  fflush ( stdout );

  if ( fgets ( uid, sizeof uid, stdin ) != NULL ) {
    char *newline = strchr ( uid, '\n' );

    /* Trim the newline if it's present */
    if ( newline != NULL )
      *newline = '\0';

    printf ( "Password: " );
    fflush ( stdout );

    get_password ( pwd, sizeof pwd );

    if ( is_authorized ( uid, pwd ) )
      printf("\n\n\t\tUSER AUTHENTICATED\n");
    else
      printf("\n\n\t\tINVALID USER\n");
  }

  return 0;
}