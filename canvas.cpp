bool isKeyPressed(int vKey){ return (GetAsyncKeyState(vKey) & 0x8000) != 0;}
}
