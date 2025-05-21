# Todochi
Todochi is a local C++ web application that provides a task management dashboard. This project was made with the intention of learning C++.

# Tech Stack
C++ for the backend to develop and test the web server, router, and utility functions
Vanilla Javascript for a static frontend

# Web Application Role
With the purpose of managing your tasks, Todochi will allow a user to create, manage, and delete tasks. 

Create a Task feature:
- Consists of the Title of Task, Category of Task (optional), and Time Spent doing Task (optional), and a description (optional)

Manage a Task feature:
- Add reminders for a task (Specific Time/Date), Priority (Dashboard will prioritize on dashboard)
- Create a repeating agenda for the week/month that contains Tasks, showing your progress bar on the dashboard


Delete a Task feature:
- User will delete a task which will reside in the history section 

AI feature: TBD

# Phase 1: Web Server Implementation
The web server will be implemented in C++ and will handle network connections and HTTP requests/responses with a Server class.

## main.cpp

- Start the server, bind to a port, accept incoming requests, and delegate those requests to your Router or Server classes

## server.hpp, server.cpp, test_server.cpp

- Handle socket creation and binding, accept connections, read/parse raw HTTP requests, send back responses via HTTP server loop in server.cpp
- Pass parsed requests to your Router class in router.cpp
- Test to confirm server is listening and accepting connections and see a browser hit the server to get a basic response (OK 200) 


## router.hpp, router.cpp
- Match URL paths and HTTP methods
- Call the appropriate handler logic (load task list, add new task)

📌 Prompt to Paste Tomorrow:

Hi! I’m working on a C++ web server project for local use. My project structure includes directories like src/, include/, www/, and Data/. The goal is to build a web server that supports a to-do list, event/calendar features, and (maybe later) user accounts. Right now, I want to focus only on implementing the core web server functionality — handling incoming HTTP requests and responses.

I’ve already planned to put the main server loop inside server.cpp, route logic in router.cpp, and start the server in main.cpp. I also have the appropriate headers (server.hpp, router.hpp) set up with include guards.

Can you help me start coding the server logic in server.cpp, beginning with the setup and HTTP loop?




# Phase 2: Web Application Implementation

The web application will handle basic CRUD operations for Task objects with local-user support
🛠️ Phase 1: MVP for Local Use
	•	Basic web server handling GET/POST
	•	HTML interface to:
	•	Add tasks
	•	Mark complete/delete
	•	View history
	•	Store data in a file (JSON, CSV, or plain text)

🧭 Phase 2: Add Calendar + Notifications
	•	Calendar view
	•	Event creation with time
	•	Local notification system (background thread or log output)

🧑‍💻 Phase 3: Modular Design for Future Auth
	•	Abstract the “user” concept in your data model (even if it’s just one user)
	•	Start separating frontend/backend logic

🔐 Phase 4 (Optional): Add Authentication
	•	Login/register pages
	•	Password storage (use hashing like bcrypt or Argon2)
	•	Session or token system