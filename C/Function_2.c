#include <stdio.h>
#define SIZE 5

void func1();
void func2(int);
void display();

int items[SIZE], front = -1, rear=-1;

int main() {
	//bagian 1
	func2(2);
	func2(3);
	func2(6);
	func2(5);
	func2(4);
	display();
	
	//Bagian 2
	func1();
	display();
	
	return 0;
}

void func1(){
	if (front == -1)
		printf ("\n Array is Empty\n");
	else {
		printf ("\n");
		front++;
	if (front > rear) {
		front = -1;
		rear = -1;
	}
}
}

void func2(int value){
	if (rear == SIZE - 1)
		printf ("\n Array is Full");
	else {
		if (front == -1)
			front = 0;
	rear ++;
	items[rear] = value;
	}
}

void display(){
	if (rear == -1)
		printf ("Array is Empyty");
	else {
		int i;
		for (i = front; i <= rear; i++)
			printf("%d ", items[i]);
	}
	printf("\n");
}
