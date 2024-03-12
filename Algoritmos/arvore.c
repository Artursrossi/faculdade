#include <stdio.h>
#include <unistd.h>

int main()
{
  while(1)
  {
    printf("     * \n");
    printf("    *** \n");
    printf("   ***** \n");
    printf("    /|\\ \n\n");

    sleep(3);
  }

  return 0;
}
