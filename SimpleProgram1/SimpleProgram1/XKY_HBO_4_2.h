#include "stdafx.h"
/***************************************************************************

                                XKY_HBO_4_2.h
                             -------------------
 
 ***************************************************************************/

/*

	XKY.���.4.2.��������������� ������������ �������� ��

1	INT2000		��������������� ������������ �������� �� �� ������
					���������� �������������� ��������� ��������	
2	INTUM		������� ������������ �������� �� ��������� ������� �������
3	INTUUM		������� ������������ �������� �� ��������� ��������� ������
4	INTUS		��������������� �������� �� � ������ ����������� ���������
5	INTUKOR		������� ������������ �������� � ������ �����������
					��������� �� ��������� �������
6	INTUUKOR	������� ������������ �������� � ������ �����������
					��������� �� ��������� ��������� ������
7	INTK		����������� �������� �� � ������ ����������� ���������
8	INTK_1		����������� �������� �� � ������ ����� ����������� ���������
9	INTKU		��������������� �������� �� �� ��������� ��������� ������
					� ������ ����������� �����������
10	APSIDM		������� �� ����������� �����
11	APSIDK		������� �������� �� � ����������� ����� � ������
					����������� �����������
12	INJ2000		������� ������������ �������� �� � ������� ��������� J2000				
13	INJUS		������� ������������ �������� �� � ������� ��������� J2000
					� ������ ����������� �����������				
14	INJUM		������� ������������ �������� �� �� ��������� �������
					������� � ������� ��������� J2000
15	INJUUM		������� ������������ �������� �� �� ��������� ���������
					������ � ������� ��������� J2000
16	INJUKOR		������� ������������ �������� �� �� ��������� �������
					������� � ������� ��������� J2000 c ������ ����������� ���������
17	INJUUKOR	������� ������������ �������� �� �� ��������� ���������
					������ � ������� ��������� J2000 c ������ ����������� ���������
18	DRAKM		������ �������������� �������
19	PROV		������� ������������ �������� �� ��������� ������� � ������
					����������� � ����������� ���������

*/

int INT2000		(KU_TimeDATA *t_n,TimeDATA_u *t_k, double p[], int dot,int priz,int tip);
int INTUM		(KU_TimeDATA *tn, KU_TimeDATA *tk, double pn[], double pk[],int s);
int INTUUM		(KU_TimeDATA *tn, KU_TimeDATA *tk, int kvit, double uk, double pn[],double pk[],int s);
int INTUS		(KU_TimeDATA *t_n,TimeDATA_u *t_k, double p[], int dot,int priz,int tip,double stw[3]);
int INTUKOR		(KU_TimeDATA *tn, KU_TimeDATA *tk, double pn[], double pk[],int s,double stw[3]);
int INTUUKOR	(KU_TimeDATA *tn, KU_TimeDATA *tk, int kvit, double uk,double pn[], double pk[],int s,double stw[3]);
void INTK(KU_TimeDATA *tn, KU_TimeDATA *tk, double Pn[6], int tip, KU_MKOR *ST_KOR, int *kik, double Pk[6]);
void INTK_1(KU_TimeDATA *tn, KU_TimeDATA *tk, double Pn[6],int tip,
			KU_TimeDATA *tndk, KU_TimeDATA *tkdk, double W[3], double Pk[6]);
int INTKU(KU_TimeDATA *t ,double p[6],int kv,double uk,int tip, KU_TimeDATA *tk,double pk[6],KU_MKOR *STK);
int APSIDM(	KU_TimeDATA* tn, double pn[], int tip, int j, int ap, KU_TimeDATA *tk, double pk[] );
int APSIDK(	KU_TimeDATA* tn, double pn[], int tip, int j, int ap, KU_MKOR *STK, KU_TimeDATA *tk, double pk[] );
int DRAKM(KU_TimeDATA t,double p[6],int tip,double *tdr);
void PROV(KU_TimeDATA todn,double podn[6],int tip,KU_TimeDATA t,double p[6],
	        KU_MKOR  MDKOR,KU_MKOR  MPKOR);
void RKSHM(KU_TimeDATA *t, int *nvit, double pp[], double uscu[],
	       int sbr, int dot, int tip, int priz,  double pred[]);
void SECUSM(KU_TimeDATA *t, double tk, int *data, double pp[],  double uscu[], int tip,
	        int priz, double pred[]);
void TUZM(double u,double *sec,double pred[]);
void RKSHUS(KU_TimeDATA *t, int *nvit, double pp[], double uscu[],
	           int sbr, int dot, int tip, int priz,  double pred[]);
void SECUSS(KU_TimeDATA *t, double tk, int *data, double pp[],  double uscu[], int tip,
	            int priz, double pred[]);
void PRAVM(int data,double rr[],double z[],double uscu[], int tip, int   priz,double pred[]);
void PRAVUS(int data,double rr[],double z[],double uscu[], int tip, int   priz,double pred[]);
void SDSTW(KU_TimeDATA *ts, double fr, double *s, double *t, double *w,
		    double stw[]);
void LS2000(KU_TimeDATA *ts, int l, double *s, double *t, double *w, double stw[]);
void GEOM(double sek, double *gs, double *gt, double *gw, double sm0,double stw[]);




