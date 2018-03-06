#include "SortedAddressBookModel.h"
#include "AddressBookModel.h"

namespace WalletGui {

SortedAddressBookModel::SortedAddressBookModel(QAbstractItemModel* _sourceModel, QObject* _parent) : QSortFilterProxyModel(_parent) {
  setSourceModel(_sourceModel);
  setDynamicSortFilter(true);
  sort(AddressBookModel::COLUMN_LABEL, Qt::DescendingOrder);
}

SortedAddressBookModel::~SortedAddressBookModel() {
}

bool SortedAddressBookModel::lessThan(const QModelIndex& _left, const QModelIndex& _right) const {
  QString leftLabel = _left.data(AddressBookModel::ROLE_LABEL).toString();
  QString rightLabel = _right.data(AddressBookModel::ROLE_LABEL).toString();

  return QString::compare(leftLabel, rightLabel, Qt::CaseInsensitive) > 0;
}

}
