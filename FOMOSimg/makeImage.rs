use std::process::Command;

fn main() {
    print!("Making FOMOS image... \n");
    // use std::process::Command;

    let output = Command::new("dd")
        .arg("if=../FOMOS/setup.c")
        .arg("of=../FOMOS.img")
        .arg("bs=512")
        .arg("count=1")
        .output()
        .expect("failed to execute process");

    println!("status: {}", output.status);
    println!("stdout: {}", String::from_utf8_lossy(&output.stdout));
    println!("stderr: {}", String::from_utf8_lossy(&output.stderr));

    assert!(output.status.success());
}