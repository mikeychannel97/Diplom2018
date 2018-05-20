/***************************************************************************

                                XKY_HBO_5_0.h
                             -------------------
 
 ***************************************************************************/
#ifndef _XKYHBO_5_0
#define _XKYHBO_5_0

#define NVM	   180  //������������ ����� ������ �� ������� ����������� ���������������� FORM
#define NI	   5    //����.���-�� ������� �����.��� ������������� ���������� ������ FORM, BM_MTime

typedef int		_I;
typedef double _D;


typedef struct 
{
 int	day;
 double	sec;
}TIME;

typedef struct 
{
 int	d;     /* ���������� ��������� �����  */
 double	s;     /* ���������� ��������� ������ */
}KU_TimeDATA;

typedef struct 
{
int	d;     /* ���������� ��������� �����             */
 double	s;     /* ���������� ��������� ������            */
 double	u;     /* �������� ��������  �� ��������� ������
                  ��� �������� �� ��������� �������      */
}TimeDATA_u;  

typedef struct 
{               /* ����������� ���� (� UTC) */
 int	y;      /* ���   */     
 int	m;      /* ���   */
 int	d;      /* ����� */
 int	h;      /* ���   */
 int	min;    /* ���   */
 double	sec;    /* ���   */
}KU_DateDATA;

typedef struct 
{
 double	e;      /* ��������������                           */
 double	a;      /* ������� �������                          */
 double	tosk;   /* ������������ ������                      */
 double	i;      /* ���������� ������          � ���  (����) */
 double	om;     /* ������������ ������� ���   � ���  (����) */
 double	u;      /* �������� ������            � ���  (����) */
 double	w;      /* �������� �������           � ���  (����) */
 double	wm;     /* �������� �������                  (����)
                   � ����������� �� CK  
				     ��� tip=1 wm � �������������� ��
                     ��� tip=2 wm = w                       */
 double	hap;    /* ������������ ������ ������               */
 double	hpi;    /* ������������ ������ �������              */
}KU_OskPar;

typedef struct 
{
 double	e;     /* ��������������                   */
 double	tosk;  /* ������������ ������              */
 double	i;     /* ���������� ������                */
 double	om;    /* ������������ ������� ���   � ��� */ 
 double	u;     /* �������� ������            � ��� */ 
 double	wpi;   /* �������� �������           � ��� */ 
}KU_OSKP;

typedef struct 
{
 int Pdu;
 double dV;
 int dtMAX;
 double ex;
 double ey;
 double ez;
 int tDDU;
 double gamma;
 int tODUN;
 int dtODU;
 int Pv;
 int Pu;
}s_PARC; 

typedef struct 
{
 double	e;      /* ��������������                           */
 double	a;      /* ������� �������                          */
 double	tosk;   /* ������������ ������                      */
 double	tdr;    /* ������������� ������                     */
 double	ig;     /* ���������� ������           � ��� (����) */
 double	omg;    /* ������������ ������� ���    � ��� (����) */
 double	ug;     /* �������� ������             � ��� (����  */
 double	wpg;    /* �������� �������            � ��� (����) */
 double	hap;    /* ������������ ������ ������               */
 double	hpi;    /* ������������ ������ �������              */
 double	lg;     /* ��������������� �������������� ������� ��� � ��� (����) */
 double	fg;     /* ��������������� �������������� ������  ��� � ��� (����) */
}KU_INFOE;   /* ���������  �������������� ���������� ��� ������� R */


/* 06.09.2006 ��� ��������� */
typedef struct 
{
 int n_kor;                 /* �������� �����  ���������                      */
 KU_TimeDATA Mtkor[360][2]; /* ������ ����� ������ � ����� ���������(tn � tk)*/
 double MW[360][3];         /* ������ ����������� ��������� (Ws Wt Wb)
                               � ����������� ��                               */
 int    TIPkor[360];        /* ������ ���� ���������:
                                      0 - ��� ���������, 1 - OD�, 2 - DD�     */
}KU_MKOR;    /* ���������  ������� ��������� */


