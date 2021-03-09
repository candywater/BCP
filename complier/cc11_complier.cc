#include "iostream"
#include "string"

const char IN_POINT  = '>';
const char DE_POINT  = '<';
const char INCRE     = '+';
const char DECRE     = '-';
const char OUTPUT    = '.';
const char INPUT     = ',';
const char L_START   = '[';
const char L_END     = ']';

int main(int argc, char *argv[]){
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);

  char c = 0;
  //todo: add a memroy (list or vector), add a pointer
  while(std::cin >> c){
    switch (c)
    {
    case IN_POINT:
      break;
    case DE_POINT:
      break;
    case INCRE:
      break;
    case DECRE:
      break;
    case OUTPUT:
      break;
    case INPUT:
      break;
    case L_START:
      break;
    case L_END:
      break;
    default:
      break;
    }
  }

  return 0;
}