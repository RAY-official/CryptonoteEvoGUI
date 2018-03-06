#import <Foundation/NSObject.h>
#import <Foundation/NSNotification.h>

namespace WalletGui {
  class INotificationMonitorObserver;
}

@interface NotificationMonitor: NSObject {
  WalletGui::INotificationMonitorObserver* m_observer;
}
-(id) init: (WalletGui::INotificationMonitorObserver*) observer;
-(void) receive: (NSNotification*) notification;
@end
