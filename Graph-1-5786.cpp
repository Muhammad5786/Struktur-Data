#include <iostream>
using namespace std;

int main()
{
    int jumlah_vertex, jumlah_edge, sumber, tujuan;
    
    cout << "Jumlah_vertex : ";
    cin >> jumlah_vertex;
    cout << "Jumlah_edge   : ";
    cin >> jumlah_edge;

    // Inisialisasi matriks adjacency dengan ukuran (jumlah_vertex+1) x (jumlah_vertex+1)
    int matrix[jumlah_vertex + 1][jumlah_vertex + 1];

    // Inisialisasi matriks dengan nol
    for (int i = 1; i <= jumlah_vertex; i++)
	{
        for (int j = 1; j <= jumlah_vertex; j++)
		{
            matrix[i][j] = 0;
        }
    }

    // Input edge dan isi matriks adjacency
    for (int i = 1; i <= jumlah_edge; i++)
	{
        cout << "simpul_asal   : ";
        cin >> sumber;
        cout << "simpul_tujuan : ";
        cin >> tujuan;
        matrix[sumber][tujuan] = 1;
        matrix[tujuan][sumber] = 1;
    }

    // Cek apakah graph terhubung
    int i = 1;
    bool nolsemua = false;

    while (i <= jumlah_vertex && nolsemua == false)
	{
        int j = 1;
        bool ketemu = false;
        while (j <= jumlah_vertex && ketemu == false)
		{
            if (matrix[i][j] == 1)
			{
                ketemu = true;
            }
			else
			{
                j++;
            }
        }
        if (ketemu == false)
		{
            nolsemua = true;
        }
		else
		{
            i++;
        }
    }

    if (nolsemua == true)
	{
        cout << "Graph tidak terhubung" << endl;
    }
	else
	{
        cout << "Graph terhubung" << endl;
    }

    return 0;
}



