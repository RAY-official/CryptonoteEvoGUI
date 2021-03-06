#include "WalletNavigationButton.h"
#include "Settings/Settings.h"
#include "Style/Style.h"

namespace WalletGui {

namespace {

const char WALLET_NAVIGATION_BUTTON_STYLE_SHEET_TEMPLATE[] =
  "* {"
    "font-family: %fontFamily%;"
  "}"

  "WalletGui--WalletNavigationButton {"
    "min-width: 136px;"
    "max-width: 136px;"
    "min-height: 30px;"
    "max-height: 30px;"
    "font-size: %fontSizeSmall%;"
    "border-radius: 2px;"
    "border: 1px solid %borderColor%;"
    "background-color: %backgroundColorGray%;"
    "color: %fontColorBlueNormal%;"
  "}"

  "WalletGui--WalletNavigationButton:hover {"
    "background-color: #ffffff;"
    "color: %fontColorBlueHover%;"
  "}"

  "WalletGui--WalletNavigationButton:pressed {"
    "background-color: %backgroundColorGray%;"
    "color: %fontColorBluePressed%;"
  "}";

}

WalletNavigationButton::WalletNavigationButton(QWidget* _parent) : QPushButton(_parent) {
  setStyleSheet(Settings::instance().getCurrentStyle().makeStyleSheet(WALLET_NAVIGATION_BUTTON_STYLE_SHEET_TEMPLATE));
}

WalletNavigationButton::~WalletNavigationButton() {
}

}
