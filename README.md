# UE5.2_Tencent_gam_dev_note
UE5.2 遊戲引擎學習筆記 + 2023腾讯游戏客户端开发公开课筆記

# 目錄
- [00-UE5.2源碼編譯與安裝](Note\00-UE5.2源碼編譯與安裝.md)
- [01-UE C++基本語法和結構](Note\01-UE%20C++基本語法和結構.md)

# 資源
- https://www.youtube.com/watch?v=k-zMkzmduqI&ab_channel=UnrealSensei

# 社區入口
- https://dev.epicgames.com/community/
- https://dev.epicgames.com/community/unreal-engine/learning/page/2?source=epic_games&types=tutorial,course,talks_and_demos,livestream,learning_path&categories=rendering

# 5.3 資訊
- https://mp.weixin.qq.com/s/8oJ_lafa3mudIGJicPQ4wA

# character-creator CC
- https://www.reallusion.com/character-creator/
- https://www.youtube.com/watch?v=D9xtj-_l3gY&ab_channel=askNK

# git LFS
- https://git-lfs.com/

To get started with Git LFS, the following commands can be used.

1. Setup Git LFS on your system. You only have to do this once per
  repository per machine:

```
      git lfs install
```

1. Choose the type of files you want to track, for examples all ISO
  images, with git lfs track:

```
      git lfs track "*.iso"
```

1. The above stores this information in gitattributes(5) files, so
  that file need to be added to the repository:
  
```
      git add .gitattributes
```

1. Commit, push and work with the files normally:
  
```
      git add file.iso
      git commit -m "Add disk image"
      git push
```
