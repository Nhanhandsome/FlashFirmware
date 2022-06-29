Flash firmware


the device include: 

1. Bootloader: Chọn chương trình thực thi
2. Flash firmware: Update chương trình mới, factory firmware went error
3. App main: Chương trình chính.
4. Factory app: chương trình sau khi xuất kho
5. Stoge (memory): lưu trữ dữ liệu, chương trình mới khi có bản update.

Example, flash of device have 2 MB(2048 KB):

Start address : 0x0800000

32Kb : Bootloader (0x0800000)
64Kb : Flash firmware (0x0808000)
640Kb : App main (0x0818000)
640Kb : Factory App (0x08B8000)
672Kb : memory (0x0958000)

State machine:
Step 0 : check factory command, if yes -> step 4, else -> step 2.
Step 1 : check new firmware, if no firmware -> step 3, else -> step 2.
Step 2 : update firmware, if done -> step 3, else -> delete firmware error -> step 3.
Step 3 : run main firmware
Step 4 : run factory firmware