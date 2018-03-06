#include "WalletOkButton.h"
#include "Settings/Settings.h"
#include "Style/Style.h"

namespace WalletGui {

namespace {

const char WALLET_OK_BUTTON_STYLE_SHEET_TEMPLATE[] =
  "* {"
    "font-family: %fontFamily%;"
  "}"

  "WalletGui--WalletOkButton {"
    "min-width: 80px;"
    "max-width: 80px;"
    "min-height: 30px;"
    "max-height: 30px;"
    "font-size: %fontSizeNormal%;"
    "color: #ffffff;"
    "background-color: %backgroundColorBlueNormal%;"
    "border: 1px solid %backgroundColorBlueNormal%;"
  "}"

  "WalletGui--WalletOkButton:disabled {"
    "background-color: %backgroundColorBlueDisabled%;"
    "border: 1px solid %backgroundColorBlueDisabled%;"
  "}"

  "WalletGui--WalletOkButton:hover {"
    "background-color: %backgroundColorBlueHover%;"
    "border: 1px solid %backgroundColorBlueHover%;"
  "}"

  "WalletGui--WalletOkButton:pressed {"
    "background-color: %backgroundColorBluePressed%;"
    "border: 1px solid %backgroundColorBluePressed%;"
  "}";

}

WalletOkButton::WalletOkButton(QWidget* _parent) : QPushButton(_parent) {
  setStyleSheet(Settings::instance().getCurrentStyle().makeStyleSheet(WALLET_OK_BUTTON_STYLE_SHEET_TEMPLATE));
}

WalletOkButton::~WalletOkButton() {
}

}
