# BaseKernel – My 32-bit simple Kernel

This is a custom 32-bit x86 protected-mode kernel built by following the 539kernel guide (A Journey in Creating an Operating System Kernel). It includes a simple bootloader, descriptor tables, interrupt handlers, and core OS features inspired by the 539kernel project.

<div align="center">
<img src="https://github.com/ankushhKapoor/BaseKernel/blob/main/ss.png" align="center" style="width: 80%" />
</div>

**Features:** 
- **Protected-mode boot:** 16-bit bootloader that enables the A20 line, sets up the GDT, and switches to 32-bit mode. 
- **GDT/IDT:** Flat segment descriptors (GDT) for code/data and an IDT for CPU exceptions and IRQs. 
- **Multitasking scheduler:** Preemptive, round-robin context-switching on each timer tick. 
- **Virtual memory paging:** 4 GiB linear address space via basic page tables. 
- **Disk I/O & FS:** Basic ATA driver and simple filesystem for reading, creating files from disk. 
- **Console I/O:** VGA text-mode output for simple user interaction.

**Build and Run:**  
The kernel is compiled with `gcc` and `nasm` and run under QEMU/Bochs. It demonstrates the key OS concepts (multitasking, paging, interrupts) taught by the 539kernel book.

