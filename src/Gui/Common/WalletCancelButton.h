#pragma once

#include <QPushButton>

namespace WalletGui {

class WalletCancelButton : public QPushButton {
  Q_OBJECT
  Q_DISABLE_COPY(WalletCancelButton)

public:
  explicit WalletCancelButton(QWidget* _parent);
  ~WalletCancelButton();
};

}
