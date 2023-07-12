#include "BelugaMinimal.h"

void StringTest()
{
	
	//생성
		//char	"asdf"
		//wchar	L"asdf"
		// tchar TEXT("asdf")
		// 
		// 

	//대입 연산자 =
	
	//printf

	//Format
		//

	//operator []

	//대소 비교

	//TCHAR* 얻기
	//operator *

	//길이구하기
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

	//find 로 인덱스

	
	//Left
	{
		FString str(TEXT("qwerasdfzxcv"));
		FString out=str.Left(4);
		check(out == TEXT("qwer"));
	}
	//Mid
	//Right

	//대문자로 변환,소문자로 변환
	
	//
}