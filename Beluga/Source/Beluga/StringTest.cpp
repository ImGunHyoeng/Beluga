#include "BelugaMinimal.h"

void StringTest()
{
	
	//����
		//char	"asdf"
		//wchar	L"asdf"
		// tchar TEXT("asdf")
		// 
		// 

	//���� ������ =
	
	//printf

	//Format
		//

	//operator []

	//��� ��

	//TCHAR* ���
	//operator *

	//���̱��ϱ�
	{
		FString strA(TEXT("strA"));
		int32 LenStrA = strA.Len();
		check(LenStrA == 5);//assert
	}
	//Replace

	{
		FString str(TEXT("asdf"));
		FString result=str.Replace(TEXT("sd"), TEXT("ds"));
		check(result == TEXT("adsf"));
	}
	//insert

	//clear

	//split
	
	//IsEmpty

	//Shrink

	//RemoveAt

	//find �� �ε���

	
	//Left
	{
		FString str(TEXT("qwerasdfzxcv"));
		FString out=str.Left(4);
		check(out == TEXT("qwer"));
	}
	//Mid
	//Right

	//�빮�ڷ� ��ȯ,�ҹ��ڷ� ��ȯ
	
	//
}