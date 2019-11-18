def plusOne(self, digits: List[int]) -> List[int]:
    if(digits[-1]<9):
        digits[-1]+=1
        return digits
    else:
        if(digits.count(9)==len(digits)):
            a=[1]
            for i in range(len(digits)):
                a.append(0)

            return a
        else:
            carry=False
            index=-1
            for i in range(len(digits)):
                if(carry):
                    if(digits[index]==9):
                        digits[index]=0
                        carry=True
                        index-=1
                        continue
                    else:
                        digits[index]+=1
                        return digits
                if(digits[index]==9):
                    digits[index]=0
                    carry=True
                    index-=1
                    continue
                else:
                    digits[index]+=1
                    return digits
