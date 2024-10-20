# Store Management System using Java Swing and MySQL

## Project Introduction

This project is **Honor's second-year** endeavor, developed using **Java Swing** for the graphical user interface and **MySQL** for database management. It is an **online-based store management system** designed to streamline and automate the processes involved in running an online store.

### Features
- **Admin Login:** Allows the admin to manage products and orders after logging in.
- **User Login:** Enables users to register and log in to place orders.
- **Product Management:** Add, update, or remove products from the inventory.
- **Order Processing:** Efficiently handle customer orders from placement to delivery.
- **Reporting:** Generate insightful reports on sales, inventory, and customer activities.

### Usage
You are free to use this project as an **exam project** or for **educational purposes**. It serves as an excellent example of integrating Java Swing with MySQL to create a functional and user-friendly application.

## How to Use

### Prerequisites
Before setting up the project, ensure that the following tools are installed on your PC:

1. **Java Development Kit (JDK):**
   - **Download:** [Oracle JDK Downloads](https://www.oracle.com/java/technologies/downloads/)
   - **Installation Steps:**
     1. Install the JDK.
     2. Navigate to the JDK installation directory, typically `C:\Program Files\Java\jdk-<version>\bin`.
     3. Copy the path.
     4. Open **Environment Variables**:
        - Use the search bar to find "Environment Variables."
        - Under **System Variables**, select `Path` and click **Edit**.
        - Click **New** and paste the copied JDK `bin` path.
        - Click **OK** to save changes.
     5. **Note:** After updating Environment Variables, restart your PC.

2. **Maven (MVN):**
   - **Download:** [Apache Maven Downloads](https://maven.apache.org/download.cgi)
   - **Installation Steps:**
     1. Download the ZIP file.
     2. Extract it to the `C:` drive (e.g., `C:\apache-maven`).
     3. Add Maven to your **Environment Variables**:
        - Copy the path to the `bin` directory inside the Maven folder.
        - Follow the same steps as above to add this path to the `Path` variable.
     4. Restart your PC and verify the installation by running:
        ```bash
        java --version
        mvn --version
        ```

3. **XAMPP:**
   - **Download:** [XAMPP Downloads](https://www.apachefriends.org/download.html)
   - Install XAMPP for MySQL database management.

4. **Git:**
   - **Download:** [Git Downloads](https://git-scm.com/downloads)
   - Install Git for version control.

5. **Integrated Development Environment (IDE):**
   - Choose an IDE for editing, such as VSCode, IntelliJ IDEA, or NetBeans.

## Download Project 
- Open your terminal or command prompt from any directory.
- Clone the project using the following command:
  ```bash
  git clone https://github.com/sekul-hassan/StoreManagement


- **IDE :** If you want to edit something.(Like VSCODE, Intelije IDEA, Netbeans).


## Download Project 
- Open your pc ``terminal/cmd`` from any directory.
- Copy this command and past it ```git clone https://github.com/sekul-hassan/StoreManagement``` You look download this project.
- Then ``cd StoreManagement`` go to project directory.

## Database Configuration
- **Open xampp :** click search bar xampp start the Apaache and MySQL.
- **Go to browser :** Hit it ``http://localhost/phpmyadmin/``
- **New Database :** Create a new database name ``storemanagement``
- **storemanagement.sql :** From project directory see ``storemanagement.sql`` this file and import it from import section of ``http://localhost/phpmyadmin/`` this.

## Build and Run

- Then ```mvn clean package``` This command build the project and create an executeable file and downlaod the necessary files.
- Then ``cd targer`` executeable file locate this directory.
- Then ``java -jar .\Demo-1.0-SNAPSHOT.jar`` This command run the project. Next part of this command ``Demo-1.0-SNAPSHOT.jar`` will automatic create based on project name and project version.

**After completing those step look project is runing** <br>
**Happy Codding**