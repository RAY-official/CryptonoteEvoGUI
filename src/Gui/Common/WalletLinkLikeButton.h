#pragma once

#include <QPushButton>

namespace WalletGui {

class WalletLinkLikeButton : public QPushButton {
  Q_OBJECT
  Q_DISABLE_COPY(WalletLinkLikeButton)

public:
  explicit WalletLinkLikeButton(QWidget* _parent);
  ~WalletLinkLikeButton();
};

class WalletTinyLinkLikeButton : public WalletLinkLikeButton {
  Q_OBJECT
  Q_DISABLE_COPY(WalletTinyLinkLikeButton)

public:
  explicit WalletTinyLinkLikeButton(QWidget* _parent);
  ~WalletTinyLinkLikeButton();
};

class WalletNormalLinkLikeButton : public WalletLinkLikeButton {
  Q_OBJECT
  Q_DISABLE_COPY(WalletNormalLinkLikeButton)

public:
  explicit WalletNormalLinkLikeButton(QWidget* _parent);
  ~WalletNormalLinkLikeButton();
};

}
