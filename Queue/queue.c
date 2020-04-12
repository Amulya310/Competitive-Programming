#include<stdio.h>
#include<stdlib.h>
#define MAX 1000
int queue_array[MAX];
int priority_queue[MAX];
int rear=-1,prear=-1;
int front=-1,pfront=-1;

void Enqueue()
{
	int item;
	if(rear>=MAX-1)
	{
		printf("queue overflow\n");
	}
	else
	{
		if(front == -1)
			front=0;
		
		scanf("%d",&item);
		rear=rear+1;
		queue_array[rear]=item;
	}

}
void Dequeue()
{
	if(front == -1 || front >rear)
	{
		printf("queue underflow\n");
	}
	else
	{
		front = front+1;
	}
}
void Display()
{
	int i;
	if (front == -1)
	{
		printf("queue is empty\n");
	}
	else
	{
		
		for(i=front;i<=rear;i++)
		{
			printf("%d ",queue_array[i]);
		}
		printf("\n");
	}
}
void check_priority(int data)
{
	int i,j;
	for(i=0;i<=prear;i++)
	{
		if(data<=priority_queue[i])
		{
			for(j=prear+1;j>i;j--)
			{
				priority_queue[j]= priority_queue[j-1];
				//printf("vale of j is %d\n",j);
			}
			priority_queue[i]=data;
			//printf("1.parray is at i is %d\n",priority_queue[i]);
			return;
		}
	}
	priority_queue[i]=data;
}
void Priority_Enqueue(int data)
{
	if(prear>=MAX-1)
	{
		printf("priority_queue overflow\n");
	}
	if((prear==-1)&& (pfront ==-1))
	{
		pfront++;  prear++;
		priority_queue[prear] = data;
		return;
	}
	else
	{
		check_priority(data);
		prear++;
	}
}
void Priority_Dequeue(int data)
{
	int i;
	if(pfront ==-1 && prear ==-1)
	{
		printf("priority_queue is empty\n");
		return;
	}
	for(i=0;i<=prear;i++)
	{
		if(data == priority_queue[i])
		{
			for(;i<prear;i++)
			{
				priority_queue[i]=priority_queue[i+1];
			}

			priority_queue[i] = -99;
			prear--;

			if(prear == -1)
				pfront==-1;
			return;
		}
	}
	printf("%d not found in priority_queue to delete\n",data);
}

void Pri_Display()
{
	int i;
	if(pfront == -1 && prear == -1)
	{
		printf("priority_queue is empty\n");
		return;
	}
	for(;pfront<=prear;pfront++)
	{
		printf("%d ",priority_queue[pfront]);
	}
	printf("\n");
	pfront=0;
}
int main()
{
	int n,i,choice;
	printf("enter the size of array : ");
	scanf("%d",&n);
	int x;
	printf("1.simple queue\n");
	printf("2.priority_queue\n");
	printf("3.exit\n");
	while(1)
	{

		printf("enter queue choice\n");
		scanf("%d",&x);
		switch(x)
	{

		case 1:
		{
			printf("1.Enqueue\n");
			printf("2.Dequeue\n");
			printf("3.Display\n");
			printf("4.Exit\n");
	
			while(1)
			{
				printf("enter the choice\n");
				scanf("%d",&choice);

				switch(choice)
				{
					case 1:
					printf("Insert the elements to the queue\n"); 
					for(i=0;i<n;i++)
					{
						Enqueue();
					}
					break;
					case 2:
					printf("delete the front element from queue\n");
					Dequeue();
					break;
					case 3:
					printf("queue is : ");
					Display();
					break;
					case 4:
					exit(1);
					default:
					printf("enter correct choice\n");
					break;
				}
			}
		}
		break;
		case 2:
		{
			printf("1.Priority Enqueue\n");
			printf("2.Priority Dequeue\n");
			printf("3.Display\n");
			printf("4.Exit\n");
	
			while(1)
			{
				printf("enter the choice\n");
				scanf("%d",&choice);
				int data;
				switch(choice)
				{
					case 1:
					printf("Insert the elements to the priority_queue\n"); 
					for(i=0;i<n;i++)
					{
						scanf("%d",&data);
					Priority_Enqueue(data);
					}
					break;
					case 2:
					printf("delete the element from priority_queue\n");
					scanf("%d",&data);
					Priority_Dequeue(data);
					break;
					case 3:
					printf("priority_queue is : ");
					Pri_Display();
					break;
					case 4:
					exit(0);
					default:
					printf("enter correct choice\n");
					break;
				}
			}
		}
		break;
		case 3:
		exit(1);
		default:
		printf("enter correct choice\n");
		break;
	}

	}
	
}

