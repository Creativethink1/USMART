#ifndef __USMART_STR_H
#define __USMART_STR_H	 
#include "usmart.h"	
//////////////////////////////////////////////////////////////////////////////////	 

/////////////////////////////////////////////////////////////////////////////////////
//USMART��Դռ�����@MDK 3.80A@2.0�汾��
//FLASH:4K~K�ֽ�(ͨ��USMART_USE_HELP��USMART_USE_WRFUNS����)
//SRAM:72�ֽ�(���ٵ������)
//SRAM���㹫ʽ:   SRAM=PARM_LEN+72-4  ����PARM_LEN������ڵ���4.
//Ӧ�ñ�֤��ջ��С��100���ֽ�.
////////////////////////////////////////////�û����ò���////////////////////////////////////////////////////	  
 
u8 usmart_get_parmpos(u8 num);						//�õ�ĳ�������ڲ������������ʼλ��
u8 usmart_strcmp(u8*str1,u8 *str2);					//�Ա������ַ����Ƿ����
u32 usmart_pow(u8 m,u8 n);							//M^N�η�
u8 usmart_str2num(u8*str,u32 *res);					//�ַ���תΪ����
u8 usmart_get_cmdname(u8*str,u8*cmdname,u8 *nlen,u8 maxlen);//��str�еõ�ָ����,������ָ���
u8 usmart_get_fname(u8*str,u8*fname,u8 *pnum,u8 *rval);		//��str�еõ�������
u8 usmart_get_aparm(u8 *str,u8 *fparm,u8 *ptype); 	//��str�еõ�һ����������
u8 usmart_get_fparam(u8*str,u8 *parn);  			//�õ�str�����еĺ�������.
#endif











