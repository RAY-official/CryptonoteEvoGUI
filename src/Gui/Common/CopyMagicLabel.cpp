#include "CopyMagicLabel.h"
#include "Settings/Settings.h"
#include "Style/Style.h"

namespace WalletGui {

namespace {

const char COPY_MAGIC_LABEL_STYLE_SHEET_TEMPLATE[] =
  "* {"
    "font-family: %fontFamily%;"
  "}"

  "WalletGui--CopyMagicLabel {"
    "color: %fontColorGreen%;"
    "font-size: %fontSizeSmall%;"
  "}";

}

CopyMagicLabel::CopyMagicLabel(QWidget* _parent) : MagicLabel(_parent) {
  setStyleSheet(Settings::instance().getCurrentStyle().makeStyleSheet(COPY_MAGIC_LABEL_STYLE_SHEET_TEMPLATE));
}

CopyMagicLabel::~CopyMagicLabel() {
}

}
