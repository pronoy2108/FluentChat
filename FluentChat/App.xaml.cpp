﻿#include "pch.h"

#include "App.xaml.h"
#include "StartWindow.xaml.h"
#include "AppViewModel.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Controls;
using namespace Microsoft::UI::Xaml::Navigation;
using namespace FluentChat;
using namespace FluentChat::implementation;

App::App()
{
    InitializeComponent();

#if defined _DEBUG && !defined DISABLE_XAML_GENERATED_BREAK_ON_UNHANDLED_EXCEPTION
    UnhandledException([this](IInspectable const&, UnhandledExceptionEventArgs const& e)
    {
        if (IsDebuggerPresent())
        {
            auto errorMessage = e.Message();
            __debugbreak();
        }
    });
#endif
}

FluentChat::AppViewModel App::AppViewModel()
{
    return m_appViewModel;
}

void App::OnLaunched(LaunchActivatedEventArgs const&)
{
    m_appViewModel.OpenStartWindow();
}