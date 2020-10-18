#![no_std]
#![no_main]
#![feature(global_asm)]
#![feature(asm)]

global_asm!(include_str!("../strt_FOMOS.S"));

mod panic;

fn no_main() {
    // put cpu into 0x0900_0000 mode
    // print something after that
}
