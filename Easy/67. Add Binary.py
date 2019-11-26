def addBinary(self, a: str, b: str) -> str:
    if len(a)==0 and len(b)==0:
        return ""
    elif len(a)==0:
        return b
    elif len(b)==0:
        return a
    else:
        if a[-1]=='1' and b[-1]=='1':
            return self.addBinary(self.addBinary(a[0:-1],b[0:-1]),'1')+'0'
        elif a[-1]=='0' and b[-1]=='1':
            return self.addBinary(a[0:-1],b[0:-1])+'1'
        elif a[-1]=='1' and b[-1]=='0':
            return self.addBinary(a[0:-1],b[0:-1])+'1'
        elif a[-1]=='0' and b[-1]=='0':
            return self.addBinary(a[0:-1],b[0:-1])+'0'
