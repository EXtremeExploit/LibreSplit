LibreSplitCtl
=============

LibreSplitCtl lets you to control a remote instance of LibreSplit via UNIX sockets.

This may be useful as a workaround for Wayland desktops, allowing you to set up your desktop environment to control LibreSplit similarly to how global hotkeys would work on X11.

Commands
--------

LibreSplitCtl can be used directly from your terminal:

```sh
libresplitctl <command>
```

And here are the supported commands so far:

| Command     | Timer is Stopped   | Timer is Running   |
| ---------   | ------------------ | ------------------ |
| start-split | Start timer        | Split              |
| stop-reset  | Reset timer        | Stop timer         |
| cancel      | Cancel the run     | -                  |
| unsplit     | Unsplit            | Unsplit            |
| skip        | Skip Split         | Skip Split         |
| exit        | Close LibreSplit   | Close LibreSplit   |
| help        | Show help message  | Show help message  |

So, for instance, using the following command:

```sh
libresplitctl start-split
```

While LibreSplit is open and waiting to start, will start the timer.
