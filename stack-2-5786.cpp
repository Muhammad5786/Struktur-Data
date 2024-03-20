#include <iostream>

using namespace std;

const int MAX_STACK = 5;

struct Stack
{
	int top;
	int data[MAX_STACK];
};

// prototype fungsi stack
void inisialisasi();
void push (int data);
void pop();
void clear();
bool isEmpty();
bool isEmpty();
void print();

Stack stack;

int main()
{
	// inisialisasi
	inisialisasi();
	
	int pilihanMenu;
	int data;
	
	do
	{
		cout << ">>> PILIHAN MENU STACK <<<" << endl << endl;
		cout << "1. Menambah item stack\n";
		cout << "2. Menghapus item stack\n";
		cout << "3. Menampilkan item stack\n";
		cout << "4. Mengosongkan stack\n";
		cout << "5. Selesai" << endl;
		cout << "Sisa size = [" << stack.top +1 << "/" << MAX_STACK << "]" << endl << endl;
		
		cout << "Masukkan pilihan Anda : "; cin >> pilihanMenu;
		cout << endl;
		
		switch (pilihanMenu)
		{
			case 1:
				push(data);
				break;
				
			case 2:
				pop();
				break;
			
			case 3:
				print();
				break;
				
			case 4:
				clear();
				break;
		}
	}
	while (pilihanMenu != 5);
	
	cout << endl;
	
	system("pause");
	return 0;
}


void inisialisasi()
{
	stack.top = -1;
}

void push(int data)
{
	if(stack.top < MAX_STACK -1)
	{
		cout << "Menambahkan data: "; cin >> data;
		stack.top++;
		stack.data[stack.top] = data;
		cout << "Data berhasil ditambahkan\n" << endl;
	}
	else
	{
		cout << "Stack sudah penuh !!!\n" << endl;
	}

}

void pop()
{
	cout << "Data " << stack.data[stack.top] << " sudah dihapus" << endl << endl;
	stack.top--;
}

void clear()
{
	stack.top = -1;
	cout << "Stack sudah dikosongkan" << endl << endl;
}

bool isEmpty()
{
	return (stack.top == -1);
}

bool isFull()
{
	return (stack.top >= (MAX_STACK - 1));
}

void print()
{
	if (isEmpty())
	{
		cout << "Stack masih kosong!!!\n" << endl;
	}
	cout << "Isi stack :" << endl << endl;
	for (int i = stack.top; i >= 0; i--)
	{
		cout << stack.data[i] << endl;
	}
	cout << endl << endl;
}
