
#include<stdio.h>
#define n 10
void main() {
int queue[n], choice = 1, front = 0, rear = 0, i, j = 1, max = n;
printf("Queue using Array");
printf("\n1.Enqueue \n2.Dequeue \n3.Display \n4.Exit");
while (choice) {
printf("\nEnter Your Choice:");
scanf("%d", & choice);
switch (choice) {
case 1:
if (rear == max)
printf("\n Queue is Full");
else {
printf("\nEnter a element to Enqueue:", j++);
scanf("%d", & queue[rear++]);
}
break;
case 2:
if (front == rear) {
printf("\n Queue is empty");
}

else {
printf("\n Dequeue element is %d", queue[front++]);
max++;
}
break;
case 3:
printf("\n Queue Elements are:\n");
if (front == rear)
printf("\n Queue is Empty");
else {
for (i = front; i < rear; i++) {
printf("%d", queue[i]);
printf("\n");
}
break;
case 4:
exit(0);
default: printf("Wrong Choice! Please see the options and try again");
}
}
}
getch();
}
