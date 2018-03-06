#pragma once

#include <QSortFilterProxyModel>

namespace WalletGui {

class DonationAddressesModel : public QSortFilterProxyModel {
  Q_OBJECT
  Q_DISABLE_COPY(DonationAddressesModel)

public:
  DonationAddressesModel(QAbstractItemModel* _sourceModel, QObject* _parent);
  ~DonationAddressesModel();

  virtual QVariant data(const QModelIndex& _index, int _role) const override;

protected:
  virtual bool filterAcceptsRow(int _sourceRow, const QModelIndex& _sourceParent) const override;
  virtual bool filterAcceptsColumn(int _sourceColumn, const QModelIndex& _sourceParent) const override;
};

}
