#include <stdio.h>

int main(int argc, char* args[])
{

    
    
    printf("%3s, %6s\n","F","C"); //prints header for table, F is first since 
                                  //we are converting fahr to celsius

    for(int fahr = 300; fahr >= 0; fahr = fahr - 20)
    {

        //celsius is equal to the formula in the third argument, which implicitly
        //gives us a float
        printf("%3d, %6.1f \n",fahr, (fahr - 32)*(5.0/9.0));
    }
    return 0;
}