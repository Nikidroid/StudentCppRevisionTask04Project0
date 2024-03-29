#include "tasks.h"

/*	Task 01. Desks [������� �����]
*
*	� �������� ������ ������� ��� ����� ������ � ����������� ��������� ��� ��� ������ �������� �������.
*	�� ������ ������ ����� ������ ������ ��� ��������. �������� ���������� �������� � ������ �� ��� �����.
*	���������� ���������� ����� ������� ������, ������� ����� ���������� ��� ��������.
*	������ ������ ����� � ����� ��������� ���������.
*
*	����������
*	���������� ��� ������� ������� ������������ ������ ���������� �������� ����� C/C++
*
*	������ ������� ������ [input]
*	������� �������� �� ���� ��� ����� ����� - ���������� �������� � ������ �� ��� �����.
*
*	������ �������� ������ [output]
*	������� ������ ���������� ���� ����� ����� (����� �� ������)
*	��� ����, ���� ���������������� ������ ��������.
*
*	[ input 1]: 20 21 22
*	[output 1]: 32
*
*	[ input 2]: 16 18 20
*	[output 2]: 27
*
*	[ input 3]: 19 15 23
*	[output 3]: 30
*
*	[ input 4]: -5 15 23
*	[output 4]: 0
*
*	[ input 5]: 19 0 23
*	[output 5]: 0
*/

int task01(int a, int b, int c) {
	if (a <= 0 || b <= 0 || c <= 0) {
		return 0;
	}

	a = a % 2 == 0 ? a : ++a;
	b = b % 2 == 0 ? b : ++b;
	c = c % 2 == 0 ? c : ++c;

	return a / 2 + b / 2 + c / 2;
}
