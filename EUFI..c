-EUFI_english_part1(https://www.youtube.com/watch?v=t3iwBQg_Gik&list=PLDcIWJGH-eMjhHtcH0CfB0P-8k0SuJDNd&index=4)
    -necessary document (3:05)
    -install mingw (https://www.youtube.com/watch?v=MemMGcakCjk)
        ->sudo apt install mingw-w64
    -install qemu ubuntu (https://itsfoss.com/qemu-ubuntu/)
       ->LC_ALL=C lscpu | grep Virtualization
    -qemu-system-x86_64 (15:14)
    -ls /usr/share/ovmf/bios.bin
    -EUFI application and loading with qemu (40:01)
        -Not sure if it will support arm64
    -EUFI as "BOOTAA64.efi jetson orin" 
        -https://forums.developer.nvidia.com/t/cannot-change-uefi-boot-logo/213739
        -https://github.com/NVIDIA/edk2-nvidia/wiki
    -GUID partition table gpt Disk layout (43:30)
        ->https://uefi.org/specs/UEFI/2.10/05_GUID_Partition_Table_Format.html
-Part2    
 -sgdisk in linux (3:17)
 -command->sgdisk -O  
 -command->sgdisk -P
 -Mbr mbr={

    .starting_chs={0x00,0x02,0x00}, //TODO:DW->Need to go over it again (24:18)
    .signature=0xAA55, //(25:57)
    };
 ->image size in bytes to OBA as sector (31:48)//TODO:DW->Need to go over it again 
 -
-
 -
 -
    -
-    
 -   
    -
-    
 -   
    -

