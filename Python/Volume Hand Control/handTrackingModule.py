# converting handTracking.py to a module so that we can use in any project

import cv2 as cv
import mediapipe as mp
import time


class handDetector():
    def __init__(self, mode=False, maxHands=2, modelComplexity=1, detectionCon=0.5, trackCon=0.5):  # mpHands variable
        self.mode = mode  # create an object with own variable, self.mode is variable,
        self.maxHands = maxHands
        self.modelComplexity = modelComplexity
        self.detectionCon = detectionCon
        self.trackCon = trackCon

        self.mpHands = mp.solutions.hands
        self.hands = self.mpHands.Hands(self.mode, self.maxHands, self.modelComplexity,
                                        self.detectionCon, self.trackCon)  # using default values #only uses rgb img
        self.mpDraw = mp.solutions.drawing_utils

    def findHands(self, img, draw=True):
        # converting img to rgb
        imgRGB = cv.cvtColor(img, cv.COLOR_BGR2RGB)
        self.results = self.hands.process(imgRGB)
        # print(results.multi_hand_landmarks) #print none if hand is not in video else prints coordinates of hand

        if self.results.multi_hand_landmarks:
            for handLms in self.results.multi_hand_landmarks:
                if draw:
                    self.mpDraw.draw_landmarks(img, handLms,
                                               self.mpHands.HAND_CONNECTIONS)  # draws all 21 points in hands
                # mpHands.HAND_CONNECTIONS  --> this connects the dots
        return img

    def findPosition(self, img, handNo=0, draw=True):
        lmList = []

        # extracting id and landmark(x,y,z) coordinate
        if self.results.multi_hand_landmarks:
            myHand = self.results.multi_hand_landmarks[handNo]  # getting which hand
            for id, lm in enumerate(myHand.landmark):
                # print(id, lm) #values of x,y,z are in float
                # we will convert them to pixels
                h, w, c = img.shape
                cx, cy = int(lm.x * w), int(lm.y * h)
                # print(cx,cy) #now we don't know which value is for which point so we have to use id
                # print(id, cx, cy)
                lmList.append([id, cx, cy])
                if draw:
                    cv.circle(img, (cx, cy), 7, (255, 0, 0), cv.FILLED)

        return lmList


def main():
    #dummy code to use in any other project
    pTime = 0  # previous time
    cTime = 0  # current rime
    cap = cv.VideoCapture(0)
    detector = handDetector()  # calling the class
    while True:
        success, img = cap.read()
        img = detector.findHands(img)
        lmList = detector.findPosition(img)
        if len(lmList) != 0:
            print(lmList[4])

        cTime = time.time()
        fps = 1 / (cTime - pTime)
        pTime = cTime

        # display fps on screen
        cv.putText(img, str(int(fps)), (10, 70), cv.FONT_HERSHEY_PLAIN, 3, (255, 0, 255), 3)

        cv.imshow('Image', img)
        cv.waitKey(1)


if __name__ == "__main__":
    main()
