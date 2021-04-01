#pragma once
#ifndef _H_COLLISIONMANAGER_24A03
#define _H_COLLISIONMANAGER_24A03
#include "Rectangle.h"
#include "Ring.h"

/// @brief ��������� ����� ��� �������� �����������
/// ���� �������� ���� ������������� ��� ������
static class CollisionManager
{
public:

	/// @brief �������� ���������� ���������������
	/// 
	/// @param rectangle ������ �������������
	/// @param secondRectangle ������ �������������
	///
	/// @retval true ����������� ����
	/// @retval false ����������� ���
	/// @return ������� ����������� ����� ����������������
	static bool IsCollision(Rectangle& rectangle,
						Rectangle& secondRectangle);

	/// @brief �������� ���������� �����
	/// 
	/// @param ring ������ ������
	/// @param secondRing ������ ������
	///
	/// @retval true ����������� ����
	/// @retval false ����������� ���
	/// @return ������� ����������� ����� ��������
	static bool IsCollision(Ring& ring, Ring& secondRing);
};
#endif