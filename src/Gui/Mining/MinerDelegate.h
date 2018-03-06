#pragma once

#include <QStyledItemDelegate>

namespace WalletGui {

class MinerRemoveDelegate : public QStyledItemDelegate {
  Q_OBJECT
  Q_DISABLE_COPY(MinerRemoveDelegate)

public:
  MinerRemoveDelegate(QAbstractItemView* _view, QObject* _parent);
  ~MinerRemoveDelegate();

  void paint(QPainter* _painter, const QStyleOptionViewItem& _option, const QModelIndex& _index) const override;

private:
  QAbstractItemView* m_view;
};

}
