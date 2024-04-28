#ifndef CRYPTO_H_
#define CRYPTO_H_

#include <iostream>
#include <windows.h>
#include <wincrypt.h>
#include <stdio.h>

using namespace std;

class Crypto
{
private:

	DWORD dwIndex = 0;
	DWORD dwType;
	DWORD cdName;
	LPTSTR pszName, x;

	HCRYPTPROV hProv;
	HCRYPTKEY hSessionKey;
public:

	void Encrypt();
	void Decrypt();


	Crypto();
	~Crypto();


};

#endif