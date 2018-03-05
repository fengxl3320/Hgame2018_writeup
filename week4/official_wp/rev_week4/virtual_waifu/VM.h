#include <Windows.h>

typedef struct _VMDATA
{		//¶ÑÕ»
	DWORD ESP;
	DWORD EAX;
	DWORD EBX;
	DWORD ECX;
	DWORD EDX;
	DWORD ESI;
	DWORD EDI;
	DWORD EIP;
	PBYTE OEP;
	PBYTE CODE;
	PDWORD DATA;
	//PBYTE PARAM;
	//PBYTE PARAM1;
	BOOL  SFLAG;		//·ûºÅ±êÖ¾
	BOOL  ZFLAG;		//Áã±êÖ¾
} VMDATA, *PVMDATA;
enum myVm
{
	VM_X00_START = 0,
	VM_PUSH_EAX,
	VM_POP_EAX,

	VM_PUSH_EBX,
	VM_POP_EBX,

	VM_PUSH_NUM,
	VM_BYTE_MEM_GET,
	VM_BYTE_MEM_SET,

	VM_ADD,
	VM_SUB,
	VM_XOR,
	VM_JMP,
	VM_JZ,
	VM_EXIT,
	VM_CMP,

	VM_STRLEN_CALL

};