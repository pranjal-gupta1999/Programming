/* static variable are automatically initialized to 0 if not initialized.
static int a= fun(); is not allowed here. only the constant are used.
static variable ek baar intialize hone baad doosri baar nahi hoga , wo apni purani value ko
intact rakhega   */
#include <stdio.h>
int main()
{  
    for(int i=0;i<=1;i++)
    {
    static int a;
    printf("%d\n",a);
    a++;
    printf("%d\n",a);
    a++;
    }
    return 0;
}
