#include "MenuList.h"

#include <iostream>


void ArrayTasks()
{
	int userChoose; 

	while (true)
	{
		std::cout	<< "1 - 2.1 (sorting integer value array)\n"
					<< "2 - 2.2(count values in float array, more than user's value)\n"
					<< "3 - 2.3(char array with alphabet chars)\n"
					<< "0 <- back" << std::endl;
		//TODO: �������� ��������� (� ���� ����������) ������ ������������ ������� ��������
		userChoose = GetIntValue();
		switch (userChoose)
		{
			case 1:
			{
				int data[10];
				srand(-44);
				
				//TODO: ������������ ����. ��������� ���������� � ������������� 
				//����� ������� � ��������� �������
				for (int i = 0; i < 10; i++)
				{
					data[i] = rand();
				}

				std::cout << "here is unsorted array" << std::endl;
				for (int i = 0; i < 10; i++)
				{
					std::cout << data[i] << "\t";
				}

				SelectionSort(data);
				std::cout << "\nhere is sorted array" << std::endl;
				//TODO: ���� ������������ ���� � ����� ��-�� ������ ������, �������������� �������� �����,
				//������� �������� �������� ������� �� �����
				for (int i = 0; i < 10; i++)
				{
					std::cout << data[i] << "\t";
				}

				system("pause");
				break;
			}
			case 2:
			{
				double data[12];
				srand(-44.5);

				for (int i = 0; i < 12; i++)
				{
					data[i] = (double)rand() / RAND_MAX * (25.0 - 0.01) + 0.01;
				}

				std::cout << "here is array" << std::endl;
				for (int i = 0; i < 12; i++)
				{
					std::cout << data[i] << "\t";
				}
				SearchValues(data);

				system("pause");
				break;
			}
			case 3:
			{
				char data[8];

				for (int i = 0; i < 8; i++)
				{
					std::cout << "Enter symbol for " << i + 1 << " element:";
					std::cin >> data[i];
					std::cin.ignore(32767, '\n');
				}

				std::cout << "Here is array" << std::endl;
				for (int i = 0; i < 8; i++)
				{
					std::cout << data[i] << "  ";
				}
				std::cout << "\nHere is letters from your array" << std::endl;
				SearchValues(data, 8);

				system("pause");
				break;
			}
			case 0:
			{
				system("cls");
				return;
			}
			default:
			{
				std::cout << "Unknown command" << std::endl;
			}
		}
		system("cls");
	}
}


void FunctionsTasks()
{
	int userChoose;

	while (true)
	{
		std::cout	<< "1 - 3.1(write a function for next tasks)\n"
					<< "2 - 3.2(power function from first task)\n"
					<< "3 - 3.3(upgrade of power function from first task)\n"
					<< "4 - 3.4(round to tens function)\n"
					<< "0 <- back" << std::endl;

		userChoose = GetIntValue();
		switch (userChoose)
		{
			case 1:
			{
				std::cout << "Done! You can see how it works in 3.2 task" << std::endl;
				system("pause");
				break;
			}
			case 2:
			{
				std::cout << 2.0 << " ^ " << 4 << " = " << GetPower(2.0, 4) << std::endl;
				std::cout << 4.0 << " ^ " << 2 << " = " << GetPower(4.0, 2) << std::endl;
				std::cout << 3.0 << " ^ " << 3 << " = " << GetPower(3.0, 3) << std::endl;

				system("pause");
				break;
			}
			case 3:
			{
				double base = 2.0;
				for (int i = 0; i < 3; i++)
				{
					DemoGetPower(base, i + 3);
					base = base + 1.0;
				}

				system("pause");
				break;
			}
			case 4:
			{
				int value = 136;
				int temp = value;
				for (int i = 0; i < 3; i++)
				{
					RoundToTens(value);
					std::cout << "For " << temp << " rounded value is " << value << std::endl;
					//TODO: ����� �������� "���������� ���� � ����". ����� ������� 
					//������� � ���������� � ���� ����������� ��������
					value += 12;
					temp = value;
				}

				system("pause");
				break;
			}
			case 0:
			{
				system("cls");
				return;
			}
			default:
			{
				std::cout << "Unknown command" << std::endl;
			}
		}
		system("cls");
	}
}


