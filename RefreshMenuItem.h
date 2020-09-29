

@interface RefreshMenuItem : NSMenuItem {
  CGDirectDisplayID _display;

  int refreshEnabled;
}

- (id)initWithDisplay:(CGDirectDisplayID)display;

- (CGDirectDisplayID)display;

- (Boolean)refreshEnabled;

@end
