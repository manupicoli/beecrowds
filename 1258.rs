    use std::io;

    fn main() {
        const ERROR_MESSAGE : &str = "Not a number!";
        let mut first = true;

        loop {
            let mut infos = Vec::new();
            let mut n : String = String::new();
            io::stdin().read_line(&mut n).expect(ERROR_MESSAGE);

            let num = n.trim().parse::<i32>().expect(ERROR_MESSAGE);

            if num == 0 {
                break;
            }

            if !first {
                println!();
            }

            first = false;

            let mut counter = 0;

            while counter < num {
                let mut estudante : String = String::new();
                let mut camiseta : String = String::new();

                io::stdin().read_line(&mut estudante).expect(ERROR_MESSAGE);
                io::stdin().read_line(&mut camiseta).expect(ERROR_MESSAGE);

                let collection: Vec<&str> = camiseta.split_whitespace().collect();    

                let cor = collection[0].to_string();
                let tamanho = collection[1].to_string();
                                
                infos.push((cor, tamanho, estudante.trim().to_string()));
                counter += 1;
            }

            infos.sort_by(|a, b| {
                a.0.cmp(&b.0)
                    .then_with(|| b.1.cmp(&a.1))
                    .then_with(|| a.2.cmp(&b.2))
            });

            for (c, t, e) in infos {
                println!("{} {} {}", c, t, e);
            }
        } 
    }