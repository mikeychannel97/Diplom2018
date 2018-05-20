/***************************************************************************

                                XKY_HBO_4_6.h
                             -------------------
 
 ***************************************************************************/

/*
	XKY.���.4.6. ������� �������

1	FAARM				������ ��������������� ����������
2	MNUT				������ ������� �������
3	PREC2000			������ ������� ���������
4	VOSX_E				������ ������� ������� � ������ ��
5	VEKDAT_E			����������� ������� ���������� ������ � ������ �� �������� ���� � ������ ���������
6	Fp_VZ				�������-�������� ������� ���� �����
7	SOLM				������ ��������� ������
8	LUNM				������ ��������� ����
9	t_TIME				������� ������� �� ���. � ���������
10	TIME_t				������� ������� �� ���������� � ���.
11	OB_MK				����������� ������������ � ������������ �������� ��������� 	06	�����-�����		
12  tabk	            ������ �������� �� ���������� ����� TKOC_2000
13  tabk_mkc	        ������ �������� �� ���������� ����� MKC
14  Fprc	            ������������ � ����� ����������� ��������� � ����������� �������� ������� ����������� ���������
15  FprcEnd	            ������������ � ����� ����������� ������������ ��������� �� �������� ������� ����������� ���������
16  FprcCancel	        ������������ � ����� ����������� ������������ ��������� � ������������� ������� ����������� ���������
17  get_ibm_sys_times70	���������� ������� ����  � ���������� �������

*/

extern void FAARM (double MJD, double *L_b, double *L, double *L_1, double *F_b, double *D_b);
extern void MNUT (double MJD, double Nut[3][3]);
extern void PREC2000 (double MJD, double Prec[3][3]);
extern int VEKDAT_E(KU_TimeDATA *t0, double  P0[6], KU_DateDATA *D, int tip, int Pv,
					KU_MKOR *MK, KU_TimeDATA *ta,double  Pa[6]);
extern int VEKDAT_RU(KU_TimeDATA *t0, double  P0[6], KU_DateDATA *D, double taB, int tip,
					 int Pv, KU_MKOR *MK, KU_TimeDATA *tru,double  Pru[6]);
extern void  SOLM(double mjd,  int psk, double xs[4]);
extern void LUNM(double mjd,int psk, double xl[4]);
extern KU_TimeDATA t_TIME(double t);
extern double TIME_t(KU_TimeDATA tc);
void Fprc(char str[15], char str1[15]);
void FprcEnd(char str[15], char str1[15]);
void FprcCancel(char str[15], char str1[15]);
KU_TimeDATA get_ibm_sys_times70(KU_DateDATA *D);
