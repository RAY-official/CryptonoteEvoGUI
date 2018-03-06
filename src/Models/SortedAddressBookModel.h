#pragma once

#include <QSortFilterProxyModel>

namespace WalletGui {

class SortedAddressBookModel : public QSortFilterProxyModel {
  Q_OBJECT
  Q_DISABLE_COPY(SortedAddressBookModel)

public:
  SortedAddressBookModel(QAbstractItemModel* _sourceModel, QObject* _parent);
  ~SortedAddressBookModel();

protected:
  bool lessThan(const QModelIndex& _left, const QModelIndex& _right) const override;
};

}
