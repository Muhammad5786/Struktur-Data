#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *next, *prev;
};

Node *head = NULL, *tail = NULL,
*print, *del, *newNode;

bool isEmpty();
void insertNode (int data );
void deleteFromFront();
void printNode();

int main()
{
	char ulang;
	int pilihan, data;
    
    while (true)
    {
    	cout << "-------------------------------" << endl;
        cout << "DOUBLE LINKED LIST NON CIRCULAR" << endl;
        cout << "-------------------------------" << endl;
        cout << endl;
        cout << "Menu: " << endl;
        cout << "1. Menambahkan Node" << endl;
        cout << "2. Menghapus Node dari depan" << endl;
        cout << "3. Menampilkan Node" << endl;
        cout << "4. Keluar" << endl;
        cout << "-------------------------------" << endl;
        
        cout << endl;
        
        cout << "Masukkan Pilihan anda: "; cin >> pilihan;
        
        switch (pilihan)
        {
            case 1:
                cout << "Masukkan data: "; cin >> data;
                insertNode(data);
                break;
            case 2:
                deleteFromFront();
                break;
            case 3:
                printNode();
                break;
            case 4:
                return 0;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
        cout<<"\nKembali ke menu? (y/n)";
		cin>>ulang;
    }
    while(ulang=='y' || ulang =='Y');
    
    return 0;
}

bool isEmpty()
{
	return (head == NULL && tail == NULL);
}

void insertNode(int data)
{
 	Node *newNode = new Node;
 	newNode->data = data;
 	newNode->next = NULL;
	newNode->prev = NULL;
 	if(isEmpty()==1)
		 {
			 head = newNode;
 			head->next = NULL;
 			head->prev = NULL;
 			tail=head;
 		}
 	else
 		{
 			tail->next = newNode;
 			newNode->prev = tail;
			 tail = newNode;
		 }
}

void deleteFromFront()
{
 	int simpan;
 	if(head!=NULL)
 	{
 		if(head->next != NULL)
 		{
 			del=head;
 			simpan = head->data;
 			cout<<"\n"<<simpan<<" telah dihapus"<<endl;
 			head = head->next;
			 head->prev = NULL;
 			delete del;
	 	}
		else
		{
 			simpan = head->data;
 			cout<<"\n"<<simpan<<" telah dihapus"<<endl;
 			head = NULL;
		}
	}
 	else
	 cout<<"\nLinked List kosong penghapusan tidak dapat dilakukan" << endl;
}


void printNode()
{
	print = head;
	if(head!=NULL)
    {
    	cout << "\nIsi Linked List:" << endl;
   	 	while (print != NULL)
    	{
   	    cout << print->data << " <= => ";
       	print = print->next;
    	}
    }

    else
     cout << "\nTidak ada data dalam linked list" << endl;
        return;
    
    cout << endl;
}

