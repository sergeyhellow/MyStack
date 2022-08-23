#include "TText.h"

#include <windows.h>
#include <io.h>
#include <stdio.h>

void test_text()
{
	cout << "test_text() begin" << endl;
	/*
	r  - ������, ���� ����� ���, ������
	w  - ������, ���� ����� ��� - �������� (�� ��� �����)
	             ���� ���� ���� - ���������
	a  - ���������� � ����� �����. ���� ����� ��� - ��������.
	r+ - ������ � ������ (���� ������ ������������)
	w+ - ������ � ������ (������� ������ ��� � 'w')
	a+ - ���������� � ������ (������� ������ ��� � 'a')
	*/
	//FILE* f = fopen("test.txt", "r");
	
	FILE* f;
	FILE* f2;
	const char* filename  = "test.txt";
	const char* filename2 = "test2.txt";
	const int size = 5;//65536; // 256*256
	char* date = new char[size];
	int realsize = 0;
	fopen_s(&f,  filename,  "r"); // ��������� ���� �� ������
	fopen_s(&f2, filename2, "w"); // ��������� ���� �� ����������
	if (f){// �� ��� ���, ���� ���� �� ����������
		while (!feof(f)){// fread - ������� ��� ������ �� �����
			realsize = fread(date,         // �����, ���� ����� ����������� �������
				             sizeof(char), // ������ 1 ������� � ������
				             size,         // ������ ������
				             f);           // ��������� �� ����
			
			for (int i = 0; i < realsize; i++)
			{
				date[i] = char(date[i] + 1);
			}
			fwrite(date, sizeof(char), realsize, f2);

			//cout << "realsize = " << realsize << endl;
			//cout << "date<";
			//for (int i = 0; i < realsize; ++i)
			//	cout << date[i];
			//cout << ">" << endl;
		}
		
		// ������ �������� �� ������� � ����
		/*
		char ch;
		cin >> ch;
		while (ch != '=')
		{
			fwrite(&ch, sizeof(char), 1, f2);
			cin >> ch;
		}
		fclose(f2);
		*/

		char buf[_MAX_PATH];
		std::istream &stream1 = cin.getline(buf, _MAX_PATH);
		while (buf[0] != '~')
		{
			fwrite(&buf, sizeof(char), stream1.gcount() - 1, f2);
			cin.getline(buf, _MAX_PATH);
		}
		
		fclose(f); // ���������
		fclose(f2); // ��������� 
	}
	else
	{
		cout << "file " << filename << " not exist!" << endl;
	}
}