#include "BelugaMinimal.h"
DEFINE_LOG_CATEGORY(LogBeluga);

class FBelugaModule : public FDefaultGameModuleImpl
{
public:
	virtual void StartupModule() override//dll이 로딩되면 불러와짐
	{
		UE_LOG(LogBeluga, Display, TEXT("BelugaModule::StartupModule"));

		extern void StringTest();//링크하면 언젠가 있다. 원래는 헤더파일로 하는것
		StringTest();//서로다른 번역단위간의 정보는 알수 없다 헤더파일로 심볼을 넘겨서 알수 있다.
	}
	virtual void ShutdownModule() override
	{
		UE_LOG(LogBeluga, Display, TEXT("BelugaModule::ShutdownModule"));
	}
};

IMPLEMENT_PRIMARY_GAME_MODULE(FBelugaModule, Beluga, "Beluga");