# Terminal Commands

pwd                     → Show current directory

code filename           → open a file

ls                      → List files and folders

cd FolderName           → Enter a folder

cd ..                   → Go back one folder

cd ../..                → Go back two folders

mkdir FolderName        → Create a new folder

touch fileName          → Create a new file (Git Bash/Linux)

cp source destination   → Copy a file

mv oldName newName      → Move or rename a file

rm fileName             → Delete a file

rmdir FolderName        → Delete an empty folder

cat file.txt            → Display file contents

clear                   → Clear terminal screen

history                 → Show previously used commands

echo Hello              → Print text to terminal

whoami                  → Show current username

date                    → Display current date

exit                    → Close the terminal


# Git Configuration

git user.email                                       → to see user email

git config user.email "new_email@gmail.con"          → set new local Git email

git config --global user.name "Your Name"            → Set global Git username

git config --global user.email "you@example.com"     → Set global Git email

git config --global --list                           → View Git configuration

# Git Repository Commands


git init                                              → Initialize a new Git repository

git clone <repository-url>                            → Clone a GitHub repository

git remote -v                                         → View connected remote repositories

git status                                            → Check repository status

# Git Commit Commands


git add fileName                                      → Stage a specific file

git add .                                             → Stage all changes

git commit -m "Commit message"                        → Create a commit

git push                                              → Upload commits to GitHub

git push origin main                                  → Push to the main branch

git pull                                              → Download and merge latest changes

git fetch                                             → Download changes without merging


# Git Inspection Commands


git log                                               → View commit history

git diff                                              → Show file differences

git show                                              → Show details of the latest commit


# Git Branch Commands


git branch                                            → List branches

git branch branch-name                                → Create a new branch

git checkout branch-name                              → Switch to a branch

git checkout main                                     → Switch back to main branch

git merge branch-name                                 → Merge a branch into the current branch


# Git Undo Commands


git restore file.cpp                                  → Discard changes in a file

git restore --staged file.cpp                         → Unstage a file

git reset --soft HEAD~1                               → Undo the last commit while keeping changes


# Daily Git Workflow


git status

git add .

git commit -m "Describe your work"

git push
