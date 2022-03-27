#include <string>
#include <iostream>
#include <cctype>
using namespace std;

void at_encryption()
{
	int i, j;
	string m;
	string encry_text = "";

	string alpha = "abcdefghijklmnopqrstuvwxyz";
	string revalpha = string(alpha.rbegin(), alpha.rend());
	cout << "Hello,please enter a message:" << endl;
	cin >> m;
	for (int i = 0; i < m.length(); i++)
	{
		if (m[i] == char(32))
		{
			encry_text += " ";
		}
		else
		{
			for (j = 0; j < alpha.length(); j++)
			{
				if (m[i] == alpha[j])
				{
					encry_text += revalpha[j];
				}
			}
		}
	}
	cout << "Cipher message is: " << encry_text << endl;
}

void at_decryption()
{
	int i, j;
	string m;
	string dencry_text = "";

	string alpha = "abcdefghijklmnopqrstuvwxyz";
	string revalpha = string(alpha.rbegin(), alpha.rend());
	cout << "Hello,please enter a message:" << endl;
	cin >> m;
	for (int i = 0; i < m.length(); i++)
	{
		if (m[i] == char(32))
		{
			dencry_text += " ";
		}
		else
		{
			for (j = 0; j < revalpha.length(); j++)
			{
				if (m[i] == revalpha[j])
				{
					dencry_text += alpha[j];
				}
			}
		}
	}
	cout << "Decipher message is: " << dencry_text << endl;
}

int main()
{
	int c = 0;
	cout << "\nPlease chosse what you want to do " << endl;
	cout << "1 = Cipher a message" << endl;
	cout << "2 = decipher a message" << endl;
	cin >> c;
	if (c == 1)
	{
		cout << "---Cipher---" << endl;
		at_encryption();
	}
	else if (c == 2)
	{
		cout << "---Decipher---" << endl;
		at_decryption();
	}
	else
	{
		while (c != 1 or c != 2)
		{
			cout << "Wrong Choice, please choose 1 or 2: " << endl;
			cin >> c;
		}
	}

}
