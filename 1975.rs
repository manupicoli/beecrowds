use std::io;
use std::collections::HashSet;
use std::collections::HashMap;

fn main() {
    const ERROR_MESSAGE: &str = "Not a number!";

    loop {
        let mut n = String::new();

        io::stdin().read_line(&mut n).expect(ERROR_MESSAGE);

        let variables: Vec<i32> = n.split_whitespace()
            .map(|s| s.trim().parse::<i32>().expect(ERROR_MESSAGE))
            .collect();

        let mut p = variables[0];
        let mut a = variables[1];
        let mut r = variables[2];

        if p == 0 && a == 0 && r == 0 {
            break;
        }

        let mut set: HashSet<String> = HashSet::new();
        let mut map: HashMap<String, i32> = HashMap::new();

        while p > 0 {
            let mut perolas = String::new();
            io::stdin().read_line(&mut perolas).expect(ERROR_MESSAGE);

            set.insert(perolas.trim().to_string());

            p -= 1;
        }

        while a > 0 {
            let mut name = String::new();
            io::stdin().read_line(&mut name).expect(ERROR_MESSAGE);

            map.insert(name.trim().to_string(), 0);

            r = variables[2];

            while r > 0 {
                let mut res = String::new();
                io::stdin().read_line(&mut res).expect(ERROR_MESSAGE);

                if set.contains(res.trim()) {
                    map.entry(name.trim().to_string()).and_modify(|e| *e += 1).or_insert(0);
                }

                r -= 1;
            }

            a -= 1;
        }

        let mut vec: Vec<(&String, &i32)> = map.iter().collect();
        vec.sort_by(|a, b| b.1.cmp(a.1).then(a.0.cmp(b.0)));

        let max = vec[0].1;

        let mut f: Vec<&str> = Vec::new();

        for (nome, valor) in &vec {
            if *valor == max {
                f.push(nome.as_str());
            }
        }

        println!("{}", f.join(", "));
    }
}