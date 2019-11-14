    def countAndSay(self, n: int) -> str:
        if(n==1):
            return "1"
        if(n==2):
            return "11"
        current="11"
        
        for i in range(n-2):
            idx=0
            check=1
            split_current=[]
            for j in range(len(current)-1):
                if(current[j]!=current[j+1]):
                    check=0
                    split_current.append(current[idx:j+1])
                    idx=j+1
                    
                if(j+1 ==len(current)-1):
                    split_current.append(current[idx:len(current)])
                    continue
            current=""
            
            for k in split_current:
                current+=str(len(k))+k[0]
        return current
