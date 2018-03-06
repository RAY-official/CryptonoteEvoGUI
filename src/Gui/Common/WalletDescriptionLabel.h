#pragma once

#include <QLabel>

namespace WalletGui {

class WalletDescriptionLabel : public QLabel {
  Q_OBJECT
  Q_DISABLE_COPY(WalletDescriptionLabel)

public:
  explicit WalletDescriptionLabel(QWidget* _parent);
  ~WalletDescriptionLabel();
};

}
