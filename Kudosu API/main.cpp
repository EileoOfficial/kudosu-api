#include "main.h"

#include <windows.h>
#include <iostream>

#define DEFINE_SUBROUTINE_ADDRESS(name, addr, cc) subroutineAddr* name = new subroutineAddr(#name, addr, cc);

// Welcome to Kudosu ! First thing you got to know : this is a TEMPLATE. IT DOESNT HAVE ANY LIBRARIES. You have to add them yourself, and that requires C++ and Lua skills!
// There is no pipe; you will have to add it yourself !
// This is good if you want to check getdatamodel addy :)

// Thanks for using Kudosu !



// i swear to god if you don't credit amoy or kudosu api for using this i'll fucking find u and do really mean shit to you
// other than that if ur legit then all good
// thx babe

// dont touch that
void endthefuckingfreeconsole() {
	DWORD* op = new DWORD;
	VirtualProtect(FreeConsole, sizeof(char), PAGE_EXECUTE_READWRITE, op);
	*(char*)FreeConsole = 0xC3;
	VirtualProtect(FreeConsole, sizeof(char), *op, op);
	delete op;
}
// dont touch this either
enum class callingConvention {
	ccCDECL,
	ccSTDCALL,
	ccFASTCALL,
	ccTHISCALL
};
// dont mind this
struct subroutineAddr {
	const char* name;
	uintptr_t addr;
	callingConvention cc;
	subroutineAddr(const char* name, uintptr_t addr, callingConvention cc) : name(name), addr(addr), cc(cc) {}
};
// u can touch this but FUCKING BEWARE BECAUSE IF U MESS UP U WILL HAVE TO FIX IT BACK AND IF U CANT U WILL HAVE TO FUCKING DOWNLOAD IT AGAIN
subroutineAddr* getDatamodel = new subroutineAddr("getDatamodel", 0xE79220, callingConvention::ccTHISCALL); // getdatamodel address, replace that with your addy and do not forget to change the cc! (calling convention)

void main::Main() {
	try {
		endthefuckingfreeconsole();
		AllocConsole();
		freopen("CONOUT$", "w", stdout);
		freopen("CONIN$", "r", stdin);
		SetConsoleTitle("Kudosu API by am0y");
		
		printf("Getdatamodel : PASS!\n");
		printf("Kudosu API ran successfully");
	}
	catch (...) {
		printf("Getdatamodel : FAIL!");
	}
}