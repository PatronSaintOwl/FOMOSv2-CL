use core::ptr;

pub(crate) fn refresh_screen() {
    /* loop {
        // call display.s
    } */
    const UART0: *mut u8 = 0x0900_0000 as *mut u8;
    let out_str = b"screen.rs \n";
    for byte in out_str {
        unsafe {
            ptr::write_volatile(UART0, *byte);
        }
    }
}