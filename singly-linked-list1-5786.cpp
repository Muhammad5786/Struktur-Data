#include <iostream>

using namespace std;

struct Node 
{
	int data;
	Node *next;
};

Node *headNode = NULL;
Node *currentNode = NULL;

bool isEmpty();
void insertNode (int data );
void deleteFromFront();
void deleteFromEnd();
void deleteAll();
void printNode();

int main()
{
	int pilihan, data;
    
    while (true)
    {
        cout << ">>> PILIHAN MENU SINGLY LINKED LIST <<<" << endl;
        cout << endl;
        cout << "1. Menambah Node" << endl;
        cout << "2. Menghapus Node dari depan" << endl;
        cout << "3. Menghapus Node dari Belakang" << endl;
        cout << "4. Mengosongkan Node" << endl;
        cout << "5. Menampilkan Semua Node" << endl;
        cout << "6. Keluar" << endl;
        
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
                deleteFromEnd();
                break;
            case 4:
                deleteAll();
                break;
            case 5:
                printNode();
                break;
            case 6:
                return 0;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    }
    
    return 0;
}

bool isEmpty()
{
	return (headNode == NULL);
}
void insertNode (int data )
{
	Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
	
	if (isEmpty ())
	{
		headNode = newNode;
	}
	else
	{
		currentNode->next = newNode;
	}
	
	currentNode = newNode;
	
}
void deleteFromFront()
{
if (!isEmpty())
    {
        Node *hapusNode = headNode;
        headNode = headNode->next;
        
        delete hapusNode;
        
        cout << "Node berhasil dihapuskan" << endl << endl;
        
        if (headNode == NULL)
        {
            currentNode = NULL;
        }
    }
    else
    {
        cout << "List kosong!" << endl;
    }
}
void deleteFromEnd()
{
	if (!isEmpty())
    {
        if (headNode == currentNode)
        {
            delete headNode;
            headNode = NULL;
            currentNode = NULL;
        }
        else
        {
            Node *bantu = headNode;
            
            while (bantu->next != currentNode)
            {
                bantu = bantu->next;
            }
            
            delete currentNode;
            currentNode = bantu;
            currentNode->next = NULL;
        }
        
        cout << "Node berhasil dihapuskan" << endl << endl;
    }
    else
    {
        cout << "List kosong!" << endl;
    }
}
void deleteAll()
{
	Node *hapusNode;
    while (headNode != NULL)
    {
        hapusNode = headNode;
        headNode = headNode->next;
        delete hapusNode;
    }
    
    currentNode = NULL;
    cout << "Semua node berhasil dihapuskan" << endl << endl;

}
void printNode ()
{
	if (!isEmpty())
    {
        Node *awalNode = headNode;
        
        int i = 1;
        
        while (awalNode != NULL)
        {
            cout << "Data pada Node #" << i << " = " << awalNode->data << endl << endl;
            awalNode = awalNode->next;
            i++;
        }
    }
    else
    {
        cout << "List kosong!" << endl;
    }
}
