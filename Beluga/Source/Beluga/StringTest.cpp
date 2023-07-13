#include "BelugaMinimal.h"
#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaStringTest, "Beluga.String",\
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)

bool FBelugaStringTest::RunTest(const FString& Parameters)
{
	//TestTrue(TEXT("Always FAIL"), true);//자동으로 테스트 실행됨
	
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
	{
		FString strA(TEXT("strA"));
		//int32 LenStrA = strA.Len();
		check(strA[7]);
	}
	/*FORCEINLINE const TCHAR& operator[](int32 Index) const
	{
		checkf(IsValidIndex(Index), TEXT("String index out of bounds: Index %i from a string with a length of %i"), Index, Len());
		return Data.GetData()[Index];
	}*/
	//대소 비교

	//TCHAR* 얻기
	//operator *
	{

	}
	//길이구하기
	{
		FString strA(TEXT("strA"));
		int32 LenStrA = strA.Len();
		check(LenStrA == 5);//assert
	}
	//Replace

	{
		FString str(TEXT("asdf"));
		FString result = str.Replace(TEXT("sd"), TEXT("ds"));
		check(result == TEXT("adsf"));
	}
	//insert

	//clear

	//split

	//IsEmpty
	{
		FString str(TEXT("asdf"));
		TestEqual(TEXT("isEmpty"), str.IsEmpty(), true);
	}
	/*UE_NODISCARD FORCEINLINE bool IsEmpty() const
	{
		return Data.Num() <= 1;
	}*/
	//Shrink

	//RemoveAt

	//find 로 인덱스


	//Left
	{
		FString str(TEXT("qwerasdfzxcv"));
		FString out = str.Left(4);
		check(out == TEXT("qwer"));
	}
	//Mid
	//Right

	//대문자로 변환,소문자로 변환

	//
	return true;
}