typedef struct 
{
 int n_kor;                 /* �������� ����� ����������� ��������� */
 KU_TimeDATA Mtkor[720][2]; /* ������ ����� ����������� ���������(tn � tk) */
 double MW[720][3];         /* ������ �������� ����������� ���������(Ws Wt Wb) */
 int    TIPkor[720];        /* ������ ���� ���������: 0 - ��� ���������, 1 - OD�, 2 - DD�  */
}KU_MKORPob;

          
/* 17.10.2006 ��� ����������� ����������� ��������� */
typedef struct 
{
 int Pnk;                  /* ������� ������� ��������: 0 - ��� ��������, 1 - ���� */
 KU_TimeDATA t;            /* ����� �������� �������   R - ���������� ����������� ��������� */
 double R[6];              /* ������ ���������� ������ R - ��������� ����������� ��������� */
 double K[6][6];           /* �������������� ������� ������ � ���������� ����������� ���������*/
 double sig_T;             /* �������� ����������� ������� ��������� �� */
 double sig_2;             /* ������ ������������ ��� �������������� ������� ������*/
}KU_STR_MROM;              /* ��������� ������ ����������� ����������� ��������� OBIZM*/

typedef struct 
{
 int Npost;                 /* ����� ����� (Dtmax, alfamax, betamax) */
 int Nz;                    /* ����� ����  (Dtmax, alfamax, betamax) */
 double DEL_max;            /* DEL_max     (Dtmax, alfamax ,betamax) */
}KU_STR_MAXOTKL;            /* ��������� ������ ����������� MAXOTKL*/


/* ��������� ������� ���������� ������� ��� ����������� ���������� �� ��������������� */	
typedef struct {

	KU_TimeDATA ta; // ����� �������� �������� ������� 
	                   
    KU_TimeDATA t;  // �������� ����� ������� 
	                   
	double p[6];    // ������� ������ ���������� ������ 
	                   
	int tip;		// ��� �������������� 

	double DEL_UT1; // �������� � �������� UTC 

	int Npost;      // ����� ����� 

	double Skr;     // ����������� �������� ���� ��� ��� ���� Ksi

	double s[3];    // ������������ �������� ������

	double fi;     // �������� ���� ������� 

	                   
}Finp_E;

/////////////////////////////////////////////////////////////////////////////////////
struct KA_PAR{
	double T;
	double e;               
	double i;
	double Omg;
	double omgpi;
	double u;
};
//struct KA_PAR ka;

struct s_KORR{
	int Pdu;
	double dV;
	int dtMAX;
	double e[3];
	int tDDU;
	double gamma;
	int tODUN;
	int dtODU;
	int Pv;
	int Pu;
};

struct Shad
{
int P;
double tn;
double tk;
};

struct MASS{
	double AT[6];
	double Ae[6];
	double Ai[6];
	double AOmg[6];
	double Api[6];
	double ATa[6];
};

struct UKP{
	int Pdu;
	double dV;
	int dTmax;
	double eDDU[3];
	KU_DateDATA Tddus;
	double gODU;
	KU_DateDATA TnODU;
	KU_DateDATA Tkodu;
};
struct CORR{
	int Pdu;
	double dV;
	int dTmax;
	double eDDU[3];
	int Tddus;
	double gODU;
	int TnODU;
	int dTodu;
};

struct D_IB_OPV
{
int m;
int tbsv;
int tr;
int NV;
int Kv[5];
int NC;
int Kc[5];
double Aop[5][5][6];
int k;
double dT;
double T1a;
struct KA_PAR ka;
int jc;
int ic;
int mc;
int nv;
int nc;
int nc2;
int Pkor;
double gamma1;
double dtk;
};

struct D_IB_SHADOW
{
int P1asn;
int P2asn;
KU_DateDATA Dp;
KU_DateDATA Dt;
int P1mkp;
int P2mkp;
int P3mkp;
double dT;
int tbsv;
int tau;
double T1a;
struct KA_PAR ka;
int tab;
int tp;
double dR;
double dV;
double Rasn[3];
double Vasn[3];
double Am[2][3];
struct s_KORR Ck;
int ic;
int jc;
int mc;
double dtk;
double dUT1;
double dTT;
double dpz;
double dpl; 
};

