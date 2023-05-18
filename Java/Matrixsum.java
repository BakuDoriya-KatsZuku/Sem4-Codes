// Add 2 Matrices of the same size
import java.util.*;

public class Matrixsum
{
	public static void main(String[] args) 
	{
		Scanner scanner = new Scanner(System.in);

		int rows = scanner.nextInt();
		int columns = scanner.nextInt();

		int[][] answer = new int[rows][columns];
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				answer[i][j] = scanner.nextInt();
			}
		}

		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				answer[i][j] = answer[i][j] + scanner.nextInt();
			}
		}

		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				System.out.print(answer[i][j] + " ");
			}
			System.out.println();
		}
	}
}