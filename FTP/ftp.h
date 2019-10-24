#ifndef __FTP_H__
#define __FTP_H__
#include "lwip\api.h"



/*
* FTP_COMMAND_THREAD_STACK: ������ ����� ������ ��������� ������ FTP 
* 
*/
#define FTP_COMMAND_THREAD_STACK    512
/*
* FTP_ACCEPT_THREAD_PRIORITY: ��������� ������ ������ ��������� ������ FTP.
* 
*/
#define FTP_COMMAND_THREAD_PRIORITY 2
/*
* FTP_ACCEPT_THREAD_PRIORITY: ��������� ������ ���������� � ����� ��������.
* 
*/
#define FTP_ACCEPT_THREAD_PRIORITY 1
/*
* FTP_ACCEPT_THREAD_STACK: ������ ����� ������ ���������� � ����� ��������
* 
*/
#define FTP_ACCEPT_THREAD_STACK    80
/*
* FTP_COMMON_BUFF_SIZE: ������ ������ ftp, ������������ ��� ������, ������, 
*                       ���������� �������� ���� � �.�.
* 
*/
#define FTP_COMMON_BUFF_SIZE       256

int FTP_Init(void);
void FTP_Accept_thread(void* arg);
void FTP_Command_thread(struct netconn *conn);
#endif 
