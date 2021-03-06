#include "WalletLinkLikeButton.h"
#include "Settings/Settings.h"
#include "Style/Style.h"

namespace WalletGui {

namespace {

const char WALLET_LINK_LIKE_BUTTON_STYLE_SHEET_TEMPLATE[] =
  "* {"
    "font-family: %fontFamily%;"
  "}"

  "WalletGui--WalletLinkLikeButton {"
    "border: 1px solid transparent;"
    "background-color: transparent;"
    "color: %fontColorBlueNormal%;"
  "}"

  "WalletGui--WalletLinkLikeButton:hover {"
    "color: %fontColorBlueHover%;"
  "}"

  "WalletGui--WalletLinkLikeButton:pressed {"
    "color: %fontColorBluePressed%;"
  "}"

  "WalletGui--WalletTinyLinkLikeButton {"
    "font-size: %fontSizeTiny%;"
    "min-height: 12px;"
  "}"

  "WalletGui--WalletNormalLinkLikeButton {"
    "font-size: %fontSizeNormal%;"
    "min-height: %fontSizeNormal%;"
  "}";

}

WalletLinkLikeButton::WalletLinkLikeButton(QWidget* _parent) : QPushButton(_parent) {
  setStyleSheet(Settings::instance().getCurrentStyle().makeStyleSheet(WALLET_LINK_LIKE_BUTTON_STYLE_SHEET_TEMPLATE));
}

WalletLinkLikeButton::~WalletLinkLikeButton() {
}

WalletTinyLinkLikeButton::WalletTinyLinkLikeButton(QWidget* _parent) : WalletLinkLikeButton(_parent) {
}

WalletTinyLinkLikeButton::~WalletTinyLinkLikeButton() {
}

WalletNormalLinkLikeButton::WalletNormalLinkLikeButton(QWidget* _parent) : WalletLinkLikeButton(_parent) {
}

WalletNormalLinkLikeButton::~WalletNormalLinkLikeButton() {
}

}
