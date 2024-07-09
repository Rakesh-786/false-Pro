// Git Command for Repository 

git branch // check branch( whether it main or matser or other)
git remote -v // check github repository directory link
git remote remove origin //remove link of that repository
git branch main // for branch configuration to main ( you can change it)
git switch main //for switchiching or making branch primary if multiple branch is there
git branch --v // inform you with commit message along with branch
git branch -d master // to delete any branch ( here it master)
git add . // for Add all changes to the staging area
git commit -m "Initial commit" // Commit the staged changes to the repository.
git add -u //To add only modified and deleted files but not new files

// if there is exist remote origin, use
git remote remove origin

 git remote add origin https://github.com/Rakesh-786/false-Pro.git      // we can use any directory instead of false-Pro but first it should creatde in github

// for see repo link
 git remote -v
 //example 
origin  https://github.com/Rakesh-786/false-Pro.git (fetch)
origin  https://github.com/Rakesh-786/false-Pro.git (push)
git config --list // listing all details
 git push origin main // for push file on github repository
