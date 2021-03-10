/**
 * this is a BF script complier, which likes nodejs, python etc.
 * usage: cc11_complier.out <your_BF_script>
 * */
#include "iostream"
#include "string"
#include "memory"

using std::cin;
using std::cout;
using std::endl;
using std::ios;
using std::allocator;
using std::unique_ptr;

const char IN_POINT = '>';
const char DE_POINT = '<';
const char INCRE = '+';
const char DECRE = '-';
const char OUTPUT = '.';
const char INPUT = ',';
const char L_START = '[';
const char L_END = ']';

int main(int argc, char *argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  //todo: add a memroy (list or vector), add a pointer

  int length = 100;

  allocator<char> alloc;
  unique_ptr<char[]> listptr(alloc.allocate(length));
  // todo: overflow
  long long index = 0;

  // todo: read from file
  char c = 0;
  char input = 0;
  // todo: read from file
  while (cin >> c)
  {
    switch (c)
    {
    case IN_POINT:
    {
      // todo: more than length, double length
      index++;
      break;
    }
    case DE_POINT:
    {
      // todo: less than 0, send error
      index--;
      break;
    }
    case INCRE:
    {
      // todo: overflow
      listptr[index]++;
      break;
    }
    case DECRE:
    {
      // todo: overflow
      listptr[index]--;
      break;
    }
    case OUTPUT:
    {
      cout << listptr[index];
      break;
    }
    case INPUT:
    {
      cin >> input;
      listptr[index] = input;
      break;
    }
    case L_START:
    {
      if(listptr[index] == 0){
        // todo jump
      }
      break;
    }
    case L_END:
    {
      if(listptr[index] != 0){
        // todo jump
      }
      break;
    }
    default:
    {
      break;
    }
    }
  }

  return 0;
}
