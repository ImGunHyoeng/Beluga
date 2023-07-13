#include "BelugaMinimal.h"
#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaStringTest, "Beluga.String",\
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)

bool FBelugaStringTest::RunTest(const FString& Parameters)
{
	//TestTrue(TEXT("Always FAIL"), true);//�ڵ����� �׽�Ʈ �����
	
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
	//��� ��

	//TCHAR* ���
	//operator *
	{

	}
	//���̱��ϱ�
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

	//find �� �ε���


	//Left
	{
		FString str(TEXT("qwerasdfzxcv"));
		FString out = str.Left(4);
		check(out == TEXT("qwer"));
	}
	//Mid
	//Right

	//�빮�ڷ� ��ȯ,�ҹ��ڷ� ��ȯ

	//
	return true;
}

