// GSO1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
/*��������� �������������� �� �� ���*/
#include "XKY_HBO_4_2.h"



/*���������� ���������� ����������� ����� ������� ����� ������������ ��������*/

double scalar_prod(double * vec_1, double * vec_2)
{
	return (vec_1[0] * vec_2[0] + vec_1[1] * vec_2[1] + vec_1[2] * vec_2[2]);
}

/*���������� ���� ����� ������� ����� ������������ ��������*/

double calc_angle(double * vec_1, double * vec_2)
{
	double prod, vec_norms;
	prod = scalar_prod(vec_1, vec_2);
	vec_norms = sqrt(scalar_prod(vec_1, vec_1)) * sqrt(scalar_prod(vec_2, vec_2));
	return (acos(prod / vec_norms));
}
 

void add_randn(double in[6], double out[6], double dP[6])
{
	int i,j;
	double e[6];
	int N_SAMPLES = 5;
	//��������� ������ ~ randn, ��������� ����������� ����������� �������
	for (i = 0; i < 6; i++)
	{
		e[i] = 0;
		for (j = 0; j < N_SAMPLES; j++)
		{
			e[i] += 2.0*(rand()- RAND_MAX/2)/ RAND_MAX ;			//rand-0.5 ~ U[-1,1], mu=0, sigma = sqrt(4/12)
		}
		e[i] = (e[i] * sqrt(3 / N_SAMPLES)) * dP[i]; //������� randn ~ N[0, dR[i]]
		out[i] = in[i] + e[i];
	}
}

int main(int argc, _TCHAR* argv[])
{

/********************************************************************

�������		:INT2000
����������	:��������� �������������� ��������� �������� �� �������
:�����-����� 4-�� �������

�������		: 0  - ���������� ���������� ������ �������
:-1  - ��������� ��� �������� ������ ������� ������ ����
:-2  - ����� ���������� ����� ����
:-3  - ������ ������ �� ������ �������. ������� �����
:-4  - �������������� ������ �� ������ 1

/*   typedef struct                                       */
/*       {                                                */
/*        int	d;                                        */
/*        double	s;                                    */
/*       }KU_TimeDATA;                                    */
/*                                          22.11.2005    */
/**********************************************************/

	int tip = 1;	// {������������ �� (���): 1,  ��������������(���): 2}
	int strip = abs(tip);
	KU_TimeDATA ts; // ��������� ������ �������(�����, �������)
	KU_TimeDATA tt;	// �������� ������ �������(�����, �������)

	//TimeDATA_u tt;	// �������� ������ �������(�����, �������)
	int error = 0;

	int priz = 3; // ����������, �������� �������� ����� ����������
					// {��������������� ������������� �������� �� : 1;
					// ���� ���� ����������(���������, ����, ������) : 3}
	int dot = 1;		// ����� ��������� �������� ���������������
					// { �� ��������� �������� ��������� ������ : 0;
					// �� ��������� �������� : 1 }
	double p[6];
	double pn[6];	// ��������� ������ ���������
	double pk[6];	// �������� ������ ���������
	double pn_noisy[6];	// ��������� ������ ���������
	double pk_noisy[6];	// �������� ������ ���������

	double dR[6];
	double dP[6];

	pn[0] = 0;
	pn[1] = 0;
	pn[2] = 0;
	pn[3] = 0;
	pn[4] = 0;
	pn[5] = 0;

	//������� ������� �������� ����������� (����� � N(0,�����)
	// 1 matrix
	dR[0] = sqrt(1.675e+001);
	dR[1] = sqrt(3.620e-008);
	dR[2] = sqrt(1.509e-009);
	dR[3] = sqrt(7.088e-008);
	dR[4] = sqrt(7.246e-008);
	dR[5] = sqrt(1.418e-007);

	//// 2 matrix
	//dR[0] = sqrt(1.298e+001);
	//dR[1] = sqrt(3.309e-008);
	//dR[2] = sqrt(1.969e-009);
	//dR[3] = sqrt(1.060e-007);
	//dR[4] = sqrt(1.068e-007);
	//dR[5] = sqrt(1.210e-007);

	// 3 matrix
	//dR[0] = sqrt(2.375e+001);
	//dR[1] = sqrt(3.996e-008);
	//dR[2] = sqrt(1.237e-009);
	//dR[3] = sqrt(7.403e-008);
	//dR[4] = sqrt(7.302e-008);
	//dR[5] = sqrt(2.329e-007);


	//������������ R � P �� ������������, � ����� ������ ���
	//RIPM(dR, dP);
	int i, t;
	double angle;
	add_randn(pn, pn_noisy, dR);
	ts.d = 1;
	ts.s = 0;
	tt.d = 1;

	// ����� ������ ��� ���� ����� ��������� (������ � ��������)
	double THRESHOLD = 0.01;
	printf("gogogo");
	for (ts.s = 0; ts.s < 100000; ts.s += 4)
	{
		//����������� �� 4 ������� ������
		tt.s = ts.s + 4;

		error = INTUM(&ts, &tt, pn, pk, tip);
		if (error != 0)	printf("First INTUM error: %d", error);
		
		error = INTUM(&ts, &tt, pn_noisy, pk_noisy, tip);
		if (error != 0)	printf("Second INTUM error: %d", error);

		angle = calc_angle(pk, pk_noisy);
		if (abs(angle) > THRESHOLD)
		{
			printf("Angle is too hude: %lf \nEXIT!", angle);
			while (1);
			break;

		}
		else printf("Angle is smol and nice: %lf", angle);
		coil();

		return 0;
	}
	while (1);

}
