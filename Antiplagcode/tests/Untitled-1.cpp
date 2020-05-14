#include<iomanip>
#include<iostream>
#define MAXVALUE 1000000
using namespace std;

class Queue {
public:
	int* arr;
	int nowIndex;
	int sizeQueue;

	Queue(int size) {//Конструктор - вызывается при создании класса
		arr = new int[size];
		nowIndex = 0;
		for (int i = 0; i < size; i++)
			arr[i] = -1;
		sizeQueue = size;
	}

	bool isEmpty() {
		if (nowIndex == 0)
			return true;
		return false;
	}

	void add(int newValue) {
		arr[nowIndex] = newValue;
		nowIndex += 1;
	}

	int get() {
		int answer = arr[0];
		for (int i = 0; i < sizeQueue-1; i++)
			arr[i] = arr[i + 1];
		nowIndex -= 1;
		arr[nowIndex] = -1;
		return answer;
	}
};

class Stack {
public:
	int* arr;
	int nowIndex;
	int sizeStack;

	Stack(int size)
	{
		arr = new int[size];
		nowIndex = 0;
		for (int i = 0; i < size; i++)
			arr[i] = -1;
		sizeStack = size;
	}
	bool isEmpty() {
		if (nowIndex == 0)
			return true;
		return false;
	}

	void add(int newValue) {
		arr[nowIndex] = newValue;
		nowIndex += 1;
	}

	int get() {
		nowIndex -= 1;
		int answer = arr[nowIndex];
		arr[nowIndex] = -1;

		return answer;
	}

};


int main()
{
	int countNode;
	cin >> countNode;
	int b = 0;

	int* visit = new int[countNode];
	int* dist = new int[countNode];
	int* history = new int[countNode];

	int** matrix = new int* [countNode];
	for (int i = 0; i < countNode; i++) {
		matrix[i] = new int[countNode];
		visit[i] = 0;
		dist[i] = MAXVALUE;
		history[i] = -1;
	}

	for (int i = 0; i < countNode; i++)
		for (int j = 0; j < countNode; j++)
			cin >> matrix[i][j];

	int first, last;
	cin >> first >> last;
	first -= 1;
	last -= 1;
	dist[first] = 0;

	Queue queue(countNode);
	queue.add(first);

	int nowIndex = first;
	while (!queue.isEmpty())
	{
		nowIndex = queue.get();
		visit[nowIndex] = 2;
		for (int i = 0; i < countNode; i++)
		{
			if ((matrix[nowIndex][i] > 0) && (visit[i]==0))
			{
				queue.add(i);
				visit[i] = 1;
			}
			if (matrix[nowIndex][i] > 0 && dist[nowIndex] + matrix[nowIndex][i] < dist[i])
			{
				dist[i] = dist[nowIndex] + matrix[nowIndex][i];
				history[i] = nowIndex;
			}

		}
	}
	
	if (dist[last] != MAXVALUE) {
		cout << dist[last] << endl;


		int nowNode = last;
		Stack stack(countNode);
		while (history[nowNode] != -1)
		{
			stack.add(nowNode);
			nowNode = history[nowNode];
		}
		stack.add(nowNode);

		while (!stack.isEmpty())
		{
			int a = stack.get() + 1;
			cout << a << ' ';
		}
	}
	else cout << -1;
	return 0;
}