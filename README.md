# lab3


In this program slob.c we implemented best-fit and first-fit algorithm. 
Slob is useful in small embedded Linux systems, mainly du to its small size 
and quick & efficient allocation. However, this slob.c is based on 
the First-Fit allocation scheme, which reduce the average running time 
of allocation request, but unfortunately, increased fragmentation. 
So, I modified the slob.c and I implemented the Best-Fit scheme, 
which will increase the average running time of allocation request 
and reduce the external fragmentation. 


Step 1:

The Linux Kernel is by default configured to use the more complex Slab allocator.
We first need to switch to the Slob allocator.

 * Look for CONFIG_EMBEDDED in the .config file present in the topmost level.
   Replace it by CONFIG_EMBEDDED=y.
   
 * Now type the following command in your kernel directory: make menuconfig
 
 * Next navigate to general setup - choose SLAB allocator. Choose SLOB as the new allocator.