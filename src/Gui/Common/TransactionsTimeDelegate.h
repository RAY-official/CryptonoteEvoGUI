#pragma once

#include <QStyledItemDelegate>

namespace WalletGui {

class TransactionsTimeDelegate : public QStyledItemDelegate {
  Q_OBJECT
  Q_DISABLE_COPY(TransactionsTimeDelegate)

public:
  explicit TransactionsTimeDelegate(QObject* _parent);
  ~TransactionsTimeDelegate();

  virtual void paint(QPainter* _painter, const QStyleOptionViewItem& _option, const QModelIndex& _index) const override;
};

}
