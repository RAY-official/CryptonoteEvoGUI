#include "WalletDescriptionLabel.h"
#include "Settings/Settings.h"
#include "Style/Style.h"

namespace WalletGui {

namespace {

const char WALLET_DESCRIPTION_LABEL_STYLE_SHEET_TEMPLATE[] =
  "* {"
    "font-family: %fontFamily%;"
  "}"

  "WalletGui--WalletDescriptionLabel {"
    "color: %fontColorGray%;"
    "font-size: %fontSizeSmall%;"
    "padding-top: 0px;"
  "}";

}

WalletDescriptionLabel::WalletDescriptionLabel(QWidget* _parent) : QLabel(_parent) {
  setStyleSheet(Settings::instance().getCurrentStyle().makeStyleSheet(WALLET_DESCRIPTION_LABEL_STYLE_SHEET_TEMPLATE));
}

WalletDescriptionLabel::~WalletDescriptionLabel() {
}

}