struct dd_ib_tzl
{
struct D_IB_OPV dd;
struct D_IB_SHADOW dib_sh;
KU_TimeDATA tn;
double Rn[6];
KU_TimeDATA ttk;
int tip;
KU_MKOR MDKOR;       // ������ ����������� ���������  
KU_MKOR MPKOR;       // ������ ����������� ���������                               
KU_TimeDATA t00;
KU_TimeDATA t01;
};

struct ENTER_DATA{
	int tb;
	int t_gamma;
	int tnru;
	double Rka[3];
	double Vka[3];
	double MJD;
	double sm;
	double ro_zas;
	double dt_zas;
	double D_tn;
	double Sh_tn;
	double R_tn;
	int Pkor;
	double dzeta_Y;
	double dzeta_Z;
	double psi;
	double delta;
	double gamma1;
	double D_mt1;
	double Sh_mt1;
	double nu_mt1;
	double psi_mt1;
	double gamma_mt1;
	double Cteta_mt1[4][4];
	double Cphi_mt1[4][4];
	double D_mt2;
	double Sh_mt2;
	double nu_mt2;
	double psi_mt2;
	double gamma_mt2;
	double Cteta_mt2[4][4];
	double Cphi_mt2[4][4];
	double D_bkupi;
	double Sh_bkupi;
	double nu_bkupi;
	double psi_bkupi;
	double gamma_bkupi;
	double Cteta_bkupi[2];
	double Cphi_bkupi[2];
	double psi_mna;
	double dt_mna;
	double dTT;	
} ;

//struct s_KORR AC[5][4];
//struct Shad Mt[8];
//struct dd_ib_tzl tzl;
//struct D_IB_OPV dd;

typedef struct 
{	
      double	MIIap1[5][2];   // ������ �����������  ��������� � ������	�� ������ �����
      double    MIIap2[5][2];   // ������ �����������  ��������� � ������	�� ������ �����
      double    MIIpg1[5][2];   //������ ����������� ���������  � ������� �� ������ �����	
      double    MIIpg2[5][2];   //������ ����������� ���������  � ������� �� ������ �����	                                                                     
      double    dellap1;      // ����� ������������ ���������  � ������ �� ������ �����									 
      double    dellap2;      // ����� ������������ ��������� � ������ �� ������  �����												 
      double    dellpg1;      //����� ������������ ���������  � �������  �� ������ �����             
      double    dellpg2;     //����� ������������ ���������  � ������� �� ������ �����                
      int       Pzka1;       //����� ����������� ���-��  ����������� ���������� 
                               //� ��������� ���� �� ������ �����
      int       Pzka2;       //����� ����������� ���-��  ����������� ���������� 
                             //� ��������� ���� �� ������ �����
	  int   	Pzkp1;       //����� ����������� ���-��  ����������� ���������� 
                              //� ���������� ���� �� ������ �����
	  int    	Pzkp2;       // ����� ����������� ���-��  ����������� ���������� 
                               //� ���������� ���� �� ������ �����
      int       Porap1;      //����� ���������� � ��������� ���� �� ������ �����
	  int   	Porap2;      //����� ���������� � ��������� ���� �� ������ �����
      int       Porpg1;      //����� ���������� � ���������� ���� �� ������ �����
      int       Porpg2;      //����� ���������� � ���������� ���� �� ������ �����                                              
                                                                    
	  KU_TimeDATA tntl1;    // ��������� ����� ������ ������� ���� ���� �� ������ �����
	  KU_TimeDATA tktl1;    //��������� ����� ����� ������� ���� ���� �� ������ �����
      KU_TimeDATA TZ1[5][2];   // ��������� �����  �������� ���� ����� �� ������ �����
	  int	 Ptl1;  // ������� ������� ���� ���� �� ������ �����  
	  int	 Ptz1;  // ������� ������� ���� ����� �� ������ �����
	   KU_TimeDATA tntl2;    // ��������� ����� ������ ������� ���� ���� �� ������ �����
	  KU_TimeDATA tktl2;    //��������� ����� ����� ������� ���� ���� �� ������ �����
      KU_TimeDATA TZ2[5][2];   // ��������� �����  �������� ���� ����� �� ������ �����
	  int	 Ptl2;  // ������� ������� ���� ���� �� ������ �����  
	  int	 Ptz2;  // ������� ������� ���� ����� �� ������ �����

}MInt;      /* ������ ���������� */


