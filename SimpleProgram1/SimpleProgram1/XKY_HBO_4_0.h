#include "stdafx.h"
/***************************************************************************

                                XKY_HBO_4_0.h
                             -------------------
 
 ***************************************************************************/

/*

	XKY.���.4.0.������������������ �������
				
1	UGOLM		���������� ���� � ��������� 0-2pi
2	KORIN_E		����������� ������������������ ���������� �������� �������
					� ���������� � ���� ���������� �������
3	KORXB_E		����������� ������ ���������� ������� � ���������� � ���� ���������� �������	
4	KORIN_Ed	����������� ������������������ ���������� �������� ����������
					������� � ���������� � ���� ��������������� �����
5	KORXB_Ed	����������� ������  ������� � ���������� � ���� ��������������� �����
6	Y2�			������� ������� �������� ��������� � ����� ������������	
7	Y5�			������� ������� �������� ��������� � 5-� ������������
8	Y3�			������� ������� �������� ��������� � 3-� ������������
9	YM_MV_3		��������� ������� 3�3 �� �������
10	YM_MM_3		��������� ������� 3�3 �� ������� 3�3
11	YM_MV_6		��������� ������� 6�6 �� �������
12	YM_MM_6		��������� ������� 6�6 �� ������� 6�6
13	OMATR		���������� �������� �������
14	FSIGN		���������� ����� �����
15	arcsn		���������� ��������� � ����������� �������� �����������
16	arccn		���������� ����������� � ����������� �������� �����������
17	YM_MV5		��������� ������� 5�5 �� ������ 5�1
18	DET_3		���������� ������������ �������� ������� � ������� ������� �������
19	DET_4		���������� ������������ ���������� �������
20	DET_5		���������� ������������ ������ �������
21	MINOR_2		���������� ������ ������� �������
22	MINOR_4		���������� ������ ���������� �������
23	OMATR3		���������� �������� ������� �������� �������
24	OMATR5		���������� �������� ������� ������ �������

*/

extern int UGOLM	(double x,double y,double *al);
extern int Y3X		(double a[3][3], double b[3], double x[3]);
extern int Y2X		(double a[2][2], double b[2], double x[2]);
extern int Y5X		(double a[5][5], double b[5], double x[5]);
extern int YM_MV_6 (double a[][6], double b[6], double c[6]);
extern int YM_MV_3 (double a[][3], double b[3], double c[3]);
extern int YM_MM_6 (double a[][6], double b[][6], double c[][6]);
extern int YM_MM_3 (double a[][3], double b[][3], double c[][3]);
extern int OMATR	( double  a[6][6]);
extern int FSIGN	(double x);
extern double arccs(double x);
extern double arcsn(double x);
extern int YM_MV_5 (double a[5][5], double b[5], double c[5]);
extern double DET_3(double a[3][3]); 
extern double DET_4(double a[4][4]);
extern double DET_5(double a[5][5]); 
extern double MINOR_2(int i, int j, double a[3][3]); 
extern double MINOR_4(int i, int j, double a[5][5]);
extern int OMATR3	( double  a[3][3]);
extern int OMATR5	( double  a[5][5]);
extern int PERM_OMATR( double [][6], int [], int [], int);
extern void TRANSMA(double a[3][3], double at[3][3]);
extern double SKALPR(double x[3],double y[3]);
extern void LKOMB(double a,double va[3],double b,double vb[3],double c[3]);
extern void VEKTUMN(double v1[3],double v2[3],double v3[3]);
extern void ZAPOLN(double m[3][3],double m00,double m01,double m02,double m10,double m11,
			double m12,double m20,double m21,double m22);
extern int NORMV(double x[3]);
extern void AvB(double a[],double b[]);
extern double MODUL(double xv[3]);
