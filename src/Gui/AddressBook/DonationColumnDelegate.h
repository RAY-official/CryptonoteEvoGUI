#pragma once

#include <QStyledItemDelegate>

namespace WalletGui {

class DonationColumnDelegate : public QStyledItemDelegate {
  Q_OBJECT
  Q_DISABLE_COPY(DonationColumnDelegate)

public:
  explicit DonationColumnDelegate(QObject* _parent);
  ~DonationColumnDelegate();

  void paint(QPainter* _painter, const QStyleOptionViewItem& _option, const QModelIndex& _index) const override;
};

}