// FormM_ZTI
typedef struct
{
	int Nzti;       // ����� ���
	KU_TimeDATA t;  // ����� �������� ���
	double Dt;      // ���������� ��������
	double alfa;    // ������
	double beta;    // ���� �����
	int Pgz;        // ������� �������� ���

}StringZTI;

typedef struct
{

	KU_TimeDATA tv;  // ����� �������
    KU_TimeDATA tz;  //  ����� ������
    KU_TimeDATA ta;  //  ����� ������ �� ����� ���������
	StringZTI MString[20];	//   ������ �������� "����� ���������"

}PageZTI;

typedef struct 
{
 int Nzti;       /* ����� ���                                  */
 KU_TimeDATA t;  /* ����� ���                                  */
 double Dt;      /* ���������� ��������  � ����������� ������� */
 double alfa;    /* ������                                     */ 
 double beta;    /* ���� �����                                 */
 int    PGZ;     /* ������� �������� ���  1 - ���� ���� � �����
                                         -1 - ���� ���� � ��������
				                          0 - ���� ���         */				                    
 int N_post;     /* ����� �����                                */

}KU_ZTI;    /* ���������   ����� ������  ��� */

/****************************************************************************************/


/****************************************************************************************/
/*                        ��������� �������������� ������                               */
/****************************************************************************************/
typedef struct 
{
	int NK;               // ����� �������
    KU_DateDATA Dz;       // �������� ���� �������                         
    int Pv;               // ������� �����                                 
    int Npost;            // ����� �����(����) (VOSX_E, DANZU1)
	int Pprc;             // ������� ������������ ��������� ����� (1 - �������, 2 - ������) 
	int Pr;               // ������� ������� ���������� ������ ����� ������������� (RBPA)
	int kPr;	          // ��������� ����� ����� � ������ ������� ������������� (RBPA)
    int kt;               // �������� ����� �����, �������� ���������� (RBU_E)                       
    char J[15];           // �������� ����� ������� (FormM_ZTI)
    int Nv;               // ���.����� ����� (FormM_ZTI)
    int Np_osn;           // ����� ���.����� (FormM_ZTI)
    int Np_rez;           // �����.���.����� (���� Np_rez=0 - ���� �� ��������) (FormM_ZTI)
    int Nzti_rez;         // ����� ��� ���.�����,� ������� ���������� ���������� ���������� ���.����. (FormM_ZTI)
    int Pzap;             // ������� �������  (0 - ���������� ���������, 1 - �������������� ���������) (NPI)

}MPK;

typedef struct 
{
    int tip;              // ��� ������                                  
    double del_L1;        // ������������ ������� ��������, ��� (CUR_E)      
    double del_L4;        // ������������ ���������� ��������, ��� (CUR_E)   
    int NZTI;             // �������� ���.��� �� ����� (FormM_ZTI)
    int Kvi;              // ���������� ���������� ������ ��������� (NPI)

}TPKA;

