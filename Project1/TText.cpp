#include "TText.h"

#include <windows.h>
#include <io.h>
#include <stdio.h>

void test_text()
{
	cout << "test_text() begin" << endl;
	/*
	r  - Чтение, если файла нет, ошибка
	w  - Запись, если файла нет - создаётся (но без папок)
	             если файл есть - чиститься
	a  - Добавление в конец файла. Если файла нет - создаётся.
	r+ - чтение и запись (файл должен существовать)
	w+ - чтение и запись (принцип работы как у 'w')
	a+ - добавление и чтение (принцип работы как у 'a')
	*/
	//FILE* f = fopen("test.txt", "r");
	
	FILE* f;
	FILE* f2;
	const char* filename  = "test.txt";
	const char* filename2 = "test2.txt";
	const int size = 5;//65536; // 256*256
	char* date = new char[size];
	int realsize = 0;
	fopen_s(&f,  filename,  "r"); // открываем файл на чтение
	fopen_s(&f2, filename2, "w"); // открываем файл на добавление
	if (f){// до тех пор, пока файл не закончился
		while (!feof(f)){// fread - функция для чтения их файла
			realsize = fread(date,         // Буфер, куда будут сохраняться символы
				             sizeof(char), // размер 1 символа в байтах
				             size,         // Размер буфера
				             f);           // Указатель на файл
			
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
		
		// Запись символов из консоли в файл
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
		
		fclose(f); // Закрываем
		fclose(f2); // Закрываем 
	}
	else
	{
		cout << "file " << filename << " not exist!" << endl;
	}
}