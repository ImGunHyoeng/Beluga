#include "BelugaMinimal.h"
DEFINE_LOG_CATEGORY(LogBeluga);

class FBelugaModule : public FDefaultGameModuleImpl
{
public:
	virtual void StartupModule() override//dll�� �ε��Ǹ� �ҷ�����
	{
		UE_LOG(LogBeluga, Display, TEXT("BelugaModule::StartupModule"));

		extern void StringTest();//��ũ�ϸ� ������ �ִ�. ������ ������Ϸ� �ϴ°�
		StringTest();//���δٸ� ������������ ������ �˼� ���� ������Ϸ� �ɺ��� �Ѱܼ� �˼� �ִ�.
	}
	virtual void ShutdownModule() override
	{
		UE_LOG(LogBeluga, Display, TEXT("BelugaModule::ShutdownModule"));
	}
};

IMPLEMENT_PRIMARY_GAME_MODULE(FBelugaModule, Beluga, "Beluga");