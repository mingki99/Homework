#include <iostream>
#include <cmath>

using namespace std;

int main()
	{
		
	
	int a;
	int b;

	int* score = new int[1000];


	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cin >> b;

		while (b >= 0 && b <= 1000)
		{
			int total = 0;

			for (int x = 0; x < b; x++)
			{
				cin >> score[x];

				total = total + score[x];


			}

			float percentage = 0;
			float percentage2 = 100.00 / b;

			for (int x = 0; x < b; x++)
			{
				if (total / b + 1 <= score[x])
				{
					percentage = percentage + percentage2;

				}
			}

			
			printf("% .3f\n", percentage); cout << "%" << endl;;
			

			break;
		}
		
	}
	

	delete[] score;
	return 0;
}

/*cout << round(percentage * 1000) / 1000 << endl;*/