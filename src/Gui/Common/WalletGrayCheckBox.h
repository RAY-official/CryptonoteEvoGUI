#pragma once

#include <QCheckBox>

namespace WalletGui {

class WalletGrayCheckBox : public QCheckBox {
  Q_OBJECT
  Q_DISABLE_COPY(WalletGrayCheckBox)

public:
  explicit WalletGrayCheckBox(QWidget *parent);
  ~WalletGrayCheckBox();
};

}
