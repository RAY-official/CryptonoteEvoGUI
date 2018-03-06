#pragma once

#include <QStyledItemDelegate>

namespace WalletGui {

class TransactionsAmountDelegate : public QStyledItemDelegate {
  Q_OBJECT
  Q_DISABLE_COPY(TransactionsAmountDelegate)

public:
  TransactionsAmountDelegate(bool _hideLongAmounts, QObject* _parent);
  ~TransactionsAmountDelegate();
  void paint(QPainter* _painter, const QStyleOptionViewItem& _option, const QModelIndex& _index) const override;

private:
  bool m_hideLongAmounts;
  QLinearGradient m_amountGradient;
};

}
