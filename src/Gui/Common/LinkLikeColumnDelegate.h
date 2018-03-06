#pragma once

#include <QStyledItemDelegate>

namespace WalletGui {

class LinkLikeColumnDelegate : public QStyledItemDelegate {
  Q_OBJECT
  Q_DISABLE_COPY(LinkLikeColumnDelegate)

public:
  explicit LinkLikeColumnDelegate(QObject* _parent);
  ~LinkLikeColumnDelegate();

  void paint(QPainter* _painter, const QStyleOptionViewItem& _option, const QModelIndex& _index) const override;
};

}
