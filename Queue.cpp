//Revaldo Relinsyah
//G1A021060

#include <iostream>
#define MAX 15
using namespace std;

struct Queue {
	int head; 
	int tail; 
	int data[MAX];
}
Q;

bool isFull() {
	return Q.tail == MAX;
}

bool isEmpty() {
	return Q.tail == 0;
}

void printQueue() {
	if (isEmpty()) {
    cout << "Antrian kosong"<<endl;
	}
	else {
		cout << "Antrian : ";
		for (int i = Q.head; i < Q.tail; i++)
			cout << Q.data[i] << ((Q.tail-1 == i) ? "" : ",");
		cout << endl;
  }
}

void addqueue() {
	if (isFull())
	{
		cout << "Antrian penuh!"<<endl;
	}
	else {
		int data;
		cout << "Masukkan Data : ";cin >> data;
		Q.data[Q.tail] = data;
		Q.tail++;
		cout << "Data ditambahkan\n";
		printQueue();
	}
}

void deletequeue() {
	if (isEmpty())
	{
		cout << "Antrian kosong"<<endl;
	}
	else{
		cout << "Mengambil data \"" << Q.data[Q.head] << "\"..." << endl;
		for (int i = Q.head; i < Q.tail; i++)
			Q.data[i] = Q.data[i + 1];
		Q.tail--;
		printQueue();
	}
}

int main() {
	int choose;
	do
	{
		cout << "    >>>Queue<<<\n"
			<< " 1. Menambahkan Data \n"
			<< " 2. Mengambil Data\n"
			<< " 3. Selesai \n\n"
			<< "----------------------------------\n"
			<< "Pilih Menu : "; cin >> choose;
		switch (choose)
		{
		case 1:
			addqueue();
			break;
		case 2:
			deletequeue();
			break;
		default:
			cout << "Pilihan tidak ada";
			break;
		}
	} while (choose !=3);
	return 0;
}
