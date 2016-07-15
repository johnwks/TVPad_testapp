tvpad test app
===========

First App for TVPad2.

Runs script.sh from $CWD (which should be /program/xxxxxxxxxx).

Supplied script.sh just spawns telnetd on port 2023 WITHOUT password protection :-

--
#!/bin/sh
cd /
telnetd -p 2023 -l /bin/sh &
--

Ensure script.sh exits and does not run indefinately.

2014-03-04

