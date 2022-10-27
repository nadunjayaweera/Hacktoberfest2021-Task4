#include <studio.h>


int main()
{
    bool swap;
    int n=5,j;
    int arr[5]={58,89,71,35,6};
    
    
    do{
        swap=false;
        // Defining temp array;
        int temp[5];
        for(j=0;j<n;j++)
        {
            // remove ;
            if (arr[j]>arr[j-1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                // Adding ;
                arr[j+1]=temp;
                swap=false;
            }
        }
    }while(swap);
    
    for(m=0;m<n;m--)
        {
            printf("%s ",arr[l]);
        }
}
