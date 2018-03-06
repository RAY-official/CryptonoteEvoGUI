#include "WalletGrayCheckBox.h"
#include "Settings/Settings.h"
#include "Style/Style.h"

namespace WalletGui {

const char GRAY_CHECK_STYLE_SHEET_TEMPLATE[] =
  "* {"
    "font-family: %fontFamily%;"
  "}"

  "WalletGui--WalletGrayCheckBox {"
    "color: %fontColorGray%;"
    "font-size: %fontSizeNormal%;"
    "border: none;"
  "}";

WalletGrayCheckBox::WalletGrayCheckBox(QWidget *parent) : QCheckBox(parent) {
  setStyleSheet(Settings::instance().getCurrentStyle().makeStyleSheet(GRAY_CHECK_STYLE_SHEET_TEMPLATE));
}


WalletGrayCheckBox::~WalletGrayCheckBox() {
}

}
