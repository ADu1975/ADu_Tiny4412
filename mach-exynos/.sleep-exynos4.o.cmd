cmd_arch/arm/mach-exynos/sleep-exynos4.o := arm-linux-gcc -Wp,-MD,arch/arm/mach-exynos/.sleep-exynos4.o.d  -nostdinc -isystem /opt/FriendlyARM/toolschain/4.5.1/lib/gcc/arm-none-linux-gnueabi/4.5.1/include -I/root/linux-3.0.86/arch/arm/include -Iarch/arm/include/generated -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-exynos/include -Iarch/arm/plat-s5p/include -Iarch/arm/plat-samsung/include -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork  -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float -gdwarf-2        -c -o arch/arm/mach-exynos/sleep-exynos4.o arch/arm/mach-exynos/sleep-exynos4.S

source_arch/arm/mach-exynos/sleep-exynos4.o := arch/arm/mach-exynos/sleep-exynos4.S

deps_arch/arm/mach-exynos/sleep-exynos4.o := \
    $(wildcard include/config/arm/trustzone.h) \
  /root/linux-3.0.86/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  include/linux/linkage.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  /root/linux-3.0.86/arch/arm/include/asm/linkage.h \
  /root/linux-3.0.86/arch/arm/include/asm/assembler.h \
    $(wildcard include/config/cpu/feroceon.h) \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/cpu/use/domains.h) \
  /root/linux-3.0.86/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
    $(wildcard include/config/arm/thumb.h) \
  /root/linux-3.0.86/arch/arm/include/asm/hwcap.h \
  /root/linux-3.0.86/arch/arm/include/asm/domain.h \
    $(wildcard include/config/io/36.h) \
  /root/linux-3.0.86/arch/arm/include/asm/memory.h \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/page/offset.h) \
    $(wildcard include/config/highmem.h) \
    $(wildcard include/config/dram/size.h) \
    $(wildcard include/config/dram/base.h) \
    $(wildcard include/config/have/tcm.h) \
    $(wildcard include/config/arm/patch/phys/virt.h) \
    $(wildcard include/config/arm/patch/phys/virt/16bit.h) \
  include/linux/const.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  /root/linux-3.0.86/arch/arm/include/asm/types.h \
  include/asm-generic/int-ll64.h \
  /root/linux-3.0.86/arch/arm/include/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  arch/arm/mach-exynos/include/mach/memory.h \
    $(wildcard include/config/mach/smdkv310.h) \
    $(wildcard include/config/mach/smdk5250.h) \
    $(wildcard include/config/mach/tiny4412.h) \
    $(wildcard include/config/exynos/mark/page/holes.h) \
  /root/linux-3.0.86/arch/arm/include/asm/sizes.h \
  include/asm-generic/sizes.h \
  include/asm-generic/memory_model.h \
    $(wildcard include/config/flatmem.h) \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/sparsemem/vmemmap.h) \
    $(wildcard include/config/sparsemem.h) \
  arch/arm/mach-exynos/include/mach/smc.h \

arch/arm/mach-exynos/sleep-exynos4.o: $(deps_arch/arm/mach-exynos/sleep-exynos4.o)

$(deps_arch/arm/mach-exynos/sleep-exynos4.o):