typedef struct 
{
	double Rod[6];          // ������� ����������� ������ ���������� ������ 
    KU_TimeDATA tod;        // ����� �������� �������
    double DEL_UT1;         // �������� � �������� UTC (VOSX_E)                 
    KU_MKOR MKORd;          // ������ ����������� ��������� (Ob_MK) 
    KU_MKOR MKORp;          // ������ ����������� ��������� (Ob_MK)
	/* CUR_E */
	/* out */
    KU_TimeDATA tvosx;      // ����� ������� 
    KU_TimeDATA tzax;       // ����� ������                               
    KU_TimeDATA t_cu[4];    // ������� ������ ��������� 1,2,3,4              
    KU_TimeDATA t_p[4];     // ������� ����� �������� ��������� 1,2,3,4      
    double del_t[4];        // ��������� ����� ������� ������������� ��������� 
    double a0[5];           // ������������ �������� 1     
	double b0[5];
	double c0[5];
	double a1[5];           // ������������ �������� 2      
	double b1[5];
	double c1[5];
	double a2[5];           // ������������ �������� 3      
	double b2[5];
	double c2[5];
	double a3[5];           // ������������ �������� 4     
	double b3[5];
	double c3[5];
	/* RBPA */
	/* inp */
	int Prpk;               // ������� ������� �������� ��������� ���������(1 - �������� ������, 0 - �� ��������) 
	KU_TimeDATA tobn_sys;   // ��������� ����� ���������� ��������� ��� 
	int taB;	            // ����� ����������� ������� �� ������������ ���� ������ �� ���  
	int Kp[NI];             // ������ ��������� ������ � ���������� � ���������� ������ ��������� 
	int NP;                 // ���������� ���������� � ���������� ������ ��������� 
	s_PARC PC[NI][2];       // ������ ���������� ��������� ������ ��� ������� ����������� ���������������� 
	/* out */
	int k0;                 // ����� ������� ����� �� ��������� ������������ 
	int Kv[NI];             // ������ ������� ��������� ������ ��� ������� �����. ������ ������������� ���������� ������ 
	int NV;                 // ���-�� ������� �����. ��� ������������� ���������� ������ 
	int tobn;               // ����� ��������� ��� 
	double dt;              // ��������� ������ ����������� ��������� ��� 
	double P;               // �������� ������� �� ���������� ��������� ��� � ������ ��������� ������ ��������� 
	double T1a;             // ������ ������� ����� ������������� ����� 
	double T;               // ������ ��������� �� �� ������ ����� ����������� ������� 
	double i;               // ���������� ������ �� ������ ����� ����������� ������� 
	double e;               // �������������� ������ �� ������ ����� ����������� ������� 
	double Omg;             // ������������ ������� �� �� ������ ����� ����������� ������� 
	double ompi;            // �������� ������� �� ������ ����� ����������� ������� 
	int nv;                 // ����� �������� ������ ����. ��� ������������ ���������� ������ 
	double dtk;             // �������� � "���������" ������� ��-�� ��������� 
	double Aop[NI][5][6];   // ������ ����. ��� ������������� ���������� ������ 
	double Ata[NI][6];      // ������ ����. ��� ������������� ����������������� ������� 
	int PRkoef;             // ������� ������������ �������� ��������� ���������� 
	int Prpa;               // ������� ������� �������� ��������� �������������(1 - �������� ������, 0 - �� ��������) 
	/* RBU_E */
	/* out */
	MInt TOgr[60];          // ������ ���������� ����������� 
    int Nkor;               // ����� ���������� ��������� 
	int kt;                 // �������� ����� �����, �������� ���������� 
	/* FormM_ZTI */
	/* inp */
    PageZTI mZTI_osn;       // ���-�� ��������� � ���.����� 
    PageZTI mZTI_rez;       // ���-�� ��������� � ���.����� 
	/* out */
	int Nv;                 // �������� ����� �����: 1,2,3,4,5,6,7,8 
	KU_TimeDATA tv;         // ����� ������� 
	KU_TimeDATA tz;         // ����� ������ 
	KU_TimeDATA ta;         // ����� ������� 
	KU_ZTI MZTI[20];        // ������ �������� ����� ��� 
	/* NPI */
	/* inp */
    KU_TimeDATA ta2;        // ����� ������ ������� �����                       
    int Pizm;               // ������� ��������� (0 - ��������� �� ���������, 1 - ������� ��������� ��������) 
    int Pvdv;               // ������� ������ ������������ �������  
                            // (1 - ������ ������� � ���-�� ����������� ���������, 2 - ������ ������� � ���-�� ���-�� �-��� ����������� ����������(ODV)
                            //  3 - ������ ������� �� ���)
	/* out */
    PageZTI MPageZTI[8][7]; // ������ ��������� �� ������ �������� 
    int Ndv;                // ����� ������������ ����� 

}TBO;
/****************************************************************************************/


