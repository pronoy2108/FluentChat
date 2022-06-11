﻿#pragma once

#include "LoginPage.g.h"

namespace winrt::FluentChat::implementation
{
    struct LoginPage : LoginPageT<LoginPage>
    {
        LoginPage();

        void LoginButton_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e);
    };
}

namespace winrt::FluentChat::factory_implementation
{
    struct LoginPage : LoginPageT<LoginPage, implementation::LoginPage>
    {
    };
}
