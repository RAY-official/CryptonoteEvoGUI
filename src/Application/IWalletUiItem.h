#pragma once

class QAbstractItemModel;
class QWidget;

namespace WalletGui {

class ICryptoNoteAdapter;
class IAddressBookManager;
class IDonationManager;
class IOptimizationManager;
class IMiningManager;
class IApplicationEventHandler;
class INewsReader;

class IWalletUiItem {
public:
  virtual ~IWalletUiItem() {}
  virtual void setCryptoNoteAdapter(ICryptoNoteAdapter* _cryptoNoteAdapter) {}
  virtual void setAddressBookManager(IAddressBookManager* _addressBookManager) {}
  virtual void setOptimizationManager(IOptimizationManager* _optimizationManager) {}
  virtual void setDonationManager(IDonationManager* _donationManager) {}
  virtual void setMiningManager(IMiningManager* _miningManager) {}
  virtual void setApplicationEventHandler(IApplicationEventHandler* _applicationEventHandler) {}
  virtual void setBlogReader(INewsReader* _blogReader) {}
  virtual void setMainWindow(QWidget* _mainWindow) {}
  virtual void setTransactionsModel(QAbstractItemModel* _model) {}
  virtual void setSortedTransactionsModel(QAbstractItemModel* _model) {}
  virtual void setNodeStateModel(QAbstractItemModel* _model) {}
  virtual void setWalletStateModel(QAbstractItemModel* _model) {}
  virtual void setAddressBookModel(QAbstractItemModel* _model) {}
  virtual void setSortedAddressBookModel(QAbstractItemModel* _model) {}
  virtual void setBlockChainModel(QAbstractItemModel* _model) {}
  virtual void setTransactionPoolModel(QAbstractItemModel* _model) {}
  virtual void setMinerModel(QAbstractItemModel* _model) {}
  virtual void updateStyle() {}
};

}
