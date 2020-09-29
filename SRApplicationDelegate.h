


@interface SRApplicationDelegate : NSObject <NSApplicationDelegate, NSMenuDelegate>
{
	NSMenu* statusMenu;
	NSStatusItem* statusItem;
	NSMutableDictionary* refreshState;
	NSMutableDictionary* displaySettings;
	NSMutableSet* displayListState;
	NSLock* displayListStateLock;
	NSUserDefaults *userDefaults;
}

- (void) displayChangeWatcher;
- (void) refreshStatusMenu;

@end

