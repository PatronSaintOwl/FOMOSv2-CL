use core::ptr;

// make support for US QWERTY keyboard first

global_asm!(r#"keyboard.s"#);
pub(crate) fn arm_keyboard() {
    const UART0: *mut u8 = 0x0900_0000 as *mut u8;
    let out_str = b"keyboard.rs \n";
    for byte in out_str {
        unsafe {
            ptr::write_volatile(UART0, *byte);
        }
    }
    // run keyboard_connected.s
    // run keyboard.s
}