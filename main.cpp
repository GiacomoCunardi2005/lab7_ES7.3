#include <iostream>

using namespace std;

int** iPP_creaMatrice(int i_Righe, int i_Colonne)
{

    int** iPP_Matrice = new int*[i_Righe];

    for (int i = 0; i < i_Righe; i++)
    {
       iPP_Matrice[i] = new int[i_Colonne];
    }

    return iPP_Matrice;
}


int** iPP_crea_serpente(int i_Righe, int i_Colonne)
{
    int i_C = 0;

    int** iPP_Matrice = iPP_creaMatrice(i_Righe, i_Colonne);

    for (int i = 0; i < i_Righe; i++)
    {
        if(i%2 != 0)
        {
            for (int j = i_Colonne - 1; j >= 0; j--)
            {
                i_C++;
                iPP_Matrice[i][j] = i_C;
            }
        }
        else
        {
            for (int j = 0; j < i_Colonne; j++)
            {
                i_C++;
                iPP_Matrice[i][j] = i_C;
            }
        }
    }

    return iPP_Matrice;
}

int main()
{
    int i_Righe;
    int i_Colonne;
    int** iPP_Matrice;
    cin >> i_Righe >> i_Colonne;

    iPP_Matrice = iPP_crea_serpente(i_Righe, i_Colonne);

    for (int i = 0; i < i_Righe; i++)
    {
        cout << endl;
        for (int j = 0; j < i_Colonne; j++)
        {
            cout << iPP_Matrice[i][j] << "    ";
        }
    }
}
