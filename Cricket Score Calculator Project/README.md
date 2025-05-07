````markdown
# 🏏 Cricket Score Calculator (Console-Based)

A fun and interactive console-based **Cricket Score Calculator** written in **C++**, designed to simulate a limited-overs cricket match between two teams. The program takes ball-by-ball input from the user, handles match progression, tracks runs, wickets, extras, and even simulates outcomes like tie, victory, and all-out scenarios.

---

## 🎯 Features

- 🎬 Animated intro and color-coded terminal interface  
- 🔢 Ball-by-ball input for two innings (first and second half)  
- 🏏 Score types include:  
  - Runs (0–6)  
  - Wicket  
  - Wide ball  
  - No ball with Free Hit  
- 📊 Real-time score display:  
  - Total Score  
  - Wickets  
  - Current Run Rate  
  - Required Run Rate  
- 🎯 Match result calculation (Win by Runs/Wickets, Tie)  
- 🎨 Uses ANSI color codes for vibrant CLI experience  

---

## 🛠️ Tech Stack

- **Language**: C++  
- **Platform**: Windows (uses `windows.h` for `Sleep()` and `system("cls")`)  
- **Terminal**: ANSI-supported terminal for color output  

---

## 🔧 How to Run

1. **Clone or Download the Repository**

   ```bash
   git clone https://github.com/yourusername/cricket-score-calculator.git
````

2. **Open in any C++ IDE** (e.g., Code::Blocks, Dev-C++, Visual Studio)

3. **Compile and Run**

   * Make sure to use a Windows environment (due to `windows.h` dependency)
   * Build and Run the project

---

## 📸 Screenshots
![Screenshot (136)](https://github.com/user-attachments/assets/83513823-87ed-48b1-9770-86657899e21c)

---

## 🔄 Score Input Reference

| Action   | Input Value |
| -------- | ----------- |
| Dot Ball | 0           |
| Single   | 1           |
| Double   | 2           |
| Triple   | 3           |
| Four     | 4           |
| Five     | 5           |
| Six      | 6           |
| Wicket   | 7           |
| Wide     | 8           |
| No Ball  | 9 + \[run]  |

---

## ❗ Notes

* Maximum overs: **50**
* Ends when 10 wickets fall or overs are completed
* Realistic cricket rules for extras and free-hit logic

---

## 📌 Future Improvements (Optional)

* Add player names and statistics
* Export match summary to a file
* GUI version using C++ with Qt or another framework
* Cross-platform support (replace `windows.h` and `system("cls")`)

---

## 👨‍💻 Author

**Jagadeesan**
[GitHub](https://github.com/iamjagadeesan) • [LinkedIn](https://linkedin.com/in/iamjagadeesan)

---

## 📄 License

This project is licensed under the [MIT License](LICENSE).