void DynamicMemoryTasks()
{
	while (true)
	{
		std::cout << "1 - 5.1(dynamic double array)\n"
			<< "2 - 5.2(dynamic bool array)\n"
			<< "3 - 5.3(dynamic char array with user input)\n"
			<< "4 - 5.4(dynamic double sorted array)\n"
			<< "5 - 5.5(dynamic integer array with search value)\n"
			<< "6 - 5.6(dynamic char array with alphabet symbols search)\n"
			<< "7 - 5.7(3 random array maker)\n"
			<< "8 - 5.8(memory leaks)\n"
			<< "9 - Task six\n"
			<< "0 <- back" << std::endl;
		//TODO: �������� ��������� (� ���� ����������) ������ ������������ ������� ��������
		const int userChoose = GetIntValue();
		switch (userChoose)
		{
			case 1:
			{
				//TODO: ������������� � ���������� ������� ����� ������� � ��������� �������
				// � ���� ��, � ������� ������ ������� � ��������� ���� ������ 
				int lenght = 3;
				double* data = new double[lenght];
				data[0] = 6.3;
				data[1] = 0.1;
				data[2] = -55.2;
				std::cout << "Array of double:" << std::endl;
				//TODO: ���� ������������ ���� � ����� ��-�� ������ ������, �������������� �������� �����,
				//������� �������� �������� ������� �� �����
				for (int i = 0; i < lenght; i++)
				{
					std::cout << data[i] << "\t";
				}
				delete[] data;

				system("pause");
				break;
			}
			case 2:
			{
				//TODO: � ������ � ����� ����������������� ��������� ������ ���� ������ ������ �������,
				// �� �� ��������� ������, ��������� �������� � �.�.
				int lenght = 3;
				bool* data = new bool[lenght];
				data[0] = true;
				data[1] = (1 < 0);
				data[2] = false;
				//TODO: ���� ������������ ���� � ����� ��-�� ������ ������, �������������� �������� �����,
				//������� �������� �������� ������� �� �����
				std::cout << "Array of bool:" << std::endl;
				for (int i = 0; i < lenght; i++)
				{
					std::cout << data[i] << "\t";
				}
				delete[] data;

				system("pause");
				break;
			}
			case 3:
			{
				//TODO: ����������� �������� ��� ����� �������� �����
				int lenght;
				lenght = GetIntValue();

				char* data = new char[lenght];

				for (int i = 0; i < lenght; i++)
				{
					std::cout << "Enter symbol for " << i + 1 << " element:";
					std::cin >> data[i];
					std::cin.ignore(32767, '\n');
				}

				std::cout << "Here is your array:" << std::endl;
				for (int i = 0; i < lenght; i++)
				{
					std::cout << data[i] << "\t";
				}
				delete[] data;

				system("pause");
				break;
			}
			case 4:
			{
				int lenght = 10;

				double* data = new double[lenght];
				for (int i = 0; i < lenght; i++)
				{
					data[i] = (double)rand() / RAND_MAX * (25.0 - 0.01) + 0.01;
				}

				std::cout << "Here is double array:" << std::endl;
				for (int i = 0; i < lenght; i++)
				{
					std::cout << data[i] << "\t";
				}

				SelectionSort(data);

				std::cout << "\nHow it's sorted :3" << std::endl;
				for (int i = 0; i < lenght; i++)
				{
					std::cout << data[i] << "\t";
				}
				delete[] data;

				system("pause");
				break;
			}
			case 5:
			{
				int lenght = 10;

				int* data = new int[lenght];
				for (int i = 0; i < lenght; i++)
				{
					data[i] = rand();
				}

				std::cout << "Here is integer array:" << std::endl;
				for (int i = 0; i < lenght; i++)
				{
					std::cout << data[i] << "\t";
				}

				SearchIndex(data);
				delete[] data;
				
				system("pause");
				break;
			}
			case 6:
			{
				int length = 15;

				char* data = new char[length];

				for(int i = 0; i < length; i++)
				{
					data[i] = (char)rand();
				}

					
				std::cout << "Here is array" << std::endl;
				for (int i = 0; i < length; i++)
				{
					std::cout << data[i] << "  ";
				}
				std::cout << "\nHere is letters from your array" << std::endl;
				SearchValues(data, length);

				system("pause");
				break;
			}
			case 7:
			{
				int* dataSmall = MakeRandomArray(5);
				int* dataMiddle = MakeRandomArray(8);
				int* dataLarge = MakeRandomArray(13);

				std::cout << "Random array of 5:" << std::endl;
				for (int i = 0; i < 5; i++)
				{
					std::cout << dataSmall[i] << "  ";
				}
				std::cout << std::endl;

				std::cout << "Random array of 8:" << std::endl;
				for (int i = 0; i < 8; i++)
				{
					std::cout << dataMiddle[i] << "  ";
				}
				std::cout << std::endl;

				std::cout << "Random array of 13:" << std::endl;
				for (int i = 0; i < 13; i++)
				{
					std::cout << dataLarge[i] << "  ";
				}
				std::cout << std::endl;

				delete[] dataSmall;
				delete[] dataMiddle;
				delete[] dataLarge;

				system("pause");
				break;
			}
			//TODO: ��� ������� 8 ������ �� ���������� � �� ���� ������� ������ �����
			case 8:
			{
				int count = 15;
				int* values = ReadArray(count);

				std::cout << "Count is: " << CountPositiveValues(values, count) << std::endl;

				delete[] values;
				//TODO: RSDN
				std::cout << "Here we need to clear memory from array if we want to use ReadArray() again" << std::endl;
					
				count = 20;
				values = ReadArray(count);
				std::cout << "Count is: " << CountPositiveValues(values, count) << std::endl;

				delete[] values;

				system("pause");
				break;
			}
			case 9:
			{
				int lenght = 3;
				double* data = new double[lenght];
				data[0] = 6.3;
				data[1] = 0.1;
				data[2] = -55.2;
				std::cout << "Array of double:" << std::endl;
				for (int i = 0; i < lenght; i++)
				{
					std::cout << data[i] << "\t";
				}

				std::cout << "Sum of positive in array: " << GetSumOfPositive(data) << std::endl;

				delete[] data;

				system("pause");
				break;
			}
			case 0:
			{
				system("cls");
				return;
			}
			default:
			{
				std::cout << "Unknown command" << std::endl;
			}
		}
		system("cls");
	}
}