/*****************************************************************************************/
/*                  ������� � �������� ��������� ����������� ����������                  */
/*****************************************************************************************/
typedef struct 
{
	double Rod[6];        // ������� ����������� ������ ���������� ������(TBO) 
    KU_TimeDATA tod;      // ����� �������� �������(TBO)                       
    KU_DateDATA Dz;       // �������� ���� �������(���)                         
    int tip;              // ��� ������(����)                                  
    int Pv;               // ������� �����(���)                                
    double del_L1;        // ������������ ������� ��������, ���(����)       
    double del_L4;        // ������������ ���������� ��������, ���(����)    
    double DEL_UT1;       // �������� � �������� UTC(���)                  
    int Npost;            // ����� �����(���)                                 
    KU_MKOR MKORd;        // ������ ����������� ��������� (���) 
    KU_MKOR MKORp;        // ������ ����������� ��������� (���)
	int Pprc;             // ������� ������������ ��������� ����� (1 - �������, 2 - ������) (���)

}CUR_E_INP;      /* ��������� ������� ���������� CUR_E */


typedef struct 
{
	KU_TimeDATA tvosx;    // ����� �������(TBO) 
    KU_TimeDATA tzax;     // ����� ������(TBO)                               
    KU_TimeDATA t_cu[4];  // ������� ������ ��������� 1,2,3,4 (���)             
    KU_TimeDATA t_p[4];   // ������� ����� �������� ��������� 1,2,3,4 (���)     
    double del_t[4];      // ��������� ����� ������� ������������� ��������� (���) 
    double a0[5];         // ������������ �������� 1 (���)     
	double b0[5];
	double c0[5];
	double a1[5];         // ������������ �������� 2 (���)     
	double b1[5];
	double c1[5];
	double a2[5];         // ������������ �������� 3 (���)     
	double b2[5];
	double c2[5];
	double a3[5];         // ������������ �������� 4 (���)     
	double b3[5];
	double c3[5];
	
}CUR_E_OUT;      /* ��������� �������� ���������� CUR_E */ 


typedef struct 
{
	KU_TimeDATA tod;        // ����� �������� �������(TBO)
	double Rod[6];          // ������� ����������� ������ ���������� ������(TBO)
    KU_DateDATA Dz;         // �������� ���� �������(���)                         
	int tip;                // ��� ������(����)                                  
    int Pv;                 // ������� �����(���) 
	int Prpk;               // ������� ������� �������� ��������� ���������(1 - �������� ������, 0 - �� ��������) (���)
    KU_MKOR MKORd;          // ������ ����������� ��������� (���) 
    KU_MKOR MKORp;          // ������ ����������� ��������� (���)
	int Pr;                 // ������� ������� ���������� ������ ����� ������������� (���)
	int kPr;	            // ��������� ����� ����� � ������ ������� ������������� (���)
	KU_TimeDATA tobn_sys;   // ��������� ����� ���������� ��������� ��� (TBO)
	int taB;	            // ����� ����������� ������� �� ������������ ���� ������ �� ��� (TBO) 
	int Kp[NI];             // ������ ��������� ������ � ���������� � ���������� ������ ��������� (TBO)
	int NP;                 // ���������� ���������� � ���������� ������ ��������� (TBO)
	s_PARC PC[NI][2];       // ������ ���������� ��������� ������ ��� ������� ����������� ���������������� (TBO)
	int Pprc;               // ������� ������������ ��������� ����� (1 - �������, 2 - ������) (���)

}RBPA_INP;       /* ��������� ������� ���������� RBPA */     


typedef struct 
{
	int k0;                 // ����� ������� ����� �� ��������� ������������ (TBO)
	int Kv[NI];             // ������ ������� ��������� ������ ��� ������� �����. ������ ������������� ���������� ������ (TBO)
	int NV;                 // ���-�� ������� �����. ��� ������������� ���������� ������ (TBO)
	int tobn;               // ����� ��������� ��� (TBO) 
	double dt;              // ��������� ������ ����������� ��������� ��� (TBO)
	double P;               // �������� ������� �� ���������� ��������� ��� � ������ ��������� ������ ��������� (TBO)
	double T1a;             // ������ ������� ����� ������������� ����� (TBO)
	double T;               // ������ ��������� �� �� ������ ����� ����������� ������� (TBO)
	double i;               // ���������� ������ �� ������ ����� ����������� ������� (TBO)
	double e;               // �������������� ������ �� ������ ����� ����������� ������� (TBO)
	double Omg;             // ������������ ������� �� �� ������ ����� ����������� ������� (TBO)
	double ompi;            // �������� ������� �� ������ ����� ����������� ������� (TBO)
	int nv;                 // ����� �������� ������ ����. ��� ������������ ���������� ������ (TBO)
	double dtk;             // �������� � "���������" ������� ��-�� ��������� (TBO)
	double Aop[NI][5][6];   // ������ ����. ��� ������������� ���������� ������ (TBO)
	double Ata[NI][6];      // ������ ����. ��� ������������� ����������������� ������� (TBO)
	int PRkoef;             // ������� ������������ �������� ��������� ���������� (TBO)
	int Prpa;               // ������� ������� �������� ��������� �������������(1 - �������� ������, 0 - �� ��������) (TBO)

}RBPA_OUT;       /* ��������� �������� ���������� RBPA */


