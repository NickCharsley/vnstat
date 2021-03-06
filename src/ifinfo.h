#ifndef IFINFO_H
#define IFINFO_H

int getifinfo(const char *iface);
int getiflist(char **ifacelist);
int readproc(const char *iface);
int readsysclassnet(const char *iface);
void parseifinfo(int newdb);
#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__) || defined(__FreeBSD_kernel__)
int readifaddrs(const char *iface);
#endif

#endif