void LinksAndPointersTasks()
{
	while (true)
	{
		std::cout << "1 - 4.1(show links addresses in memory)\n"
			<< "2 - 4.2(show sizes of int and double types)\n"
			<< "3 - 4.3(show how links works)\n"
			<< "4 - 4.4(show addresses if use data of variable as a attribute for function)\n"
			<< "5 - 4.5(show addresses if we use link of variable as a attribute for function)\n"
			<< "6 - 4.6(show how pointers works)\n"
			<< "7 - 4.7(syntex of *)\n"
			<< "8 - 4.8(show addresses if we use pointers as a attribute for function)\n"
			<< "0 <- back" << std::endl;
		//TODO: �������� ��������� (� ���� ����������) ������ ������������ ������� ��������

		const int userChoose = GetIntValue();
		switch (userChoose)
		{
		case 1:
		{
			int a = 5;
			int b = 4;
			std::cout << "Address of a: " << &a << std::endl;
			std::cout << "Address of b: " << &b << std::endl;
				
			double c = 13.5;
			std::cout << "Address of c: " << &c << std::endl;
			bool d = true;
			std::cout << "Address of d: " << &d << std::endl;

			system("pause");
			break;
		}
		case 2:
		{
			int a[10] = { 1, 2, 7, -1, 5, 3, -1, 7, 1, 6 };
			std::cout << "Size of int type: " << sizeof(int) << std::endl;
			for (int i = 0; i < 10; i++)
			{
				std::cout << "Address of a[" << i << "]: " << &a[i] << std::endl;
			}
			std::cout << std::endl;
				
			std::cout << "Size of double type: " << sizeof(double) << std::endl;
			double b[10] = { 1.0, 2.0, 7.0, -1.0, 5.0, 3.5, -1.8, 7.2, 1.9, 6.2	};
			for (int i = 0; i < 10; i++)
			{
				std::cout << "Address of b[" << i << "]: " << &b[i] << std::endl;

			}

			system("pause");
			break;
		}
		case 3:
		{
			int a = 5;
			int& b = a;
			std::cout << "Address of a: " << &a << std::endl;
			std::cout << "Address of b: " << &b << std::endl;
			std::cout << std::endl;
			
			b = 7;
			std::cout << "Value of a: " << a << std::endl;

			system("pause");
			break;
		}
		case 4:
		{
			double a = 5.0;
			std::cout << "Address of a in main(): " << &a << std::endl;
			std::cout << "Value of a in main(): " << a << std::endl;
			std::cout << std::endl;
			Foo(a);
			std::cout << std::endl;
			std::cout << "Value of a in main(): " << a << std::endl;


			system("pause");
			break;
		}
		case 5:
		{
			double a = 5.0;
			std::cout << "Address of a in main(): " << &a << std::endl;
			std::cout << "Value of a in main(): " << a << std::endl;
			std::cout << std::endl;
			Fooo(a);
			std::cout << std::endl;
			std::cout << "Value of a in main(): " << a << std::endl;


			system("pause");
			break;
		}
		case 6:
		{
			int a = 5;
			int* pointer = &a;
			std::cout << "Address of a: " << &a << std::endl;
			std::cout << "Address in pointer: " << pointer << std::endl;
			std::cout << "Address of pointer: " << &pointer << std::endl;
			std::cout << std::endl;
			*pointer = 7;
			std::cout << "Value in a: " << a << std::endl;
			std::cout << "Value by pointer address: " << *pointer << std::endl;


			system("pause");
			break;
		}
		case 7:
		{
			ShowAnswerPoiner();
				
			system("pause");
			break;
		}
		case 8:
		{
			double value = 5.0;
			double* pointer = &value;
				
			std::cout << "Address of value in main(): " << &value << std::endl;
			std::cout << "Address in pointer in main(): " << pointer << std::endl;
			std::cout << "Address of pointer in main(): " << &pointer << std::endl;
			std::cout << "Value of a in main(): " << value << std::endl;
			std::cout << std::endl;
				
			Foop(pointer);
			std::cout << std::endl;
			std::cout << "Value of a in main(): " << value << std::endl;

			system("pause");
			break;
		}
		case 0:
		{
			system("cls");
			return;
		}
		default:
		{
			std::cout << "Unknown command" << std::endl;
		}
		}
		system("cls");
	}
}