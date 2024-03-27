#include <iostream>

using namespace std;

const int MAX_QUEUE = 5;

struct Queue
{
	int depan;
	int belakang;
	int data[MAX_QUEUE];
};

Queue queue;

void inisialisasi();
void enqueue();
void dequeue();
void clear();
bool isEmpty();
bool isFull();
void print();


int main()
{
	inisialisasi();
	
	int pilihanMenu;
	
	do
	{
		cout << ">>> PILIHAN MENU QUEUE <<<" << endl << endl;
		cout << "1. Menambah item queue\n";
		cout << "2. Menghapus item queue\n";
		cout << "3. Menampilkan item queue\n";
		cout << "4. Mengosongkan queue\n";
		cout << "5. Selesai" << endl << endl;
		
		cout << "Masukkan pilihan Anda : "; cin >> pilihanMenu;
		cout << endl;
		
		switch (pilihanMenu)
		{
			case 1:
				enqueue();
				break;
				
			case 2:
				dequeue();
				break;
			
			case 3:
				print();
				break;
			case 4:
				clear();
				break;
			default:
				cout << "Menu yang Anda pilih tidka terdaftar!!! Silakan coba lagi!\n";
		}
	}
	while (pilihanMenu != 5);
	cout << endl;
	
	system("pause");
	return 0;
}

void inisialisasi()
{
	queue.depan = queue.belakang = -1;
}

void enqueue()
{
	if(queue.belakang < MAX_QUEUE -1)
	{
	int data;
	cout << "Masukkan data : "; cin >> data;
	queue.depan = 0;
	queue.belakang++;
	queue.data[queue.belakang] = data;
	cout << "Data berhasil ditambahkan" << endl << endl;
	}
	else
	{
		cout << "Queue sudah penuh!!!\n" << endl;
	}

}

void dequeue()
{
	if (isEmpty())
	{
		cout << "Queue masih kosong!!!\n" << endl;
	}
	else
	{
	cout <<	"Data " << queue.data[queue.depan] << " sudah dihapus" << endl << endl;
	for (int i = queue.depan; i <= queue.belakang; i++)
	{
		queue.data[i] = queue.data[i + 1];
	}
	queue.belakang--;
	}
}

void clear()
{
	if (isEmpty())
	{
		cout << "Queue masih kosong!!!\n" << endl;
	}
	else
	{
	queue.depan = queue.belakang = -1;
	cout << "Queue sudah dikosongkan" << endl << endl;
	}
}

bool isEmpty()
{
	return (queue.belakang == -1);
}

bool isFull()
{
	return (queue.belakang >= (MAX_QUEUE - 1));
}

void print()
{
	if (isEmpty())
	{
		cout << "Queue masih kosong!!!\n" << endl;
	}
	else
	{
	cout << "Isi queue : ";
	for (int i = queue.depan; i <= queue.belakang; i++)
	{
		cout << queue.data[i] << " ";
	}
	cout << endl << endl;
	}
}