typedef struct 
{
	double Rod[6];        // ������� ����������� ������ ���������� ������(TBO) 
    KU_TimeDATA tod;      // ����� �������� �������(TBO)                       
    KU_DateDATA Dz;       // �������� ���� �������(���)                         
    int tip;              // ��� ������(����)                                  
    int Pv;               // ������� �����(���)                                
    int Pprc;             // ������� ������������ ��������� ����� (1 - �������, 2 - ������) (���)
    int kt;               // �������� ����� �����, �������� ���������� (���)                       
    KU_MKOR MKORd;        // ������ ����������� ��������� (TBO) 
    KU_MKOR MKORp;        // ������ ����������� ��������� (TBO)                              

}RBU_E_INP;      /* ���������  ������� ���������� RBU_E */


typedef struct 
{
	MInt TOgr[60];    // ������ ���������� ����������� (TBO)
    int Nkor;         // ����� ���������� ��������� (TBO)
	int kt;           // �������� ����� �����, �������� ���������� (TBO)

}RBU_E_OUT;      /* ��������� �������� ���������� RBU_E */


typedef struct
{
   char J[15];        // �������� ����� ������� (���)
   int NZTI;          // �������� ���.��� �� ����� (����)
   int Nv;            // ���.����� ����� (���)
   int Np_osn;        // ����� ���.����� (���)
   int Np_rez;        // �����.���.����� (���� Np_rez=0 - ���� �� ��������) (���)
   int Nzti_rez;      // ����� ��� ���.�����,� �-��� ���������� ���������� ���������� ���.����. (���)
   PageZTI mZTI_osn;  // ���-�� ��������� � ���.����� (TBO)
   PageZTI mZTI_rez;  // ���-�� ��������� � ���.����� (TBO)

}FormM_ZTI_INP;   /* ��������� ������� ���������� FormM_ZTI */


typedef struct 
{
	int Nv;            // �������� ����� ������� (�����): 1,2,3,4,5,6,7,8 (TBO)
	KU_TimeDATA tv;    // ����� ������� (TBO)
	KU_TimeDATA tz;    // ����� ������ (TBO)
	KU_TimeDATA ta;    // ����� ������� (TBO)
	KU_ZTI MZTI[20];   // ������ �������� ����� ��� (TBO)

}KU_M_ZTI;        /* ��������� ��� ��� ����� (�������� ��������� FormM_ZTI) */


typedef struct 
{
  double Rod[6];        // ������� ����������� ������ ���������� ������(TBO) 
  KU_TimeDATA tod;      // ����� �������� �������(TBO)                    
  KU_TimeDATA ta2;      // ����� ������ ������� ����� (TBO)                      
  KU_DateDATA Dz;       // �������� ���� �������(���)                         
  int tip;              // ��� ������(����)                                  
  int Pv;               // ������� �����(���) 
  double DEL_UT1;       // �������� � �������� UTC(���)                  
  int Npost;            // ����� �����(���)  
  int Kvi;              // ���������� ���������� ������ ���������(����)
  KU_MKOR MKORd;        // ������ ����������� ��������� (TBO) 
  KU_MKOR MKORp;        // ������ ����������� ��������� (TBO)
  int Pizm;             // ������� ��������� (0 - ��������� �� ���������, 1 - ������� ��������� ��������) (TBO)
  int Pvdv;             // ������� ������ ������������ ������� (TBO) 
                        // (1 - ������ ������� � ���-�� ����������� ���������, 2 - ������ ������� � ���-�� ���-�� �-��� ����������� ����������(ODV)
                        //  3 - ������ ������� �� ���)
  int Pzap;             // ������� �������  (0 - ���������� ���������, 1 - �������������� ���������) (���)        

}NPI_INP;        /* ��������� ������� ���������� NPI */      


