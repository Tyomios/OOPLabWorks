#pragma once
#ifndef _H_DYMANICMEMORY_EA3333
#define _H_DYMANICMEMORY_EA3333

/// @brief ���������� �������
///
/// @param data ��������� �� ������  
void SelectionSort(double* data);

/// @brief ��������� �������������� ��������
///
/// @return ���������� ������������� �������� 
int GetIntValue();

/// @brief ����� ������� ��������� ��������
///
/// @param data ��������� �� ������
void SearchIndex(int* data);

/// @brief �������� ������� � �������������� �������
///
/// @param size ������ �������
///  
/// @return ��������� �� ������ 
int* MakeRandomArray(int size);

/// @brief ������� �������� � ���������� ������������� �������
/// �������������� ����������
/// 
/// @param count ������ �������
/// 
/// @return ��������� �� ������ ������� ������� 
int* ReadArray(int count);

/// @brief ������� ������������� �������� � �������
/// 
/// @param values ��������� �� ������ 
/// @param count ������ �������
/// 
/// @return ���������� ��������� ��������
int CountPositiveValues(int* values, int count);
#endif // !_H_LINKSPOINTERS_EA3333