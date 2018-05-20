#include "stdafx.h"
/***************************************************************************

                                XKY_HBO_4_1.h
                             -------------------
 
 ***************************************************************************/

/*

	XKY.���.4.1. �������� ������ ��������� � �������

1	RIPM		�������� ���������� ������  � ����������� ������������
2	PIRM		�������� ���������� ������ �� ����������� ������������ ������� ���������
3	PERUGM		�������� ����� �� �������������� ������� ��������� � �������������� � �������
4	PEING		�������� ���������� �� ������������ ������� ��������� � ������� ��-90
5	STISF		�������� ���������� �� ������������� ������������ ������� ��������� � ����������� �������	
6	POST�		�������� ������� ����������� ���������� � ������������� ������������  ������� ���������
7	OS�PAR		������ ������������ ���������� ��
8	GEOC�		����������� ��������������� ��������� ��
9	GEOD		����������� ������������� ��������� ��
10	DIRM		�������� �� ���������� ������� ��������� � ��������� ������
11	DECORM		�������� �� ���������� ������ � ��������� ������� ���������
12	PETJ		�������� ������� �� ������� ������� ��������� � ������� ��������� J2000
13	PEJT		�������� ������� �� ������� ��������� J2000 � ������� ������� ���������
14	SLOGM		�������� ��������� ������
15	SCOVM		��������� ��������� ������
16	ZVEWS		������ �������� ��������� �������
17	ZVEWI		������ ��������� ��������� �������
18	KDS2000		�������� �� ������������ ������� � ���������
19	SKD2000		�������� ���������� ������� 2000� � �����������
20	MJS2000		�������� ���������������� ��������� ���� � ��������� ����� �� 2000 ����
21	SMJ2000		������ ���������������� ��������� ���� �� ���������� ������� �� 2000 ����
22	KDMJ		������ ���������������� ��������� ����
23	INFOE		������ ������ �������������� ����������
24	PEPAMK		�������� ����������� ���������� � ����������� ������� ���������
25	PEGIN		�������� ���������� �� ������� ��������� ��-90 � ������������ �������
26	POSP		�������� ������������ ���������� �� ������� ��������� J2000 � ������� ������� ���������
27	POSJ		�������� ������������ ���������� �� ������� ������� ��������� ������� ��������� J2000
28	PSORK		�������� �� ��������� ������� ��������� � ����������� ��� ��������� ���
29	POSKS		�������� �� ����������� ������� ��������� � ��������� ��� ��������� ���

*/


extern int RIPM(double[],double[]);
extern int PIRM(double[],double[]);
extern int PERUGM(double [],int ,double []);
extern int PEING(double Xin[6], double MJD, double DEL_UT1, double Xpz[6]);
extern int STISF(double [],double *, double *, double *, double *);
extern int POSTM(double [], double, int, double, int, double []);
extern void OSKPAR(double p[6],int tip,KU_OskPar *op);
extern void GEOCM(KU_TimeDATA t,double p[6],int tip,double DEL_UT1,
		          double*l,double*sh);
extern void GEOD(double X,double Y,double Z, double *B,double *L,double *H);
extern void DIRM(double X[6],double R[6],double Rm[6]);
extern void DECORM(double r[6],int tip, double X[6]);
extern void PETJ( KU_TimeDATA *t,double p[6],int psk,int tip,double xj[6],double pj[6]);
extern void PEJT(KU_TimeDATA *t,double pj[6],int psk,int tip,
           double x[6],double p[6]);
extern int SLOGM(KU_TimeDATA *t1,KU_TimeDATA *t2, int k, KU_TimeDATA *t3);
extern int SCOVM(KU_TimeDATA *t1,KU_TimeDATA *t2, int *a );
extern int ZVEWS(double MJD,  double DEL_UT1, double *s_m);
extern int ZVEWI(double MJD,  double DEL_UT1,  double N_alfa, double *s);
extern int KDS2000(KU_DateDATA *D, KU_TimeDATA *t);
extern int SKD2000(KU_TimeDATA *t, KU_DateDATA *D );
extern int MJS2000(double MJD, KU_TimeDATA *t);
extern int SMJ2000(KU_TimeDATA *t, double *MJD );
extern void KDMJ(KU_DateDATA *D, double *MJD);
extern int INFOE(KU_TimeDATA t,double p[6],int tip,double DEL_UT1, KU_INFOE *opi);
extern int PEPAMK(KU_TimeDATA* t,KU_TimeDATA* t_t, double rh[6],
		          int tip,  double DEL_UT1, int NPOST,  KU_MKOR *ST_KOR, double dc[3]);
extern int PEGIN(double Xpz[6], double MJD, double DEL_UT1,double Xin[6]);
extern void POSJ(KU_TimeDATA t,int v,double DEL_UT1,KU_OSKP op,
                 double *lvu,KU_OSKP *opj);
extern void POSP(KU_TimeDATA t,int v,double DEL_UT1,KU_OSKP opj,
	             double *lvu,KU_OSKP *op);
