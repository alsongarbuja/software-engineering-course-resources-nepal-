# Lab 1

## Objective

- To understand the workflow of git (VCS)
- To understand the collaborative and branch concept of github
- To create a merge conflict
- To resolve the merge conflict

## Theory

- [GIT](https://git-scm.com) is a decentralized VCS(Version Control System) that is fast and open source. It is used to track the version history of any project small to large and collaborate with other developers with ease and concurrent pipelines.
- [Github](https://github.com) is one of the cloud based system used to handle the remote git repositories.

## Steps

1. Initialize a local git repository
```
git init <folder-name>
```
2. Change the `master` branch to `main`
```
git branch -M main
```
3. Create `index.html` file
4. Add index file to `staging area`
```
git add index.html
```
5. Commit the file with a message
```
git commit -m 'initial commit'
```
6. Create an remote private repository in github
7. Add the remote repo as `origin` in local repo
```
git remote add origin <remote-url>
```
8. Push the main branch to remote repo
```
git push origin main
```
9. Add a collaborator in the remote repo
10. Collaborator will clone the repo
```
git clone <remote-url>
```
11. Create a new branch
```
git branch <new-branch-name>
git checkout <new-branch-name>

or

git checkout -b <new-branch-name>
```
12. Create a new file, add and commit
```
git add <new-file>
git commit -m 'message'
```
13. Push the new branch to the remote repo
```
git push origin <new-branch-name>
```
14. The remote repo owner fetch the new changes to local repo
```
git fetch --all

or

git pull
```
15. Merge the new branch to main branch
```
git checkout main
git merge <new-branch-name>
```
16. Push the merged changes to remote repo
```
git push
```

**Merge conflict**

1. Change the `index.html` file for both your's and your's partner repo
2. Push your partner's changes after adding and commiting
```
git add index.html
git commit -m '<message>'
git push origin main
```
3. Your partner will do the same in your repo
4. Add, commit and try to push your changes in your repo
```
git add index.html
git commit -m '<message>'
git push origin main
```
*A message will show as*

![git pull first message](https://github.com/college-related/Labs-7th-sems/blob/main/Enterprise%20Application%20Development%20(EAD)/labs/lab1/images/pull-frist.png?raw=true)

5. Pull the changes to local repo
```
git pull origin main
```
6. A merge conflict will be shown

![merge conflict example](https://ihatetomatoes.net/wp-content/uploads/2020/05/img_merge-conflict.png)

7. Resolve the conflict by either accepting incoming changes, keeping current changes, accepting both changes or removing both changes.
8. Add, commit and push the merge resolve
```
git add index.html
git commit -m 'merge conflict resolved'

or

git commit -am 'merge conflict resolved'
```

```
git push origin main
```

*Lab work repo in (https://github.com/college-related/git-practice) && (https://github.com/Salipa-Gurung/PRACTICE-GIT)*