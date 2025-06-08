use std::io;

fn main() {
    const ERROR_MESSAGE : &str = "Not a number!";

    let mut p1 : String = String::new();
    let mut p2 : String = String::new();
    
    io::stdin().read_line(&mut p1).expect(ERROR_MESSAGE);
    io::stdin().read_line(&mut p2).expect(ERROR_MESSAGE);

    let split1 = p1.split(' ');
    let split2 = p2.split(' ');

    let collection_p1: Vec<&str> = split1.collect();
    let collection_p2: Vec<&str> = split2.collect();

    let x1 : f64 = collection_p1[0].trim().parse().expect(ERROR_MESSAGE);
    let y1 : f64 = collection_p1[1].trim().parse().expect(ERROR_MESSAGE);
    let x2 : f64 = collection_p2[0].trim().parse().expect(ERROR_MESSAGE);
    let y2 : f64 = collection_p2[1].trim().parse().expect(ERROR_MESSAGE);

    let res : f64 = (((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1))).sqrt();

    println!("{:.4}", res);
}
