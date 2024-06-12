#include <iostream>
using namespace std;

int main()
{
    int i, j, jumlah_vertex, jumlah_edge, sumber, tujuan;
    int matrix[10][10];
    string nama_vertex[10];
    
    cout << "================GRAPH================\n";
    cout << "Menu Graph:\n";
    cout << "1. Undirected Graph\n";
    cout << "2. Directed Graph\n";
    cout << "3. Weighted Graph\n";
    cout << "4. Selesai\n";
    cout << "-------------------------------------\n";
    cout << "Masukkan pihilah Anda: ";
    
    int pilihan;
    cin >> pilihan;
    
    switch (pilihan)
    {
    	case 1:
    		cout << "====================Undirected Graph====================\n";
    		break;
    	case 2:
    		cout << "=====================Directed Graph======================\n";
    		break;
    	case 3:
    		cout << "=====================Wighted Graph=======================\n";
    		break;
    	case 4:
    		system("pause");
    		cout << "Keluar dari program";
			return 0;
		default:
			cout << "Pilihan tidak valid\n";
			return 0;
	}
    
    cout << "\nJumlah_vertex : ";
    cin >> jumlah_vertex;
    cout << "Jumlah_edge   : ";
    cin >> jumlah_edge;

   	cout << "---------------------------------------------------------" << endl;
	for (int i = 1; i <= jumlah_vertex; i++)
		{
		cout << "Nama Vertex - [" << i << "]: ";
		cin >> nama_vertex[i];
		}
	cout << "---------------------------------------------------------" << endl;
	for (int i = 1; i <= jumlah_vertex; i++)
	{
		for (int j = 1; j <= jumlah_vertex; j++)
		{
		matrix[i][j] = 0;
		}
	}
	
	for (int i = 1; i <= jumlah_edge; i++)
	{
		cout << "Vertex Sumber: ";
		cin >> sumber;
		cout << "Vertex Tujuan: ";
		cin >> tujuan;
		if (pilihan == 3)
		{
			int weight;
			cout << "Weight: "; cin >>
			weight; matrix[sumber][tujuan] =
			weight;
		}
		else
		{
			matrix[sumber][tujuan] = 1;
			if (pilihan == 1)
		{
			matrix[tujuan][sumber] = 1;
		}
	}
}
cout << "\nGaris yang dapat dibentuk: ";
for (int i = 1; i <= jumlah_vertex; i++) {
for (int j = 1; j <= jumlah_vertex; j++) {
if (matrix[i][j] != 0) {
cout << nama_vertex[i] << nama_vertex[j] << ", ";
}
}
}
cout << endl;
if (pilihan == 3) {
cout << "============= Weighted Graph ============\n";
cout << "-------------------------------------------------------\n";
for (int i = 1; i <= jumlah_vertex; i++) {
for (int j = 1; j <= jumlah_vertex; j++) {
if (matrix[i][j] != 0) {
cout << "Simpul " << nama_vertex[i]; cout << " Dengan Simpul " <<

nama_vertex[j]; cout << " : " << matrix[i][j] << endl;
}
}
}
int total_jarak = 0;
for (int i = 1; i <= jumlah_vertex; i++) {
for (int j = 1; j <= jumlah_vertex; j++) {
if (matrix[i][j] != 0) {
total_jarak += matrix[i][j];
}
}
}

cout << "\nJarak panjang: " << total_jarak << endl;
cout << "-------------------------------------------------------\n";
}
main();
return 0;
}



