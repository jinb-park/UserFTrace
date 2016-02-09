
	UserFTrace

function tracer for UserSpace.

It's a simple code to implement ftrace in UserSpace.
It hooks __gnu_mcount_nc to trace function.

To hook __gnu_mcount_nc in libc, Use LD_PRELOAD.



	~~ Environment ~~

It's only for ARM 32 bit.
