#pragma once

#include <QStyledItemDelegate>

namespace WalletGui {

class RightAlignmentColumnDelegate : public QStyledItemDelegate {
  Q_OBJECT
  Q_DISABLE_COPY(RightAlignmentColumnDelegate)

public:
  RightAlignmentColumnDelegate(bool _isSelectable, QObject *parent);
  virtual ~RightAlignmentColumnDelegate();

  virtual void paint(QPainter* _painter, const QStyleOptionViewItem& _option, const QModelIndex& _index) const override;

private:
  bool m_isSelectable;
};

}
