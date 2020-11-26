/* lib.rs
 *
 * Build/compile:
 * cargo build
 *
 * Description:
 * This is FOMOSv2-CL's main file, main.c calls init_main() which then starts all the processes
 * FOMOSv2-CL runs.
 * */

#![no_main]
#![no_std]
#![feature(lang_items)]
#![feature(c_variadic)]
#![crate_type = "staticlib"]

mod lang;

extern crate arch;
extern crate kernel;
use kernel::{printfk::printfk::*};

#[no_mangle]
pub extern "C" fn init_main() {
    const TEXT: &'static str = "FOMOSv2-CL v2.3.5\n\0";
    print(TEXT);
    loop {  }
}

fn main() {
    unsafe { init_main(); }
}
