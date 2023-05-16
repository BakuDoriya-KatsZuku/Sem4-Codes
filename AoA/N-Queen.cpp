// N-Queen
#include <bits/stdc++.h>
using namespace std;

#define int long long

int answer = 0;

void nqueen(int row, int n, int ld[], int rd[], int col[], int half, char* board)
{
	if (row == n)
	{
	    answer++;
	    cout << "Board " << answer << "\n";
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << *(board + i * n + j);
			}
			cout << "\n";
		}

		cout << "\n";
		return;
	}

	for (int i = 0; i < n; i++)
	{
		if (col[i] == 0 && ld[half - (row - i)] == 0 && rd[row + i] == 0)
		{
			*(board + row * n + i) = 'Q';
			ld[half - (row - i)] = 1;
			rd[row + i] = 1;
			col[i] = 1;
			nqueen(row + 1, n, ld, rd, col, half, board);
			*(board + row * n + i) = '.';
			ld[half - (row - i)] = 0;
			rd[row + i] = 0;
			col[i] = 0;
		}
	}
}

int32_t main(void)
{
	int n = 0;
	cout << "Size of Board: ";
	cin >> n;

    char boardm[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			boardm[i][j] = '.';
		}
	}

	int half = ((2 * n) - 1) / 2;
	int col[n];
	int rd[(2 * n) - 1];
	int ld[(2 * n) - 1];
	memset(col, 0, sizeof(col));
	memset(rd, 0, sizeof(rd));
	memset(ld, 0, sizeof(ld));
	
	char* board = &boardm[0][0];

    cout << "\nPossible Boards\n";
	nqueen(0, n, ld, rd, col, half, board);
	cout << "Number of Possible Boards: " << answer;
}

/*
Time Complexity: O(n!)
Space Complexity: O(n)
*/