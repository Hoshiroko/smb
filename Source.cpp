
#include<iostream>
#include<math.h>
#include<string>
#include<time.h>

	int main() {
		int n;
		std::cin >> n;
		int*a = new int[n];
		for (int i = 0;i < n;i++)
		{
			std::cin >> a[i];
		}
		for (int i = 0;i < n - 1;i++) {
			for (int j = 0;j < n - i - 1;j++) {

				if (a[j] > a[j + 1]) {
					int temp = a[j];
					a[j] = a[j + 1];
					a[j + 1] = temp;
				}
			}
		}
		for (int i = 0;i < n;i++)
		{
			std::cout << a[i];
		}
		system("pause");
		return 0;
	}

