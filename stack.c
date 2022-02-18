#include<stdio.h>
#include<stdlib.h>
void main()
{
int stack[10],i,ch;
int ele,top=-1;
do
{


    printf("\n\nSTACK OPERATION\n");
    printf("1-Push\n");
    printf("2-Pop\n");
    printf("3-Display\n");
    printf("4-exit\n");
    printf("which operation do you want to perform:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        if(top==9)
        {
            printf("\nStack overflow");
        }
        else
        {
            printf("enter the element:");
            scanf("%d",&ele);
            stack[top+1]=ele;
            printf("element %d Pushed in stack",ele);
            top++;
        }
        break;

    case 2:
        if(top==-1)
        {
            printf("\nStack underflow");
        }
        else
        {
        printf("element %d is Poped from stack",stack[top]);
        top--;
        }

        break;

    case 3:
        if(top==-1)
        {
            printf("\nstack is empty");
        }
        else
        {
            printf("\nelements in stack are:\n");
            for(i=top;i>=0;i--)
            {
                printf("|%d|\n",stack[i]);
            }
        }
        break;

    case 4:
        exit(0);
    }
}while(1);

}

