#include "pch.h"
#include "ReactPackageProvider.h"

#include <WinRTTurboModule.h>
#include <ReactPackageProvider.g.cpp>
#include <TurboModuleProvider.h>

namespace local
{
    using namespace winrt::WinRTTurboModule;
    namespace impl
    {
        using namespace winrt::WinRTTurboModule::implementation;
    }
}

void local::impl::ReactPackageProvider::CreatePackage(const winrt::Microsoft::ReactNative::IReactPackageBuilder& packageBuilder) noexcept
{
    winrt::Microsoft::ReactNative::AddTurboModuleProvider<::WinRTTurboModule::WinRTTurboModule>(packageBuilder, L"WinRTTurboModule");
}
