#pragma once

#include <QPushButton>

namespace WalletGui {

class WalletNavigationButton : public QPushButton {
  Q_OBJECT
  Q_DISABLE_COPY(WalletNavigationButton)

public:
  explicit WalletNavigationButton(QWidget* _parent);
  ~WalletNavigationButton();
};

}
