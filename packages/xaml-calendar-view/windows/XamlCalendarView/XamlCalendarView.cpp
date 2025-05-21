#include "pch.h"

#include "XamlCalendarView.h"

namespace winrt::XamlCalendarView
{

// See https://microsoft.github.io/react-native-windows/docs/native-modules for details on writing native modules

void XamlCalendarView::Initialize(React::ReactContext const &reactContext) noexcept {
  m_context = reactContext;
}

double XamlCalendarView::multiply(double a, double b) noexcept {
  return a * b;
}

} // namespace winrt::XamlCalendarView