typedef struct 
{
   PageZTI MPageZTI[8][7];  // ������ ��������� �� ������ �������� (TBO)
   int Ndv;                 // ����� ������������ ����� (TBO)
   int Pizm;                // ������� ��������� (0 - ��������� �� ���������, 1 - ������� ��������� ��������) (TBO)

}MIZM;           /* ��������� �������� ���������� NPI */ 


typedef struct 
{
 int T_tip;                // ��� ������� ��������� 
 KU_TimeDATA T_top;        // ����� �������� �������� �������   Rop 
 KU_TimeDATA T_tod;        // ����� �������� ������������ �������   Rod 
 double T_Rod[6];          // ����������� ������ ���������� ������ Rod 
 int T_Pnk;                // ������� ������� ��������:   1 - ����, 0 - ��� 
 KU_MKOR     T_STRKOR;     // ���������  ������� ��������� 
 KU_M_ZTI    T_VIT_ZTI;    // ���������  ��� ��� ����� 
 double  T_DEL_UT1;        // �������� � �������� UTC 
 double T_sdp[6];          // ������ ��������� ������ �� r,v,tet,xi,fi,b 
 int T_Pup;                // ������� ����� �������� ���: 1 - ��, 0 - ��� 
 int T_Pzm;                // ������� ������������� ������ ������� MROM:   1 - ����������, 0 - ��� 
 KU_STR_MROM T_MROM[8];    // ������ �������� ����� ����������� ����������� ��������� OBIZM 

}KU_INP_OBM;     /* ��������� ������� ���������� ����������� ��������� OBM */


typedef struct 
{
 double T_Rop[6];          // ������� ������ ���������� ������ Rop 
 double T_Rmz[6];          // ������ ����������� ����������� ��������� Rmz (����������) 
 double T_DEL_Rmz[6];      // ������� ����� ���������� � ������� ��������� ���������� ������ 
 double T_K1_b[6][6];      // �������������� ������� ������ ����������� ��������� (r,v,teta,xi,fi,b)
 KU_STR_MROM T_MROM[8];    // ������ �������� ����� ����������� ����������� ��������� OBIZM 
 KU_STR_MAXOTKL T_MOTKL[3];// ������ �������� ����������� MAXOTKL
 int T_Ppob;               // Ppob  -  ������� ����������� ��������� ��������� OBIZM 

}KU_OUT_OBM;     /* ��������� �������� ���������� ����������� ��������� OBM */


typedef struct 
{
 KU_INP_OBM INPOBM;      // ��������� ������� ���������� ����������� ��������� OBM 
 KU_OUT_OBM OUTOBM;      // ��������� �������� ���������� ����������� ��������� OBM 

}KU_STR_OBM;     /* ���������  ������� � �������� ���������� ����������� ��������� OBM */

/******************************************************************************************/


/******************************************************************************************/
/*                     ����������� �������������� ��������� ���                           */
/******************************************************************************************/
// XKY.���.5.3. ��������� ���������
int FormM_ZTI(FormM_ZTI_INP *INPFormMZTI, KU_M_ZTI *OUTFormMZTI);
int NPI(NPI_INP *INPNPI, MIZM *OUTNPI);

// XKY.HBO.5.4. ������ ������������ ��� ����� ����
int CUR_E(CUR_E_INP *INPCUR, CUR_E_OUT *OUTCUR);

// XKY.���.5.7. ������ ������ ��� �������� � ���������� ��
void RBPA(RBPA_INP *INPRBPA, RBPA_OUT *OUTRBPA);

// XKY.HBO.5.11. ������ ������������������� ������� ���������������� ��
int RBU_E(RBU_E_INP *INPRBU, RBU_E_OUT *OUTRBU);

/******************************************************************************************/

#endif